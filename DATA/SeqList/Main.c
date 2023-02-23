#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqListTest1()
{
	printf("\nSeqListTest1:\n");
	SeqList n;
	SeqListInit(&n);
	SeqListPushBack(&n, 1);
	SeqListPushBack(&n, 2);
	SeqListPushBack(&n, 3);
	SeqListPushBack(&n, 4);
	SeqListPushBack(&n, 5);
	SeqListPushBack(&n, 6);
	SeqListPushBack(&n, 7);
	SeqListPrint(&n);
	printf("\n");

	int key = 5;
	int i = SeqListFind(&n, key);
	if (i == -1)
		printf("’“≤ªµΩ\n");
	else
		printf("the index of %d is %d\n", key, i);

	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPrint(&n);
	printf("\n");

	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPopBack(&n);
	SeqListPrint(&n);
	printf("\n");

	SeqListDestroy(&n);

}


void SeqListTest2()
{
	printf("\nSeqListTest2:\n");
	SeqList n;
	SeqListInit(&n);
	SeqListPushFront(&n, 5);
	SeqListPushFront(&n, 4);
	SeqListPushFront(&n, 3);
	SeqListPushFront(&n, 2);
	SeqListPushFront(&n, 1);
	SeqListPushFront(&n, 0);
	SeqListPushFront(&n, -1);
	SeqListPushFront(&n, -2);
	SeqListPrint(&n);
	putchar('\n');
	
	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPrint(&n);
	putchar('\n');

	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPrint(&n);
	putchar('\n');

	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPopFront(&n);
	SeqListPrint(&n);
	putchar('\n');

	SeqListDestroy(&n);

}


void SeqListTest3()
{
	printf("\nSeqListTest3:\n");
	SeqList n;
	SeqListInit(&n);

	SeqListInsert(&n, 0, 2);
	SeqListInsert(&n, 0, 22);
	SeqListInsert(&n, 0, 21);
	SeqListInsert(&n, 0, 20);
	SeqListInsert(&n, 2, 25);
	SeqListInsert(&n, 3, 29);
	SeqListInsert(&n, 1, 27);
	SeqListInsert(&n, 5, 28);
	SeqListPrint(&n);
	putchar('\n');

	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListErase(&n, 5);
	SeqListPrint(&n);
	putchar('\n');

	SeqListDestroy(&n);

}


int main()
{
	//SeqListTest1();
	//SeqListTest2();
	SeqListTest3();
	return 0;
}