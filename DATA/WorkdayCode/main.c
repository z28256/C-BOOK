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
























