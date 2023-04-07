#define _CRT_SECURE_NO_WARNINGS 1

//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//
//请必须使用时间复杂度为 O(log n) 的算法。


int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = (right - left >> 1) + left;
        if (target < nums[mid])
            right = mid - 1;
        else if (target > nums[mid])
            left = mid + 1;
        else
            return mid;
    }
    if (nums[mid] > target)
        return mid;
    else
        return mid + 1;
}



int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    int fast = 1;
    int slow = 0;
    while (fast < numsSize)
    {
        if (nums[fast] == nums[slow])
            ++fast;
        else
            nums[++slow] = nums[fast++];
    }
    return slow + 1;
}



//给你一个整数数组 prices ，
//其中?prices[i] 表示某支股票第 i 天的价格。
//在每一天，你可以决定是否购买和 / 或出售股票。
//你在任何时候?最多?只能持有 一股 股票。
//你也可以先购买，然后在 同一天 出售。

int maxProfit(int* prices, int pricesSize)
{
    int ret = 0;
    for (int i = 0; i < pricesSize - 1; i++)
    {
        if (prices[i + 1] > prices[i])
            ret += prices[i + 1] - prices[i];
    }
    return ret;
}


//轮转数组
//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void reverse(int* nums, int left, int right)
{
    while (left < right)
    {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
}*/


void rotate(int* nums, int numsSize, int k)
{
    if (numsSize == 0 || numsSize == 1)
        return;
    k %= numsSize;

    //方法1：交换
    /*reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);*/

    //方法2：
    int* left = (int*)malloc(sizeof(int) * (size_t)(numsSize - k));
    if (left == NULL)
    {
        perror("malloc left");
        return;
    }
    memmove(left, nums, sizeof(int) * (size_t)(numsSize - k));

    int* right = (int*)malloc(sizeof(int) * k);
    if (right == NULL)
    {
        perror("malloc right");
        return;
    }
    memmove(right, nums + numsSize - k, sizeof(int) * k);

    for (int i = 0; i < k; i++)
    {
        nums[i] = right[i];
    }
    for (int i = 0; i < numsSize - k; i++)
    {
        nums[k + i] = left[i];
    }

}



