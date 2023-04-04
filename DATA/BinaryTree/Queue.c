#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(QUE* p)
{
	assert(p);
	p->tail = p->head = NULL;
	p->size = 0;
}

void QueueDestroy(QUE* p)
{
	assert(p);
	Queue* cur = p->head;
	while (cur)
	{
		Queue* next = cur->next;
		free(cur);
		cur = next;
	}
	//����ʹ��free()��ͬһ����ַ���ж���ͷţ�
	//���������ᵼ�³�������򲻿�Ԥ�����Ϊ��
	//��ˣ�Ӧ�ñ������ͷ�ͬһ����ַ��

	//free(p->tail); //p->tail�Ѿ����ͷŹ���
	p->head = p->tail = NULL;
	p->size = 0;
}

bool QueueEmpty(QUE* p)
{
	assert(p);
	return p->size == 0;
}

int QueueSize(QUE* p)
{
	assert(p);
	return p->size;
}

void QueuePush(QUE* p, QueueDataType val)
{
	assert(p);
	Queue* newnode = (Queue*)malloc(sizeof(Queue));
	if (newnode == NULL)
	{
		perror("newnode malloc");
		return;
	}
	newnode->next = NULL;
	newnode->val = val;

	if (p->head == NULL)
	{
		assert(p->tail == NULL);//�ж�p->tail��ʱҲΪNULL
		p->head = p->tail = newnode;
	}
	else
	{
		p->tail->next = newnode;
		p->tail = p->tail->next;
	}

	p->size++;
}

void QueuePop(QUE* p)
{
	assert(p);
	//assert(p->head != NULL);
	assert(!QueueEmpty(p));
	if (p->head == p->tail)
	{
		free(p->head);
		//free(p->tail);//�����ͷ�ͬһ��ռ�����
		p->tail = p->head = NULL;
	}
	else
	{
		Queue* next = p->head->next;
		free(p->head);
		p->head = next;

	}
	p->size--;
}

QueueDataType QueueFront(QUE* p)
{
	assert(p);
	assert(!QueueEmpty(p));
	return p->head->val;
}

QueueDataType QueueBack(QUE* p)
{
	assert(p);
	assert(!QueueEmpty(p));
	return p->tail->val;
}