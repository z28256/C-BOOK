#define _CRT_SECURE_NO_WARNINGS 1
//原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1)。
//int removeElement(int* nums, int numsSize, int val)
//{
//    int dest = 0;
//    int res = 0;
//    while (res < numsSize)
//    {
//        if (nums[res] != val)
//        {
//            nums[dest++] = nums[res++];
//        }
//        else
//        {
//            res++;
//        }
//    }
//    return dest;
//}


//int removeElement(int* nums, int numsSize, int val)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            nums[i--] = nums[--numsSize];
//        }
//    }
//    return numsSize;
//}


// 删除排序数组中的重复项
//int removeDuplicates(int* nums, int numsSize)
//{
//    int fast = 1;
//    int slow = 0;
//    while (fast < numsSize)
//    {
//        nums[fast] != nums[slow] ? nums[++slow] = nums[fast++] : fast++;
//    }
//    return slow + 1;
//}



//int removeDuplicates(int* nums, int numsSize)
//{
//    int dest = 0;
//    int ret = 1;
//    while (ret < numsSize)
//    {
//        if (nums[ret] == nums[dest])
//        {
//            ret++;
//        }
//        else
//        {
//            nums[++dest] = nums[ret++];
//        }
//    }
//    return dest + 1;
//}



//合并两个有序数组

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int end1 = m - 1;
//    int end2 = n - 1;
//
//    int end = m + n - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        nums1[end--] = nums1[end1] > nums2[end2] ? nums1[end1--] : nums2[end2--];
//    }
//
//    while (end2 >= 0)
//    {
//        nums1[end--] = nums2[end2--];
//    }
//
//}


//JZ53 数字在升序数组中出现的次数
//int GetNumberOfK(int* data, int dataLen, int k)
//{
//    int left = 0;
//    int right = dataLen - 1;
//
//    int mid = 0;
//    int flag = 0;
//    while (left <= right)
//    {
//        mid = ((right - left) >> 1) + left;
//        if (data[mid] == k)
//        {
//            flag = 1;
//            break;
//        }
//        else if (data[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//
//    if (!flag)
//        return 0;
//
//
//    int m = mid - 1;
//    int n = mid + 1;
//    int count = 1;
//    while (data[m--] == k)
//    {
//        count++;
//    }
//    while (data[n++] == k)
//    {
//        count++;
//    }
//
//    return count;
//}


//int GetNumberOfK(int* data, int dataLen, int k)
//{
//    int left = 0;
//    int right = dataLen - 1;
//    int mid = 0;
//
//    int flag = 1;
//    while (left <= right)
//    {
//        mid = left + (right - left) / 2;
//        if (data[mid] == k)
//        {
//            flag = 0;
//            while (data[left] != k)
//                left++;
//            while (data[right] != k)
//                right--;
//            break;
//        }
//        else if (data[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//
//    if (flag)
//        return 0;
//
//    return right - left + 1;
//}


//JZ4 二维数组中的查找
//#include <stdbool.h>
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen)
//{
//    int i = 0;
//    int j = *arrayColLen - 1;
//    while (i < arrayRowLen && j >= 0)
//    {
//        if (array[i][j] > target)
//        {
//            j--;
//        }
//        else if (array[i][j] < target)
//        {
//            i++;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    return false;
//}


