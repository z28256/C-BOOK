#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
 struct ListNode {
     int val;
     struct ListNode *next;
 };

 //bool hasCycle(struct ListNode* head)
 //{
 //    struct ListNode* fast = head;
 //    struct ListNode* slow = head;

 //    while (fast && fast->next)
 //    {
 //        fast = fast->next->next;
 //        slow = slow->next;
 //        if (fast == slow)
 //        {
 //            return true;
 //        }
 //    }
 //    return false;
 //}


 //给定一个链表的头节点  head ，返回链表开始入环的第一个节点。
// 如果链表无环，则返回 null。

 //struct ListNode* detectCycle(struct ListNode* head)
 //{
 //    struct ListNode* fast = head;
 //    struct ListNode* slow = head;
 //    while (fast && fast->next)
 //    {
 //        fast = fast->next->next;
 //        slow = slow->next;

 //        // slow : d + s
 //        // fast : d + nC + s
 //        // d + nC + s = 2d + 2s ==> nC = d + s  d = nC - s = (n-1)C + (C - s)

 //        if (fast == slow)
 //        {
 //            struct ListNode* meet = slow;
 //            struct ListNode* thead = head;
 //            while (thead != meet)
 //            {
 //                thead = thead->next;
 //                meet = meet->next;
 //            }
 //            return thead;
 //        }
 //    }
 //    return NULL;
 //}


 //struct ListNode* detectCycle(struct ListNode* head)
 //{
 //    struct ListNode* fast = head;
 //    struct ListNode* slow = head;
 //    while (fast && fast->next)
 //    {
 //        fast = fast->next->next;
 //        slow = slow->next;
 //        if (fast == slow)
 //        {
 //            struct ListNode* p1 = slow->next;
 //            struct ListNode* thead = p1;
 //            slow->next = NULL;
 //            struct ListNode* p2 = head;

 //            while (p1 != p2)
 //            {
 //                p1 = !p1 ? head : p1->next;
 //                p2 = !p2 ? thead : p2->next;
 //            }

 //            return p1;
 //        }
 //    }
 //    return NULL;
 //}


