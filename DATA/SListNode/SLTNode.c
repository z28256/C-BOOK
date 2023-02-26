#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

// ��̬����һ���ڵ�
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

// �������ӡ
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

// ������β��
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

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// �������βɾ
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
// ������ͷɾ
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
