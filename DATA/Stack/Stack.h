#pragma once

#define N 3

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef int StackDataType;

typedef struct Stack
{
	StackDataType* arr;
	int top;
	int capacity;
}Stack;

void StackInit(Stack* p);
void StackDestroy(Stack* p);

void StackPush(Stack* p, StackDataType val);
void StackPop(Stack* p);
int StackSize(Stack* p);
bool StackEmpty(Stack* p);

//´òÓ¡Õ»¶¥µÄÖµ
StackDataType StackTop(Stack* p);