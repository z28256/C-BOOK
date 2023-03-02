﻿#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;


void SLTPrint(SLTNode* phead);
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);


 
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SListErase(SLTNode** pphead, SLTNode* pos);


void SListInsertAfter(SLTNode* pos, SLTDataType x);

void SListEraseAfter(SLTNode* pos);