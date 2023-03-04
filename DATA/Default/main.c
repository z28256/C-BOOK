#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
////删除链表中等于给定值 val 的所有结点。
// struct ListNode 
// {
//      int val;
//      struct ListNode *next;
// };


//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyHead->next = head;
//    struct ListNode* temp = dummyHead;
//    while (temp->next)
//    {
//        if (temp->next->val == val)
//        {
//            temp->next = temp->next->next;
//        }
//        else
//        {
//            temp = temp->next;
//        }
//    }
//    return dummyHead->next;
//}


//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。

//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//    return slow;
//}


 // 输入一个链表，输出该链表中倒数第k个结点。
 //struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
 //    // write code here

 //    if (!pListHead || k <= 0)
 //        return NULL;

 //    struct ListNode* fast = pListHead;
 //    struct ListNode* slow = pListHead;

 //    while (k--)
 //    {
 //        if (fast)
 //            fast = fast->next;
 //        else
 //            return NULL;
 //    }

 //    while (fast)
 //    {
 //        fast = fast->next;
 //        slow = slow->next;
 //    }
 //    return slow;
 //}


 //合并两个有序链表
 //struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
 //{
 //    if (list1 == NULL || list2 == NULL)
 //    {
 //        return list1 ? list1 : list2;
 //    }

 //    if (list1->val < list2->val)
 //    {
 //        list1->next = mergeTwoLists(list1->next, list2);
 //        return list1;
 //    }
 //    else
 //    {
 //        list2->next = mergeTwoLists(list1, list2->next);
 //        return list2;
 //    }
 //}


//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    if (list1 == NULL || list2 == NULL)
//    {
//        return list1 ? list1 : list2;
//    }
//    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (temp == NULL)
//    {
//        perror("malloc");
//        return NULL;
//    }
//    temp->next = NULL;
//    struct ListNode* ret = temp;
//    while (list1 && list2)
//    {
//        if (list1->val < list2->val)
//        {
//            temp->next = list1;
//            list1 = list1->next;
//        }
//        else
//        {
//            temp->next = list2;
//            list2 = list2->next;
//        }
//        temp = temp->next;
//    }
//    temp->next = list1 ? list1 : list2;
//    return ret->next;
//}


//反转链表
//struct ListNode* reverseList(struct ListNode* head)
//{
//    struct ListNode* curr = head;
//    struct ListNode* prev = NULL;
//
//    while (curr)
//    {
//        struct ListNode* next = curr->next;
//        curr->next = prev;
//        prev = curr;
//        curr = next;
//    }
//    return prev;
//}


