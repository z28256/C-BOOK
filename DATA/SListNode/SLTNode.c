#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (!NewNode)
	{
		perror("malloc");
		return NULL;
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

// 单链表打印
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (!*pplist)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	if (!*pplist)
	{
		return;
	}
	if (!((*pplist)->next))
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
// 单链表头删
void SListPopFront(SListNode** pplist)
{
	if (!*pplist)
	{
		return;
	}

	//SListNode* first = *pplist;
	//*pplist = first->next;
	//free(first);
	//first = NULL;

	*pplist = (*pplist)->next;
}
