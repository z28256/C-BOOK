#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct ListNode {
	int val;
	struct ListNode* next;
};


//环形链表
//bool hasCycle(struct ListNode* head)
//{
//    if (head == NULL || head->next == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* fast = head->next, * slow = head;
//    while (fast != slow)
//    {
//        if (fast == NULL || fast->next == NULL)
//            return false;
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return true;
//}


//相交链表
/*struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    struct ListNode* pA = headA, * pB = headB;
    while (pA != pB)
    {
        pA = !pA ? headB : pA->next;
        pB = !pB ? headA : pB->next;
    }
    return pA;
}*/

/*struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode* n1 = headA, *n2 = headB;
    int countA = 1, countB = 1;

    while (n1->next)
    {
        countA++;
        n1 = n1->next;
    }

    while (n2->next)
    {
        countB++;
        n2 = n2->next;
    }

    if (n1 != n2)
        return NULL;

    int diff = abs(countA-countB);

    struct ListNode* lg = headA, * st = headB;
    if (countA < countB)
    {
        lg = headB;
        st = headA;
    }

    while(diff--)
    {
        lg = lg->next;
    }

    while(lg != st)
    {
        lg = lg->next;
        st = st->next;
    }

    return lg;
}*/


//链表的回文结构
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
//
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
//    return slow;
//}
//
//class PalindromeList {
//public:
//    bool chkPalindrome(ListNode* A)
//    {
//        struct ListNode* mid = middleNode(A);
//        struct ListNode* reverse = reverseList(mid);
//        while (reverse)
//        {
//            if (A->val != reverse->val)
//                return false;
//            reverse = reverse->next;
//            A = A->next;
//        }
//        return true;
//    }
//};


//链表分割
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x)
//    {
//        struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//        if (!head1)
//        {
//            perror("malloc");
//            return NULL;
//        }
//        head1->next = NULL;
//        struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//        if (!head2)
//        {
//            perror("malloc");
//            return NULL;
//        }
//        head2->next = NULL;
//        struct ListNode* temp1 = head1;
//        struct ListNode* temp2 = head2;
//        while (pHead)
//        {
//            if (pHead->val < x)
//            {
//                head1->next = pHead;
//                head1 = head1->next;
//            }
//            else
//            {
//                head2->next = pHead;
//                head2 = head2->next;
//            }
//            pHead = pHead->next;
//        }
//        head2->next = NULL;
//        head1->next = temp2->next;
//        return temp1->next;
//    }
//};


//合并两个有序链表
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (!phead)
//    {
//        perror("malloc");
//        return NULL;
//    }
//    phead->next = NULL;
//    struct ListNode* ret = phead;
//
//    while (list1 && list2)
//    {
//        if (list1->val > list2->val)
//        {
//            phead->next = list2;
//            list2 = list2->next;
//        }
//        else
//        {
//            phead->next = list1;
//            list1 = list1->next;
//        }
//        phead = phead->next;
//    }
//    phead->next = list2 ? list2 : list1;
//    struct ListNode* temp = ret->next;
//    free(ret);
//    return temp;
//}


/*struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL || list2 == NULL)
    {
        return list1 ? list1 : list2;
    }

    if (list1->val < list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}*/

/*
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL || list2 == NULL)
    {
        return list1 ? list1 : list2;
    }
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (temp == NULL)
    {
        perror("malloc");
        return NULL;
    }
    temp->next = NULL;
    struct ListNode* ret = temp;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }
    temp->next = list1 ? list1 : list2;
    return ret->next;
}*/


//链表中倒数第k个元素
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//    if (!pListHead)
//        return NULL;
//
//    struct ListNode* fast = pListHead;
//    struct ListNode* slow = pListHead;
//
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


/*
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k )
{
    if (!pListHead)
        return NULL;
    int count = 1;
    struct ListNode* temp = pListHead;
    while (pListHead->next)
    {
        count++;
        pListHead = pListHead->next;
    }
    int result = count - k;
    if (result < 0)
    {
        return NULL;
    }
    while (result--)
    {
        temp = temp->next;
    }
    return temp;
}*/


/*
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    // write code here

    if (!pListHead || k <= 0)
        return NULL;

    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;

    while (k--)
    {
        if (fast)
            fast = fast->next;
        else
            return NULL;
    }

    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}*/


//链表的中间节点
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
//    return slow;
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


//移除链表元素
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (!dummyHead)
//    {
//        perror("malloc");
//        return NULL;
//    }
//    dummyHead->next = head;
//    struct ListNode* temp = dummyHead;
//
//    while (dummyHead->next)
//    {
//
//        if (dummyHead->next->val == val)
//        {
//            dummyHead->next = dummyHead->next->next;
//        }
//        else
//        {
//            dummyHead = dummyHead->next;
//        }
//    }
//
//    return temp->next;
//
//}