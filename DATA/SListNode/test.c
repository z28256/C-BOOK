#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

void test1()
{
	SListNode* phead = NULL;
	SListPrint(phead);
	SListPushBack(&phead, 1);
	SListPrint(phead);
	SListPushBack(&phead, 2);
	SListPrint(phead);
	SListPushBack(&phead, 3);
	SListPrint(phead);
	SListPushBack(&phead, 4);
	SListPrint(phead);

	//SListPushFront(&phead, 1);
	//SListPrint(phead);
	//SListPushFront(&phead, 2);
	//SListPrint(phead);
	//SListPushFront(&phead, 3);
	//SListPrint(phead);
	//SListPushFront(&phead, 4);
	//SListPrint(phead);

	//SListPopBack(&phead);
	//SListPrint(phead);
	//SListPopBack(&phead);
	//SListPrint(phead);
	//SListPopBack(&phead);
	//SListPrint(phead);
	//SListPopBack(&phead);
	//SListPrint(phead);
	//SListPopBack(&phead);
	//SListPrint(phead);

	SListPopFront(&phead);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPrint(phead);

}

int main()
{
	test1();
	return 0;
}