#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

//输出
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d——>", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//建立新的节点
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (!newnode)
	{
		perror("malloc");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuySLTNode(x);

	if (NULL == *pphead)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tile = *pphead;

		while (tile->next)
		{
			tile = tile->next;
		}
		tile->next = newnode;
	}
}


//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//尾删
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* tail = *pphead;
	if (NULL == tail->next)
	{
		free(*pphead);
		//此时只有一个节点，是对链表进行更改
		//不能换成tail，此时是对链表的结构进行，需要用二级指针
		// tail 只能对链表的每个结构体的内部数据进行更改
		*pphead = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

//头删
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* head = *pphead;
	*pphead = head->next;
	free(head);//释放掉的是一个结构体内的指针，可以直接使用结构体指针
	head = NULL;
}

//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	//assert(phead); 空链表也可以查找，只是会返回 NULL
	SLTNode* cur = phead;
	while (cur)
	{
		if (x == cur->data)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

//在 pos 前插入一个元素
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	//assert(pos);	//pos = NULL时，等价于尾插
	
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuySLTNode(x);
		SLTNode* p = *pphead;
		while (p->next != pos)
		{
			p = p->next;
		}
		p->next = newnode;
		newnode->next = pos;
	}
}


//删除 pos 位的元素
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	//assert(*pphead);
	// 该函数中的 pos 是 SListFind 的返回值
	//若assert(*pphead)报错，也就是没有元素，这种情况被 pos == NULL 包括
	//也就是SListFind的返回值是 NULL，pos此时就已经报错了，可以没有assert(*pphead)

	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* p = *pphead;
		while (pos != p->next)
		{
			p = p->next;
		}
		p->next = pos->next;

		free(pos);
		pos = NULL;
	}
}


//在 pos 后插入一个元素
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}


//删除 pos 后的元素

void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	
	SLTNode* p = pos->next;
	pos->next = pos->next->next;
	free(p);
	p = NULL;

}
