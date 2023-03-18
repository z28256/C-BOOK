#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int LTDataType;

struct LTNode
{
	LTDataType data;
	struct LTNode* prev;
	struct LTNode* next;
};

typedef struct LTNode LTNode;

extern LTNode* BuyListNode(LTDataType val);

extern LTNode* LTInit();

extern void LTDestroy(LTNode* phead);

extern void LTPrint(LTNode* phead);

extern void LTPushBack(LTNode* phead, LTDataType val);

extern bool LTEmpty(LTNode* phead);

extern void LTPopBack(LTNode* phead);

extern void LTPushFront(LTNode* phead, LTDataType val);

extern void LTPopFront(LTNode* phead);

extern void LTInsert(LTNode* pos, LTDataType val);

extern void LTErase(LTNode* pos);

extern LTNode* LTFind(LTNode* phead, LTDataType val);