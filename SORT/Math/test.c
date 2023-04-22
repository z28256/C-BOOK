#define _CRT_SECURE_NO_WARNINGS 1

//1.位1的个数
//编写一个函数，输入是一个无符号整数（以二进制串的形式），
//返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。

//1.
// int hammingWeight(uint32_t n) 
// {
//     int count = 0;
//     while (n)
//     {
//         n &= n - 1;
//         count++;
//     }
//     return count;
// }


//2.1
// int hammingWeight(uint32_t n) 
// {
//     int count = 0;
//     for (int i = 0; i < 32; ++i)
//     {
//         if ((n>>i) & 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }


//2.2
//int hammingWeight(uint32_t n)
//{
//    int count = 0;
//    for (int i = 0; i < 32; ++i)
//    {
//        if (n & (uint32_t)1 << i)
//        {
//            count++;
//        }
//    }
//    return count;
//}


//2.汉明距离
//两个整数之间的 汉明距离 指的是这两个数字对应二进制位不同的位置的数目。
//给你两个整数 x 和 y，计算并返回它们之间的汉明距离。

int hammingDistance(int x, int y)
{
    int n = x ^ y;
    int count = 0;
    while (n)
    {
        n &= n - 1;
        count++;
    }
    return count;
}


//3.颠倒二进制位
//颠倒给定的 32 位无符号整数的二进制位。

//1.
// uint32_t reverseBits(uint32_t n) 
// {
//     uint32_t ret = 0;
//     for (int i = 0; i < 32; ++i)
//     {
//         ret |= (n & 1) << (31 - i);
//         n >>= 1;
//     }
//     return ret;
// }


//2.
//const uint32_t M1 = 0x55555555;
//const uint32_t M2 = 0x33333333;
//const uint32_t M3 = 0x0f0f0f0f;
//const uint32_t M4 = 0x00ff00ff;
//uint32_t reverseBits(uint32_t n)
//{
//    n = n >> 1 & M1 | (n & M1) << 1;
//    n = n >> 2 & M2 | (n & M2) << 2;
//    n = n >> 4 & M3 | (n & M3) << 4;
//    n = n >> 8 & M4 | (n & M4) << 8;
//    return n >> 16 | n << 16;
//}


//4.杨辉三角
//给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int** ret = (int**)malloc(sizeof(int*) * numRows);
    *returnSize = numRows;
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; ++i)
    {
        ret[i] = (int*)malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        ret[i][0] = ret[i][i] = 1;
        for (int j = 1; j < i; ++j)
        {
            ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
    }
    return ret;
}


//5.有效的括号
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//每个右括号都有一个对应的相同类型的左括号。

#include <stdbool.h>

char pairs(char ch)
{
    if (ch == ')')
        return '(';
    else if (ch == ']')
        return '[';
    else if (ch == '}')
        return '{';
    return 0;
}

bool isValid(char* s)
{
    int n = strlen(s);
    if (n % 2)
        return false;
    int stk[n + 1], top = 0;
    for (int i = 0; i < n; ++i)
    {
        char ch = pairs(s[i]);
        if (ch)
        {
            if (top == 0 || stk[top - 1] != ch)
                return false;
            top--;
        }
        else
        {
            stk[top++] = s[i];
        }
    }
    return top == 0;
}


//6.缺失数字
//给定一个包含[0, n] 中 n 个数的数组 nums ，找出[0, n] 这个范围内没有出现在数组中的那个数。

//1.
int missingNumber(int* nums, int numsSize)
{
    int ret = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        ret = ret ^ nums[i] ^ i;
    }
    return ret ^ numsSize;
}


//2.
 int missingNumber(int* nums, int numsSize)
 {
     int sum = 0;
     for (int i = 0; i < numsSize; ++i)
     {
         sum += nums[i];
     }
     return numsSize * (1 + numsSize) / 2 - sum;
 }