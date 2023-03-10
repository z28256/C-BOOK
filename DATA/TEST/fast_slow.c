#define _CRT_SECURE_NO_WARNINGS 1

//分发饼干
#include <stdlib.h>

/*int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}*/

//int cmp_int(int* e1, int* e2)
//{
//    return *e1 - *e2;
//}
//
//int findContentChildren(int* g, int gSize, int* s, int sSize)
//{
//    //for (int i = 0; i < gSize - 1; i++)
//    //{
//    //    for (int j = 0; j < gSize - i - 1; j++)
//    //    {
//    //        if (g[j] > g[j + 1])
//    //        {
//    //            int temp = g[j];
//    //            g[j] = g[j + 1];
//    //            g[j + 1] = temp;
//    //        }
//    //    }
//    //}
//
//    //for (int i = 0; i < sSize - 1; i++)
//    //{
//    //    for (int j = 0; j < sSize - i - 1; j++)
//    //    {
//    //        if (s[j] > s[j + 1])
//    //        {
//    //            int temp = s[j];
//    //            s[j] = s[j + 1];
//    //            s[j + 1] = temp;
//    //        }
//    //    }
//    //}
//
//    qsort(s, sSize, sizeof(int), cmp_int);
//    qsort(g, gSize, sizeof(int), cmp_int);
//    
//    int s_index = 0;
//    int g_index = 0;
//
//    while (s_index < sSize && g_index < gSize)
//    {
//        if (s[s_index] >= g[g_index])
//        {
//            g_index++;
//        }
//        s_index++;
//    }
//
//    return g_index;
//
//}


//两个数组的交集

//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//    qsort(nums1, nums1Size, sizeof(int), cmp_int);
//    qsort(nums2, nums2Size, sizeof(int), cmp_int);
//
//    int index1 = 0;
//    int index2 = 0;
//    int* ret = (int*)malloc(nums1Size * sizeof(int));
//    int index = 0;
//    while (index1 < nums1Size && index2 < nums2Size)
//    {
//        if (nums1[index1] == nums2[index2])
//        {
//            ret[index] = nums1[index1];
//
//            if (index > 0 && ret[index] == ret[index - 1])
//            {
//                index--;
//            }
//            index++;
//            index1++;
//            index2++;
//        }
//        else if (nums1[index1] > nums2[index2])
//        {
//            index2++;
//        }
//        else
//        {
//            index1++;
//        }
//    }
//
//    *returnSize = index;
//    return ret;
//}


//反转字符串

//void reverseString(char* s, int sSize) {
//    int left = 0;
//    int right = sSize - 1;
//    while (left < right)
//    {
//        char ch = s[left];
//        s[left] = s[right];
//        s[right] = ch;
//        left++;
//        right--;
//    }
//    return s;
//}


//反转字符串中的元音字母

#include <stdbool.h>

//bool checkVowel(char ch)
//{
//    char str[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
//    for (int i = 0; i < 10; i++)
//    {
//        if (ch == str[i])
//            return true;
//    }
//    return false;
//}
//char* reverseVowels(char* s)
//{
//    int left = 0;
//    int right = strlen(s) - 1;
//    while (left < right)
//    {
//        while (!checkVowel(s[left]) && left < right)
//        {
//            left++;
//        }
//        while (!checkVowel(s[right]) && left < right)
//        {
//            right--;
//        }
//        char ch = s[left];
//        s[left] = s[right];
//        s[right] = ch;
//        left++;
//        right--;
//        /*if (left < right)
//        {
//            char ch = s[left];
//            s[left] = s[right];
//            s[right] = ch;
//            left++;
//            right--;
//        }*/
//    }
//    return s;
//}
