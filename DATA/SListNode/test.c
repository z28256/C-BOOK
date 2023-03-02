#define _CRT_SECURE_NO_WARNINGS 1
#include "SLTNode.h"

void test1()
{
	SLTNode* plist = NULL;
	
	SLTPushBack(&plist, 1);
	//SLTPushBack(&plist, 2);
	//SLTPushBack(&plist, 3);
	//SLTPushBack(&plist, 4);

	SLTPopBack(&plist);
	SLTPrint(plist);
}

void test2()
{
	SLTNode* plist = NULL;

	SLTPushFront(&plist, 1);
	//SLTPushFront(&plist, 2);
	//SLTPushFront(&plist, 3);
	//SLTPushFront(&plist, 4);
	SLTPopFront(&plist);
	SLTPrint(plist);
}

void test3()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);

	SLTNode* find = SListFind(plist, 3);
	(find->data) *= 2;
	SLTPrint(plist);
	
}

void test4()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
		
	//SListInsert(&plist, SListFind(plist, 1), 9);
	SListInsert(&plist, NULL, 6);
	SLTPrint(plist);
	//SListErase(&plist, SListFind(plist, 6));
	//SLTPrint(plist);
	//SListErase(&plist, SListFind(plist, 9));
	//SLTPrint(plist);
}


void test5()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);

	SListInsertAfter(SListFind(plist, 3), 9);
	SListInsertAfter(SListFind(plist, 4), 8);
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 4));
	SLTPrint(plist);

	SListEraseAfter(SListFind(plist, 2));
	SLTPrint(plist);

}

int main()
{
	//test1();
	test2();

	//test3();
	//test4();
	//test5();
	

	return 0;
}