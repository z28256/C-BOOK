#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int val;
    struct Node* next;
    struct Node* random;
};
 
//复杂链表的拷贝

//struct Node* copyRandomList(struct Node* head)
//{
//    //1.每个节点后拷贝copy与该节点相同的内容
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
//    //2.拷贝random
//    cur = head;
//    while (cur)
//    {
//        //如果cur->random 为 NULL，cur->next->random=NULL
//        //如果cur->random!=NULL,cur->next->random = cur->random->next;
//        //cur->random->next才是cur->next->random
//        cur->next->random = cur->random ? cur->random->next : NULL;
//        cur = cur->next->next;
//    }
//
//    //3.恢复原链表，将copy的节点连接成新链表
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


//二进制链表转整数

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


//删除排序列表中的重复元素

//struct ListNode* deleteDuplicates(struct ListNode* head)
//{
//    struct ListNode* cur = head;
//    if (cur == NULL)//原链表为空
//        return head;
//    while (cur->next)
//    {
//        //当cur所在的节点的值与下一个节点相同时，删除下一个节点，cur不向后移动
//        //当cur所在的节点的值与下一个节点的值不同时，cur向后移动
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


//小力将 N 个零件的报价存于数组 nums。小力预算为 target，假定小力仅购买两个零件，
//要求购买零件的花费不超过预算，请问他有多少种采购方案。
//
//注意：答案需要以 1e9 + 7 (1000000007) 为底取模，
//如：计算初始结果为：1000000008，请返回 1

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
//            n += right - left;//此时nums[left]与num[left+1]~nums[right]内的都可行
//            left++;
//        }
//    }
//    return n % 1000000007;
//}


//小扣选择了一家早餐摊位，一维整型数组 staple 中记录了每种主食的价格，
//一维整型数组 drinks 中记录了每种饮料的价格。
//小扣的计划选择一份主食和一款饮料，且花费不超过 x 元。
//请返回小扣共有多少种购买方案。

//注意：答案需要以 1e9 + 7 (1000000007) 为底取模，
//如：计算初始结果为：1000000008，请返回 1

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


//找出数组元素的串联值

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


//最小公共值

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
//            //if (temp == forts[i])//如果第二次进来的数与上一次一样,只需将pos该为i,continue;
//            //{
//            //    pos = i;
//            //    continue;
//            //}
//            //if (temp)//第一次进来时temp为0，只找到一个不为0的数,n仍为0
//            //    n = i - pos - 1 > n ? i - pos - 1 : n;//将1和-1之间的较大值返回
//            //pos = i;//在n的值确定后可以将pos的值进行更改
//            //temp = forts[i];//保存forts[i]的值
//
//            if (temp == forts[i])//如果第二次进来的数与上一次一样,只需将pos该为i,continue;
//            {
//                pos = i;
//            }
//            else
//            {
//                //if (temp)//第一次进来时temp为0，只找到一个不为0的数,n仍为0
//                if (temp + forts[i] == 0)//第一次进来时temp+forts[i]不为0，只找到一个不为0的数,n仍为0
//                    n = i - pos - 1 > n ? i - pos - 1 : n;//将1和-1之间的较大值返回
//                pos = i;//在n的值确定后可以将pos的值进行更改
//                temp = forts[i];//保存forts[i]的值
//            }
//            
//        }
//    }
//    return n;
//}


//不同的平均值数目

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