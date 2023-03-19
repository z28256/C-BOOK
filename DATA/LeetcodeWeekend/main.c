#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int val;
    struct Node* next;
    struct Node* random;
};
 
//��������Ŀ���

//struct Node* copyRandomList(struct Node* head)
//{
//    //1.ÿ���ڵ�󿽱�copy��ýڵ���ͬ������
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//        copy->next = cur->next;
//        cur->next = copy;
//        cur = copy->next;
//    }
//
//    //2.����random
//    cur = head;
//    while (cur)
//    {
//        //���cur->random Ϊ NULL��cur->next->random=NULL
//        //���cur->random!=NULL,cur->next->random = cur->random->next;
//        //cur->random->next����cur->next->random
//        cur->next->random = cur->random ? cur->random->next : NULL;
//        cur = cur->next->next;
//    }
//
//    //3.�ָ�ԭ������copy�Ľڵ����ӳ�������
//
//    struct Node* copyTail = NULL, * copyHead = NULL;
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        struct Node* next = cur->next->next;
//
//        if (copyTail == NULL)
//        {
//            copyTail = copyHead = copy;
//        }
//        else
//        {
//            copyTail->next = copy;
//            copyTail = copyTail->next;
//        }
//        cur->next = next;
//        cur = next;
//    }
//    return copyHead;
//}


struct ListNode
{
    int val;
    struct ListNode* next;
};


//����������ת����

//int getDecimalValue(struct ListNode* head)
//{
//    struct ListNode* cur = head;
//    int num = 0;
//    while (cur)
//    {
//        num *= 2;
//        num += cur->val;
//        cur = cur->next;
//    }
//    return num;
//}


//ɾ�������б��е��ظ�Ԫ��

//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    struct ListNode* cur = head;
//    if (cur == NULL)//ԭ����Ϊ��
//        return head;
//    while (cur->next)
//    {
//        //��cur���ڵĽڵ��ֵ����һ���ڵ���ͬʱ��ɾ����һ���ڵ㣬cur������ƶ�
//        //��cur���ڵĽڵ��ֵ����һ���ڵ��ֵ��ͬʱ��cur����ƶ�
//        if (cur->val == cur->next->val)
//        {
//            struct ListNode* temp = cur->next;
//            cur->next = cur->next->next;
//            free(temp);
//            temp = NULL;
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    return head;
//}


//С���� N ������ı��۴������� nums��С��Ԥ��Ϊ target���ٶ�С�����������������
//Ҫ��������Ļ��Ѳ�����Ԥ�㣬�������ж����ֲɹ�������
//
//ע�⣺����Ҫ�� 1e9 + 7 (1000000007) Ϊ��ȡģ��
//�磺�����ʼ���Ϊ��1000000008���뷵�� 1

//int cmp(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}

//int purchasePlans(int* nums, int numsSize, int target)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    long long n = 0;
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        if (nums[left] + nums[right] > target)
//        {
//            right--;
//        }
//        else
//        {
//            n += right - left;//��ʱnums[left]��num[left+1]~nums[right]�ڵĶ�����
//            left++;
//        }
//    }
//    return n % 1000000007;
//}


//С��ѡ����һ�����̯λ��һά�������� staple �м�¼��ÿ����ʳ�ļ۸�
//һά�������� drinks �м�¼��ÿ�����ϵļ۸�
//С�۵ļƻ�ѡ��һ����ʳ��һ�����ϣ��һ��Ѳ����� x Ԫ��
//�뷵��С�۹��ж����ֹ��򷽰���

//ע�⣺����Ҫ�� 1e9 + 7 (1000000007) Ϊ��ȡģ��
//�磺�����ʼ���Ϊ��1000000008���뷵�� 1

//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}

//int breakfastNumber(int* staple, int stapleSize, int* drinks, int drinksSize, int x)
//{
//    qsort(staple, stapleSize, sizeof(int), cmp_int);
//    qsort(drinks, drinksSize, sizeof(int), cmp_int);
//
//    int index1 = 0;
//    int index2 = drinksSize - 1;
//    long long n = 0;
//    while (index1 < stapleSize && index2 >= 0)
//    {
//        if (staple[index1] + drinks[index2] > x)
//        {
//            index2--;
//        }
//        else
//        {
//            n += index2 + 1;
//            index1++;
//        }
//    }
//    return n % 1000000007;
//}


//�ҳ�����Ԫ�صĴ���ֵ

//int Num(int n)
//{
//    int ret = 1;
//    while (n)
//    {
//        ret *= 10;
//        n /= 10;
//    }
//    return ret;
//}
//long long findTheArrayConcVal(int* nums, int numsSize)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    long long n = 0;
//    while (left < right)
//    {
//        n += nums[left] * Num(nums[right]) + nums[right];
//        left++;
//        right--;
//    }
//    if (left == right)
//        n += nums[left];
//    return n;
//}


//��С����ֵ

//int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size)
//{
//    int index1 = 0;
//    int index2 = 0;
//
//    while (index1 < nums1Size && index2 < nums2Size)
//    {
//        if (nums1[index1] == nums2[index2])
//            return nums1[index1];
//        else if (nums1[index1] > nums2[index2])
//            index2++;
//        else
//            index1++;
//    }
//    return -1;
//}



//int captureForts(int* forts, int fortsSize)
//{
//    int n = 0;
//    int pos = 0;
//    int temp = 0;
//    for (int i = 0; i < fortsSize; i++)
//    {
//        if (forts[i])
//        {
//            //if (temp == forts[i])//����ڶ��ν�����������һ��һ��,ֻ�轫pos��Ϊi,continue;
//            //{
//            //    pos = i;
//            //    continue;
//            //}
//            //if (temp)//��һ�ν���ʱtempΪ0��ֻ�ҵ�һ����Ϊ0����,n��Ϊ0
//            //    n = i - pos - 1 > n ? i - pos - 1 : n;//��1��-1֮��Ľϴ�ֵ����
//            //pos = i;//��n��ֵȷ������Խ�pos��ֵ���и���
//            //temp = forts[i];//����forts[i]��ֵ
//
//            if (temp == forts[i])//����ڶ��ν�����������һ��һ��,ֻ�轫pos��Ϊi,continue;
//            {
//                pos = i;
//            }
//            else
//            {
//                //if (temp)//��һ�ν���ʱtempΪ0��ֻ�ҵ�һ����Ϊ0����,n��Ϊ0
//                if (temp + forts[i] == 0)//��һ�ν���ʱtemp+forts[i]��Ϊ0��ֻ�ҵ�һ����Ϊ0����,n��Ϊ0
//                    n = i - pos - 1 > n ? i - pos - 1 : n;//��1��-1֮��Ľϴ�ֵ����
//                pos = i;//��n��ֵȷ������Խ�pos��ֵ���и���
//                temp = forts[i];//����forts[i]��ֵ
//            }
//            
//        }
//    }
//    return n;
//}


//��ͬ��ƽ��ֵ��Ŀ

//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//int cmp_double(const void* e1, const void* e2)
//{
//    if (*(double*)e1 > *(double*)e2)
//        return 1;
//    else if (*(double*)e1 < *(double*)e2)
//        return -1;
//    else
//        return 0;
//}
//int distinctAverages(int* nums, int numsSize)
//{
//    qsort(nums, numsSize, sizeof(int), cmp_int);
//    double* avg = (double*)calloc(numsSize / 2, sizeof(double));
//    if (avg == NULL)
//    {
//        return -1;
//    }
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        avg[left] = (nums[left] + nums[right]) / 2.0;
//        left++;
//        right--;
//    }
//    qsort(avg, numsSize / 2, sizeof(double), cmp_double);
//    int count = 1;
//    for (int i = 0; i < numsSize / 2 - 1; i++)
//    {
//        if (avg[i] != avg[i + 1])
//            count++;
//    }
//    return count;
//}