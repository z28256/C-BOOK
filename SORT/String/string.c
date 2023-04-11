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


//实现myAtoi(string s) 函数，使其能将字符串转换成一个 32 位有符号整数
//
//读入字符串并丢弃无用的前导空格，检查下一个字符为正还是负号，读取该字符。 如果两者都不存在，则假定结果为正。
//读入下一个字符，直到到达下一个非数字字符或到达输入的结尾。字符串的其余部分将被忽略。
//将前面步骤读入的这些数字转换为整数("0032" -> 32）。如果没有读入数字，则整数为 0 。
//小于 −2^31 的整数应该被固定为 −2^31 ，大于 2^31 − 1 的整数应该被固定为 231 − 1 。
//
//本题中的空白字符只包括空格字符 ' ' 。


int myAtoi(char* s)
{
	int len = strlen(s);
	int index = 0;
	bool flag = true;
	long long ret = 0;
	while (index < len && s[index] == ' ')
		index++;
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index] == '-')
			flag = false;
		index++;
	}
	//字符串的末尾是'\0'，isdigit的结果为假，结束循环，
	//不需要index < len来作为循环判断条件
	//isdigit('5')是判断字符是否为数字字符的，不需要再减'0'
	while (isdigit(s[index]))
	{
		ret = s[index] - '0' + ret * 10;
		if (ret >= INT_MAX && flag)
			return INT_MAX;
		if (-ret <= INT_MIN && !flag)
			return INT_MIN;
		index++;
	}
	return flag ? (int)ret : -(int)ret;
}



//模拟strstr()
int strStr(char* haystack, char* needle)
{
	int index1 = 0, index2 = 0;
	int len1 = strlen(haystack);
	int len2 = strlen(needle);

	while (index1 < len1)
	{
		while (index1 < len1 && haystack[index1] != needle[index2])
		{
			index1++;
		}
		while (index1 < len1 && index2 < len2 && haystack[index1] == needle[index2])
		{
			index1++;
			index2++;
		}
		if (index2 == len2)
		{
			return index1 - len2;
		}
		else
		{
			index1 = index1 - index2 + 1;
			index2 = 0;
		}
	}
	return -1;
}


int strStr(char* haystack, char* needle)
{
	int len1 = strlen(haystack), len2 = strlen(needle);
	for (int i = 0; i + len2 <= len1; i++)
	{
		bool flag = true;
		for (int j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return i;
	}
	return -1;
}



//最长公共前缀
char* longestCommonPrefix(char** strs, int strsSize)
{
	int len = strlen(strs[0]);
	int i, j;
	for (i = 1; i < strsSize; i++)
	{
		if (strlen(strs[i]) < len)
		{
			len = strlen(strs[i]);
		}
	}
	for (j = 0; j < len; j++)
	{
		for (i = 1; i < strsSize; i++)
		{
			if (strs[i - 1][j] != strs[i][j])
				break;
		}
		if (i != strsSize)
			break;
	}
	strs[0][j] = '\0';
	return strs[0];
}


//外观数组
//1：1
//2：11
//3：21
//4：1211
//5：111221
//....

//1.迭代
char* calNext(char* cur)
{
	int len = strlen(cur);
	char* res = (char*)calloc(5000, sizeof(char));
	char c = cur[0];
	int pos = 0;
	int count = 1;
	for (int j = 1; j < len; ++j)
	{
		if (cur[j] == c)
		{
			count++;
		}
		else
		{
			res[pos++] = '0' + count;
			res[pos++] = c;
			count = 1;
			c = cur[j];
		}
	}
	res[pos++] = '0' + count;
	res[pos++] = c;
	return res;
}

char* countAndSay(int n)
{
	if (n == 1)
		return "1";
	char* cur = "1";
	for (int i = 1; i < n; ++i)
	{
		cur = calNext(cur);
	}
	return cur;
}


//2.递归
char* countHelper(char* s, int n)
{
	if (n == 1)
		return s;
	int count;
	char ch[10000] = { 0 };
	char* p = ch;
	while (*s)
	{
		count = 1;
		while (*s == *(s + 1))
		{
			count++;
			s++;
		}
		*p++ = (char)(count + '0');
		*p++ = *s++;
	}
	return countHelper(ch, n - 1);
}

char* countAndSay(int n)
{
	return countHelper("1", n);
}