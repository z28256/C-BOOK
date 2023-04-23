#define _CRT_SECURE_NO_WARNINGS 1

//1.找到数组的中间位置

//给你一个下标从 0 开始的整数数组 nums ，请你找到 最左边 的中间位置 middleIndex 。
//中间位置 middleIndex 是满足 nums[0] + ... + nums[middleIndex - 1] == nums[middleIndex + 1] + ... + nums[nums.length - 1] 的数组下标。
//如果 middleIndex == 0 ，左边部分的和定义为 0 。如果 middleIndex == nums.length - 1 ，右边部分的和定义为 0 。


//1.
int findMiddleIndex(int* nums, int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        sum += nums[i];
    }

    int index = 0;
    int sum1 = 0, sum2 = sum;

    while (index < numsSize)
    {
        if (index == 0)
        {
            sum1 = 0;
        }
        else
        {
            sum1 += nums[index - 1];
        }
        sum2 -= nums[index];

        if (sum1 == sum2)
        {
            return index;
        }
        index++;
    }
    return -1;
}


//2.前缀和
int findMiddleIndex(int* nums, int numsSize)
{
    int total = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        total += nums[i];
    }
    int sum = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        if (2 * sum + nums[i] == total)
        {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}



//2.搜索插入位置
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//请必须使用时间复杂度为 O(log n) 的算法。

//(1)

// int searchInsert(int* nums, int numsSize, int target)
// {
//     int left = 0, right = numsSize - 1, ans = numsSize;
//     while (left <= right)
//     {
//         int mid = ((right - left) >> 1) + left;
//         if (target <= nums[mid])
//         {
//             ans = mid;
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }
//     return ans;
// }


//(2)

int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;
    while (left <= right)
    {
        int mid = (right - left) / 2 + left;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}



//合并区间
// 
//以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。
//请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。

#include <stdio.h>

int cmp(const void* e1, const void* e2)
{
    int* intervalX = *((int**)e1);
    int* intervalY = *((int**)e2);
    int ret = intervalX[0] - intervalY[0];
    if (ret == 0)
    {
        ret = intervalX[1] - intervalY[1];
    }
    return ret;
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {
    if (intervals == NULL)
    {
        *returnSize = 0;
        return intervals;
    }
    //先对集合排序，先比较区间的左值，如果相等，再比较右值
    qsort(intervals, intervalsSize, sizeof(intervals[0]), cmp);
    //申请用于返回的二维数组
    int** ret = (int**)malloc(intervalsSize * sizeof(int*));
    for (int i = 0; i < intervalsSize; ++i)
    {
        ret[i] = (int*)malloc(*intervalsColSize * sizeof(int));
    }

    int i, j, cnt = 0;
    for (i = 0; i < intervalsSize;)
    {
        int* intervalX = intervals[i];
        //往后找可以合并的区间
        for (j = i + 1; j < intervalsSize; ++j)
        {
            int* intervalY = intervals[j];
            if (intervalX[1] < intervalY[0])
            {
                break;
            }
            if (intervalX[1] < intervalY[1])
            {
                intervalX[1] = intervalY[1];
            }
        }
        //存储当前区间
        ret[cnt][0] = intervalX[0];
        ret[cnt][1] = intervalX[1];
        cnt++;
        i = j;
    }

    //申请返回数组的长度的数组
    *returnColumnSizes = (int*)malloc(sizeof(int) * cnt);
    for (int i = 0; i < cnt; ++i)
    {
        (*returnColumnSizes)[i] = 2;
    }
    *returnSize = cnt;
    return ret;
}




