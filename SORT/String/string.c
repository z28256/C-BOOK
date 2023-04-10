#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//反转字符串
void reverseString(char* s, int sSize)
{
	int left = 0, right = sSize - 1;
	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}


//整数反转
// 
//给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
//如果反转后整数超过 32 位的有符号整数的范围[−2^31, 2^31 − 1] ，就返回 0。
//假设环境不允许存储 64 位整数（有符号或无符号）。

//limits.h中包含INT_MAX,INT_MIN
//#define INT_MIN     (-2147483647 - 1)
//#define INT_MAX       2147483647
#include <limits.h>

int reverse(int x)
{
	int temp = 0;
	while (x)
	{
		//不能使用temp < INT_MAX / 10 && temp > INT_MIN / 10作为判断条件
		//会出现错误
		// 例如1463847412 -> 2147483641,如果使用上面的条件会输出 0

		//可以使用temp <= INT_MAX / 10 && temp >= INT_MIN / 10作为判断条件

		if (temp < INT_MIN / 10 || temp > INT_MAX / 10)
		{
			return 0;
		}
		else
		{
			temp = temp * 10 + x % 10;
			x /= 10;
		}
	}
	return temp;
}

#include <string.h>
//字符串中的第一个唯一字符

//1.哈希表

int firstUniqChar(char* s)
{
	int hash[26] = { 0 };
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		hash[s[i] - 'a']++;
	}
	//从前往后遍历，可以得到第一个的唯一字符
	for (int i = 0; i < len; i++)
	{
		if (hash[s[i] - 'a'] == 1)
			return i;
	}
	return -1;
}


//2.双重循环

int firstUniqChar(char* s)
{
	int len = strlen(s);
	int i, j;
	for (i = 0; i < len; i++)
	{
		//从头开始遍历，避免"aabb"中的第二个a被当成是只出现一次的字符
		for (j = 0; j < len; j++)
		{
			//在 i == j 的时候跳过此次s[i]与s[j]的比较
			if (i == j)
				continue;
			if (s[i] == s[j])
				break;
		}
		//如果j == len，此时j是通过++结束循环的，也就是s[i]只出现了一次。
		if (j == len)
			return i;
	}
	return -1;
}



#include <stdbool.h>
//有效的字母异位词
//若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。

//1.哈希表
bool isAnagram(char* s, char* t)
{
	int hash[26] = { 0 };
	int len1 = strlen(s), len2 = strlen(t);
	if (len1 != len2)
		return false;
	for (int i = 0; i < len1; i++)
	{
		hash[s[i] - 'a']++;
		hash[t[i] - 'a']--;
	}
	for (int i = 0; i < len1; i++)
	{
		if (hash[s[i]])
			return false;
	}
	return true;
}


//2.排序
#include <stdlib.h>

int cmp(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}

bool isAnagram(char* s, char* t)
{
	size_t len1 = strlen(s);
	size_t len2 = strlen(t);
	if (len1 != len2)
		return false;
	qsort(s, len1, sizeof(char), cmp);
	qsort(t, len2, sizeof(char), cmp);
	for (int i = 0; i < len1; i++)
	{
		if (s[i] != t[i])
			return false;
	}
	return true;
}


//验证回文串
//如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，
//短语正着读和反着读都一样。则可以认为该短语是一个回文串。
//s = "A man, a plan, a canal: Panama"
//"amanaplanacanalpanama" 是回文串。
//输出true


//1.双指针
#include <ctype.h>

bool isPalindrome(char* s)
{
	int left = 0, right = strlen(s) - 1;
	while (left < right)
	{
		while (left < right && !isalnum(s[left]))
		{
			left++;
		}
		while (left < right && !isalnum(s[right]))
		{
			right--;
		}
		if (left < right && tolower(s[left]) != tolower(s[right]))
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
}


//2.双指针+新建数组copy
bool isPalindrome(char* s)
{
	char* str = (char*)malloc(sizeof(s));
	if (str == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	else
	{
		int len = strlen(s);
		int index = 0;
		for (int i = 0; i < len; i++)
		{
			if (isalnum(s[i]))
			{
				str[index++] = tolower(s[i]);
			}
		}
		int left = 0, right = index - 1;
		while (left < right)
		{
			if (str[left] == str[right])
			{
				left++;
				right--;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
}
