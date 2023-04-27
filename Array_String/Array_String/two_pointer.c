#define _CRT_SECURE_NO_WARNINGS 1

//1.反转字符串

//编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

void reverseString(char* s, int sSize)
{
    int left = 0, right = sSize - 1;
    while (left < right)
    {
        char ch = s[left];
        s[left] = s[right];
        s[right] = ch;
        left++;
        right--;
    }
}


//2.数组拆分 I

// 给定长度为 2n 的整数数组 nums ，你的任务是将这些数分成 n 对, 
// 例如(a1, b1), (a2, b2), ..., (an, bn) ，
// 使得从 1 到 n 的 min(ai, bi) 总和最大。返回该 最大总和 。

int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int arrayPairSum(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0;
    for (int i = 0; i < numsSize; i += 2)
    {
        sum += nums[i];
    }
    return sum;
}


//3.数之和 II - 输入有序数组

//给你一个下标从 1 开始的整数数组 numbers ，该数组已按 非递减顺序排列
//请你从数组中找出满足相加之和等于目标数 target 的两个数。
//你可以假设每个输入 只对应唯一的答案 


//(1)暴力匹配
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    *returnSize = 2;
    int* ret = (int*)malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numbersSize - 1; ++i)
    {
        for (int j = i + 1; j < numbersSize; ++j)
        {
            if (numbers[i] + numbers[j] == target)
            {
                ret[0] = i + 1;
                ret[1] = j + 1;
                goto end;
            }
        }
    }
end:
    return ret;
}


//(2)二分法
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    *returnSize = 2;
    int* ret = (int*)malloc(*returnSize * sizeof(int));
    int left = 0, right = numbersSize - 1;
    while (left < right)
    {
        if (numbers[left] + numbers[right] == target)
        {
            ret[0] = left + 1;
            ret[1] = right + 1;
            break;
        }
        else if (numbers[left] + numbers[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return ret;
}



//4.移除元素

//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。


int removeElement(int* nums, int numsSize, int val)
{
    int fast = 0, slow = 0;
    while (fast < numsSize)
    {
        if (nums[fast] != val)
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}



//5.最大连续1的个数

//给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int count = 0, max = 0;
    int index = 0;
    while (index < numsSize)
    {
        if (nums[index++])
        {
            count++;
        }
        else
        {
            max = count > max ? count : max;
            count = 0;
        }
    }
    return max = count > max ? count : max;
}


//6.长度最小的子数组

//给定一个含有 n 个正整数的数组和一个正整数 target 。
//找出该数组中满足其和 ≥ target 的长度最小的连续子数组 
//[numsl, numsl + 1, ..., numsr - 1, numsr] ，并返回其长度。
//如果不存在符合条件的子数组，返回 0 。

int minSubArrayLen(int target, int* nums, int numsSize)
{
    int ret = numsSize + 1;
    int sum = 0;
    int fast = 0, slow = 0;
    while (fast < numsSize)
    {
        sum += nums[fast++];
        while (sum >= target)
        {
            ret = ret > fast - slow ? fast - slow : ret;
            sum -= nums[slow++];
        }
    }
    return ret == numsSize + 1 ? 0 : ret;
}

