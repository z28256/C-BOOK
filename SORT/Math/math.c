#define _CRT_SECURE_NO_WARNINGS 1

//Fizz Buzz
//给你一个整数 n ，找出从 1 到 n 各个整数的 Fizz Buzz 表示，并用字符串数组 answer（下标从 1 开始）返回结果，其中：
//
//answer[i] == "FizzBuzz" 如果 i 同时是 3 和 5 的倍数。
//answer[i] == "Fizz" 如果 i 是 3 的倍数。
//answer[i] == "Buzz" 如果 i 是 5 的倍数。
//answer[i] == i （以字符串形式）如果上述条件全不满足


char** fizzBuzz(int n, int* returnSize)
{
    *returnSize = n;
    char** arr = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 5 == 0 && (i + 1) % 3 == 0)
        {
            arr[i] = "FizzBuzz";
        }
        else if ((i + 1) % 5 == 0)
        {
            arr[i] = "Buzz";
        }
        else if ((i + 1) % 3 == 0)
        {
            arr[i] = "Fizz";
        }
        else
        {
            arr[i] = (char*)calloc(6, sizeof(char));
            sprintf(arr[i], "%d", i + 1);
        }
    }
    return arr;
}


//计数质数
//给定整数 n ，返回 所有小于非负整数 n 的质数的数量 。

int countPrimes(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int count = 0;
    int arr[n];     //变长数组
    memset(arr, 0, sizeof(arr));

    for (int i = 2; i < n; ++i)
    {
        if (!arr[i])
        {
            ++count;
            if ((long)i * i < n)
            {
                for (int j = i * i; j < n; j += i)
                {
                    arr[j] = 1;
                }
            }
        }
    }
    return count;
}


//3的幂
//给定一个整数，写一个函数来判断它是否是 3 的幂次方。如果是，返回 true ；否则，返回 false 。
//整数 n 是 3 的幂次方需满足：存在整数 x 使得 n == 3x

#include <stdbool.h>

bool isPowerOfThree(int n)
{
    while (n && !(n % 3))
    {
        n /= 3;
    }
    return n == 1 ? true : false;
}


//罗马数字转整数
//罗马数字包含以下七种字符 : I， V， X， L，C，D 和 M。

int romanToInt(char* s)
{
    int single_num[26] = { 0 };
    single_num['I' - 'A'] = 1;
    single_num['V' - 'A'] = 5;
    single_num['X' - 'A'] = 10;
    single_num['L' - 'A'] = 50;
    single_num['C' - 'A'] = 100;
    single_num['D' - 'A'] = 500;
    single_num['M' - 'A'] = 1000;
    int sum = 0;
    while (*s)
    {
        if (*(s + 1) && single_num[*(s + 1) - 'A'] > single_num[*s - 'A'])
            sum -= single_num[*s - 'A'];
        else
            sum += single_num[*s - 'A'];
        s++;
    }
    return sum;
}

/*int single_num(char ch)
{
    char str[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    int num[7] = { 1, 5, 10, 50, 100, 500, 1000};
    int i = 0;
    for (i = 0; i < 7; i++)
    {
        if (str[i] == ch)
            break;
    }
    return num[i];
}
int romanToInt(char * s)
{
    int sum = 0;
    while (*s)
    {
        if (*(s + 1) && single_num(*(s + 1)) > single_num(*s))
            sum -= single_num(*s);
        else
            sum += single_num(*s);
        s++;
    }
    return sum;
}*/