#define _CRT_SECURE_NO_WARNINGS 1

#define N 3

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef char StackDataType;

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

//打印栈顶的值
StackDataType StackTop(Stack* p);


//括号匹配
bool isValid(char * s)
{
    Stack st;
    StackInit(&st);
    while (*s)
    {
        if (*s == '{' || *s == '[' || *s == '(')
        {
            StackPush(&st, *s);
        }
        else
        {
            if (StackEmpty(&st))
            {
                StackDestroy(&st);
                return false;
            }
            char ch = StackTop(&st);
            StackPop(&st);
            if (*s == '}' && ch != '{' ||  *s == ']' && ch != '[' ||  *s == ')' && ch != '(')
            {
                StackDestroy(&st);
                return false;
            }
        }
        ++s;
    }

    bool ret = StackEmpty(&st);
    StackDestroy(&st);

    return ret;
}



char pairs(char ch)
{
    if (ch == '}')
        return '{';
    if (ch == ']')
        return '[';
    if (ch == ')')
        return '(';

    return 0;
}
bool isValid(char* s)
{
    int n = strlen(s);
    if (n % 2 == 1)
        return false;

    char* stk = (char*)malloc(sizeof(char) * (n + 1));
    if (stk == NULL)
    {
        perror("malloc");
        return 1;
    }
    int top = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = pairs(s[i]);//可以使用switch case代替pairs函数
        if (ch)
        {
            if (top == 0 || stk[top - 1] != ch)
            {
                free(stk);
                stk = NULL;
                return false;
            }
            top--;
        }
        else
        {
            stk[top++] = s[i];
        }
    }
    if (top)
    {
        free(stk);
        stk = NULL;
        return false;
    }
    return true;
}



//用栈实现队列
#define N 3

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

StackDataType StackTop(Stack* p);

void StackInit(Stack* p)
{
    assert(p);
    p->capacity = N;
    p->arr = (StackDataType*)malloc(p->capacity * sizeof(StackDataType));
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

typedef struct {
    Stack push;
    Stack pop;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    if (queue == NULL)
    {
        perror("malloc");
        return NULL;
    }
    StackInit(&queue->push);
    StackInit(&queue->pop);
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    assert(obj);
    StackPush(&obj->push, x);
}

bool myQueueEmpty(MyQueue* obj) {
    return StackEmpty(&obj->push) && StackEmpty(&obj->pop);
}

int myQueuePeek(MyQueue* obj) {
    assert(obj);
    assert(!myQueueEmpty(obj));
    if (StackEmpty(&obj->pop))
    {
        while (!StackEmpty(&obj->push))
        {
            StackPush(&obj->pop, StackTop(&obj->push));
            StackPop(&obj->push);
        }
    }

    return StackTop(&obj->pop);
}

int myQueuePop(MyQueue* obj) {
    int val = myQueuePeek(obj);
    StackPop(&obj->pop);
    return val;
}

void myQueueFree(MyQueue* obj) {
    assert(obj);
    StackDestroy(&obj->push);
    StackDestroy(&obj->pop);
    free(obj);
}


//用队列实现栈

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

typedef struct {
    QUE q1;
    QUE q2;
} MyStack;

void QueueInit(QUE* p)
{
    assert(p);
    p->tail = p->head = NULL;
    p->size = 0;
}

bool QueueEmpty(QUE* p)
{
    assert(p);
    return p->size == 0;
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
        assert(p->tail == NULL);//判断p->tail此时也为NULL
        p->head = p->tail = newnode;
    }
    else
    {
        p->tail->next = newnode;
        p->tail = p->tail->next;
    }

    p->size++;
}

QueueDataType QueueBack(QUE* p)
{
    assert(p);
    assert(!QueueEmpty(p));
    return p->tail->val;
}

QueueDataType QueueFront(QUE* p)
{
    assert(p);
    assert(!QueueEmpty(p));
    return p->head->val;
}

int QueueSize(QUE* p)
{
    assert(p);
    return p->size;
}

void QueuePop(QUE* p)
{
    assert(p);
    //assert(p->head != NULL);
    assert(!QueueEmpty(p));
    if (p->head == p->tail)
    {
        free(p->head);
        //free(p->tail);//不能释放同一块空间两次
        p->head = NULL;
        p->tail = NULL;
    }
    else
    {
        Queue* next = p->head->next;
        free(p->head);
        p->head = next;

    }
    p->size--;
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
    //free(p->tail); 不能有,p->tail已经被释放过了
    p->head = p->tail = NULL;
    p->size = 0;
}

MyStack* myStackCreate()
{
    MyStack* p = (MyStack*)malloc(sizeof(MyStack));
    if (p == NULL)
    {
        perror("malloc");
        return NULL;
    }
    QueueInit(&p->q1);
    QueueInit(&p->q2);
    return p;
}

void myStackPush(MyStack* obj, int x)
{
    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj)
{
    QUE* empty = &obj->q1;
    QUE* unempty = &obj->q2;
    if (QueueEmpty(unempty))
    {
        empty = &obj->q2;
        unempty = &obj->q1;
    }
    while (QueueSize(unempty) > 1)
    {
        QueuePush(empty, QueueFront(unempty));
        QueuePop(unempty);
    }
    int val = QueueFront(unempty);
    QueuePop(unempty);
    return val;
}

int myStackTop(MyStack* obj)
{
    if (!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj)
{
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj)
{
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);
    free(obj);
}



//设计循环队列
typedef struct {
    int* arr;
    int front;
    int rear;
    int k;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* ret = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    if (ret == NULL)
    {
        perror("malloc queue");
        return NULL;
    }
    ret->arr = (int*)malloc(sizeof(int) * (k + 1));
    if (ret->arr == NULL)
    {
        perror("malloc arr");
        return NULL;
    }
    ret->front = ret->rear = 0;
    ret->k = k;
    return ret;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == obj->rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return obj->front == (obj->rear + 1) % (obj->k + 1);
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
        return false;
    obj->arr[obj->rear++] = value;
    obj->rear %= obj->k + 1;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->front++;
    obj->front %= obj->k + 1;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->arr[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;
    /*if (obj->rear > 0)
        return obj->arr[obj->rear - 1];
    else
        return obj->arr[obj->k];*/
    return obj->arr[(obj->rear - 1 + obj->k + 1) % (obj->k + 1)];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->arr);
    free(obj);
}

















