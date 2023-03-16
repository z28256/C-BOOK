#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

//判断回文字符串
//bool isPalindrome(char* s)
//{
//    int left = 0;
//    int right = strlen(s) - 1;
//    while (left < right)
//    {
//        while (!isalnum(s[left]) && left < right)
//            left++;
//        if (left == right)
//            break;
//        while (!isalnum(s[right]) && left < right)
//            right--;
//        if (left == right)
//            break;
//        if (tolower(s[left]) != tolower(s[right]))
//        {
//            return false;
//        }
//        else
//        {
//            left++;
//            right--;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    printf("%d\n", isPalindrome("0P"));//数字0和字母P
//    return 0;
//}


//快乐数 ： sum == 1
//不快乐的数 ： sum == 4
//bool isHappy(int n)
//{
//    int temp = n;
//    long sum = 0;
//    while (1)
//    {
//        sum += (n % 10) * (n % 10);
//        n /= 10;
//        if (!n)
//        {
//            if (sum == 1)
//                return true;
//            else if (sum == 4)
//                return false;
//            n = sum;
//            sum = 0;
//        }
//    }
//}


//回文链表
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* prev = NULL;
//    struct ListNode* curr = head;
//    while (curr)
//    {
//        struct ListNode* next = curr->next;
//        curr->next = prev;
//        prev = curr;
//        curr = next;
//    }
//    return prev;
//}
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast->next && fast->next->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//
//bool isPalindrome(struct ListNode* head)
//{
//    if (!head)
//        return false;
//    struct ListNode* p1 = head;
//    struct ListNode* p2 = reverseList(middleNode(head)->next);
//    while (p2)
//    {
//        if (p1->val != p2->val)
//        {
//            return false;
//        }
//        p1 = p1->next;
//        p2 = p2->next;
//    }
//    return true;
//}


//移动 0 
//void moveZeroes(int* nums, int numsSize)
//{
//    int* ret = (int*)calloc(numsSize, sizeof(int));
//    for (int i = 0, j = 0; i < numsSize; i++)
//    {
//        if (nums[i])
//            ret[j++] = nums[i];
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        nums[i] = ret[i];
//    }
//    return nums;
//}
//
//
//void moveZeroes(int* nums, int numsSize)
//{
//    int fast = 0;
//    int slow = 0;
//
//    while (fast < numsSize)
//    {
//        //nums[slow] = nums[fast];
//        //if (nums[fast])
//        //    slow++;
//
//        if (nums[fast])
//        {
//            nums[slow++] = nums[fast];
//        }
//        fast++;
//    }
//    while (slow < numsSize)
//    {
//        nums[slow++] = 0;
//    }
//
//    return nums;
//}


//判断子序列

//bool isSubsequence(char* s, char* t)
//{
//    while (*t)
//    {
//        if (*s == *t)
//            s++;
//        t++;
//    }
//    return !*s;
//}