#define _CRT_SECURE_NO_WARNINGS 1

//VS2022 X86环境下会出现循环，X64 环境下会报错
//在vc6.0下，i和arr之间没有多余的空间   i<=10
//在gcc下，i和arr之间有一个整型空间		i<=11

//局部变量是放在内存中的栈区的
//栈区的使用习惯是：
//先使用高地址处的空间(i)
//再使用低地址处的空间(arr)

//数组随着下标的增长，地址是由低到高变化的
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	for (i = 0; i <= 7; i++)
//	{
//		printf("%d\n", arr[i]);
//		arr[i] = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include <assert.h>
//
//void my_strcpy(char* dest, char* src)
//{
//	//if (src == NULL || dest == NULL)
//	//{
//	//	return;
//	//}
//
//	//断言
//	//assert中可以放一个表达式，表达式如果为假，会报错；为真，无事
//	//assert其实在release版本中优化掉了
//	//assert(src != NULL);
//	assert(src && dest);//通过断言判断指针的有效性
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//char arr1[] = "xxxxxxx";
//	//char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	char arr3[20] = { 0 };
//	char* p = NULL;
//	my_strcpy(arr3, p);
//	return 0;
//}


//库函数的strcpy返回的是目标空间的起始地址

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* temp = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return temp;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//
//	//链式访问
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	const int num = 10;
//	//num = 20;  num被const修饰，不能被修改
//
//	int n = 1000;
//
//	//int* const p = &num;
//	//*p = 20;
//	////p = &n;//err
//
//	//const int* p = &num;
//	////*p = 20;//err
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}


//const修饰指针变量
//1.const在 * 的左侧,const修饰的是指针指向的内容,使其不能通过指针修改
//但是指针变量本身可以修改
//2.const在 * 的右侧,const修饰的是指针变量本身,使其不能修改
//但是指针指向的内容可以通过指针修改

//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = (++i) + (++i) + (++i);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "asdfg";
//	printf("%zd\n", my_strlen(str));
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
