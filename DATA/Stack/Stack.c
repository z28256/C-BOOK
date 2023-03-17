#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
void StackInit(Stack* p)
{
	assert(p);
	p->capacity = N;
	p->arr = (StackDataType*)calloc(p->capacity, sizeof(StackDataType));
	if (p->arr == NULL)
	{
		perror("malloc");
		return;
	}
	p->top = 0;
}

void StackDestroy(Stack* p)
{
	assert(p);
	free(p->arr);
	p->arr = NULL;
	p->capacity = 0;
	p->top = 0;
}

void StackPush(Stack* p, StackDataType val)
{
	assert(p);
	if (p->top == p->capacity)
	{
		p->capacity *= 2;
		StackDataType* temp = (StackDataType*)realloc(p->arr, sizeof(StackDataType) * p->capacity);
		if (temp == NULL)
		{
			perror("recalloc");
			return;
		}
		p->arr = temp;
	}

	p->arr[(p->top)++] = val;

}

void StackPop(Stack* p)
{
	assert(p);
	assert(!StackEmpty(p));
	p->top--;
}

int StackSize(Stack* p)
{
	assert(p);
	return p->top;
}

bool StackEmpty(Stack* p)
{
	assert(p);
	return p->top == 0;
}

StackDataType StackTop(Stack* p)
{
	assert(p);
	assert(!StackEmpty(p));
	return p->arr[p->top - 1];
}