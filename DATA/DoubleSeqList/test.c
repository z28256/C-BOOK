#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void test1()
{
	LTNode* phead = LTInit();
	LTPushBack(phead, 5);
	LTPushBack(phead, 2);
	LTPushBack(phead, 1);
	LTPushBack(phead, 0);
	LTPrint(phead);

	LTPopBack(phead);
	LTPopBack(phead);
	LTPopBack(phead);
	LTPopBack(phead);
	LTPrint(phead);

}

void test2()
{
	LTNode* phead = LTInit();
	LTPushFront(phead, 5);
	LTPushFront(phead, 8);
	LTPushFront(phead, 9);
	LTPushFront(phead, 89);
	LTPrint(phead);

	LTPopFront(phead);
	LTPopFront(phead);
	LTPopFront(phead);
	LTPopFront(phead);
	LTPrint(phead);
}

void test3()
{
	LTNode* phead = LTInit();
	LTPushFront(phead, 1);
	LTPushFront(phead, 5);
	LTPushFront(phead, 10);
	LTPushFront(phead, 89);

	LTInsert(LTFind(phead, 5), -9);
	LTPrint(phead);

	LTErase(LTFind(phead, 10));
	LTPrint(phead);

}

int main()
{
	//test1();
	//test2();
	test3();

	return 0;
}