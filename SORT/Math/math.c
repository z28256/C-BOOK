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


//动态规划

//1.爬楼梯
//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

int climbStairs(int n)
{
    if (n < 3)
        return n;
    int n1 = 1;
    int n2 = 2;
    n -= 2;
    int ret = 0;
    while (n--)
    {
        ret = n1 + n2;
        n1 = n2;
        n2 = ret;
    }
    return ret;
}


//2.买卖股票的最佳时机
//给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
//你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。
//返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。


int maxProfit(int* prices, int pricesSize)
{
    int max = 0, min = prices[0];
    for (int i = 1; i < pricesSize; ++i)
    {
        if (min > prices[i])
            min = prices[i];
        else if (max < prices[i] - min)
            max = prices[i] - min;
    }
    return max;
}


//3.最大子序和
//给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//子数组 是数组中的一个连续部分。

int maxSubArray(int* nums, int numsSize)
{
    int max = nums[0], pre = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        pre = pre + nums[i] > nums[i] ? pre + nums[i] : nums[i];
        max = max > pre ? max : pre;
    }
    return max;
}


//4.打家劫舍
//每间房都藏有现金，制约是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被闯入，会自动报警。
//给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
#include <stdio.h>
int rob(int* nums, int numsSize)
{
    if (nums == NULL)
        return 0;
    if (numsSize == 1)
        return nums[0];
    int first = nums[0], second = nums[1] > nums[0] ? nums[1] : nums[0];
    for (int i = 2; i < numsSize; ++i)
    {
        int temp = second;
        second = second > nums[i] + first ? second : nums[i] + first;
        first = temp;
    }
    return second;
}