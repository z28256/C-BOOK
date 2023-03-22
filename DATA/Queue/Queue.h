#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QueueDataType;

typedef struct Queue
{
	struct Queue* next;
	QueueDataType val;
}Queue;

typedef struct QUE
{
	Queue* head;
	Queue* tail;
	int size;
}QUE;

void QueueInit(QUE* p);
void QueueDestroy(QUE* p);
bool QueueEmpty(QUE* p);
int QueueSize(QUE* p);
void QueuePush(QUE* p, QueueDataType val);
void QueuePop(QUE* p);

// ��ȡ����ͷ��Ԫ��
QueueDataType QueueFront(QUE* q);
// ��ȡ���ж�βԪ��
QueueDataType QueueBack(QUE* q);