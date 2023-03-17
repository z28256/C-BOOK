#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

int main()
{
	Stack p;
	StackInit(&p);

	StackPush(&p, 1);
	StackPush(&p, 2);
	StackPush(&p, 3);
	StackPush(&p, 4);
	StackPush(&p, 5);
	StackPush(&p, 6);

	while (!StackEmpty(&p))
	{
		printf("%d ", StackTop(&p));
		StackPop(&p);
	}
	
	StackDestroy(&p);

	return 0;
}