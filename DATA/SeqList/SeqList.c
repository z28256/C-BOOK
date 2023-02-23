#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//检查容量

void Check_Capcity(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		SLDateType* temp = (SLDateType*)realloc(ps->a, sizeof(SLDateType) * ps->capacity);
		if (!temp)
		{
			perror("realloc");
			return;
		}
		ps->a = temp;
	}

}


// 对数据的管理:增删查改 
void SeqListInit(SeqList* ps)
{
	ps->capacity = CAPCITY;
	ps->size = 0;
	ps->a = (SLDateType*)calloc(ps->capacity, sizeof(SeqList));
	if (!(ps->a))
	{
		perror("calloc");
		return;
	}
}


void SeqListDestroy(SeqList* ps)
{
	ps->size = 0;
	ps->capacity = 0;
	free(ps->a);
	ps->a = NULL;
}


void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\n", ps->a[i]);
	}
}


void SeqListPushBack(SeqList* ps, SLDateType x)
{
	Check_Capcity(ps);
	ps->a[ps->size++] = x;

}


void SeqListPushFront(SeqList* ps, SLDateType x)
{
	ps->size++;
	Check_Capcity(ps);
	memmove(&ps->a[1], ps->a, sizeof(SLDateType) * (ps->size - 1));
	ps->a[0] = x;
}


void SeqListPopFront(SeqList* ps)
{
	if (ps->size == 1 || !(ps->size))
	{
		ps->size = 0;
		return;
	}

	ps->size--;
	memmove(ps->a, &ps->a[1], sizeof(SLDateType) * ps->size);

}


void SeqListPopBack(SeqList* ps)
{
	if (ps->size == 0)
		return;
	ps->size--;
}


// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}


// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	ps->size++;
	Check_Capcity(ps);
	if (pos < 0 || pos >= ps->size)
	{
		printf("Error!\n");
		return;
	}
	memmove(&ps->a[pos + 1], &ps->a[pos], sizeof(SLDateType) * (ps->size - pos - 1));

	ps->a[pos] = x;

}


// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos)
{
	if (pos < 0 || pos >= ps->size)
	{
		printf("Error!\n");
		return;
	}

	if (ps->size == 1 || !(ps->size))
	{
		ps->size = 0;
		return;
	}

	memmove(&ps->a[pos], &ps->a[pos + 1], sizeof(SLDateType) * (ps->size - pos - 1));
	ps->size--;

}