#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

//���
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d����>", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//�����µĽڵ�
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

//β��
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


//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//βɾ
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* tail = *pphead;
	if (NULL == tail->next)
	{
		free(*pphead);
		//��ʱֻ��һ���ڵ㣬�Ƕ�������и���
		//���ܻ���tail����ʱ�Ƕ�����Ľṹ���У���Ҫ�ö���ָ��
		// tail ֻ�ܶ������ÿ���ṹ����ڲ����ݽ��и���
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

//ͷɾ
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* head = *pphead;
	*pphead = head->next;
	free(head);//�ͷŵ�����һ���ṹ���ڵ�ָ�룬����ֱ��ʹ�ýṹ��ָ��
	head = NULL;
}

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	//assert(phead); ������Ҳ���Բ��ң�ֻ�ǻ᷵�� NULL
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

//�� pos ǰ����һ��Ԫ��
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	//assert(pos);	//pos = NULLʱ���ȼ���β��
	
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


//ɾ�� pos λ��Ԫ��
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	//assert(*pphead);
	// �ú����е� pos �� SListFind �ķ���ֵ
	//��assert(*pphead)����Ҳ����û��Ԫ�أ���������� pos == NULL ����
	//Ҳ����SListFind�ķ���ֵ�� NULL��pos��ʱ���Ѿ������ˣ�����û��assert(*pphead)

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


//�� pos �����һ��Ԫ��
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}


//ɾ�� pos ���Ԫ��

void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	
	SLTNode* p = pos->next;
	pos->next = pos->next->next;
	free(p);
	p = NULL;

}
