#define _CRT_SECURE_NO_WARNINGS 1

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��


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



//����һ���������� prices ��
//����?prices[i] ��ʾĳ֧��Ʊ�� i ��ļ۸�
//��ÿһ�죬����Ծ����Ƿ���� / ����۹�Ʊ��
//�����κ�ʱ��?���?ֻ�ܳ��� һ�� ��Ʊ��
//��Ҳ�����ȹ���Ȼ���� ͬһ�� ���ۡ�

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


//��ת����
//����һ���������� nums���������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����

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

    //����1������
    /*reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize - 1);
    reverse(nums, 0, numsSize - 1);*/

    //����2��
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



