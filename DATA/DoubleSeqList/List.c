#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

LTNode* BuyListNode(LTDataType val)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (!newnode)
	{
		perror("malloc");
		return NULL;
	}
	
	newnode->data = val;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}


LTNode* LTInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}


void LTDestroy(LTNode* phead)
{
	phead->prev = NULL;
	LTNode* temp = phead->next;
	free(phead->next);
	temp = NULL;
}


void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	printf("<=head=>");
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	putchar('\n');
}


void LTPushBack(LTNode* phead, LTDataType val)
{
	assert(phead);
	
	LTInsert(phead, val);
	/*LTNode* newnode = BuyListNode(val);
	LTNode* tail = phead->prev;

	phead->prev = newnode;
	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;*/

}

bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next != phead;
}

void LTPopBack(LTNode* phead)
{
	LTErase(phead->prev);

	/*assert(phead);
	assert(LTEmpty(phead));
	LTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
	tail = NULL;*/

}

void LTPushFront(LTNode* phead, LTDataType val)
{
	/*assert(phead);
	LTNode* newnode = BuyListNode(val);
	LTNode* head = phead->next;

	newnode->prev = phead;
	phead->next = newnode;
	newnode->next = head;
	head->prev = newnode;*/

	LTInsert(phead->next, val);
}

void LTPopFront(LTNode* phead)
{
	LTErase(phead->next);

	/*
	assert(phead);
	assert(LTEmpty(phead));

	LTNode* head = phead->next;
	phead->next = head->next;
	head->next->prev = head;

	free(head);
	head = NULL;*/
}

void LTInsert(LTNode* pos, LTDataType val)
{
	assert(pos);
	LTNode* newnode = BuyListNode(val);
	LTNode* prev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	newnode->prev = prev;
	prev->next = newnode;
}

void LTErase(LTNode* pos)
{
	assert(pos);
	assert(LTEmpty(pos));
	LTNode* prev = pos->prev;
	prev->next = pos->next;
	pos->next->prev = prev;
}

