#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//	//str3 和 str4 指向同一个字符串
//	const char* str3 = "hello";
//	const char* str4 = "hello";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	const char* arr[4] = { "asdf", "plm", "lkjh", "hello" };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[3] = { 7, 2, 3 };
//	int arr3[3] = { 1, 9, 3 };
//	int arr4[3] = { 1, 9, 5 };
//
//	int* arr[4] = { arr1, arr2, arr3, arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[10] = &arr;
//	//int(*p1)[10] = arr;
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int(*p)[3] = &arr;
//	int* p1 = arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d ", (*p)[i]);//arr[i]
//		printf("%d\n", *(p1 + i));
//	}
//	return 0;
//}


//#include <stdio.h>
//void print1(int(*p)[4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {4, 5, 6, 7} };
//	print1(arr, 3, 4);
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;
//
//	int(*pf)(int, int) = &Add;
//	int(*pf1)(int, int) = Add;
//
//	int ret = pf(2, 3);
//	int ret1 = (*pf1)(8, 3);
//
//	printf("%d %d\n", ret, ret1);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//先将0强制类型转换为void(*)()的函数指针
//	//然后再调用0地址处的函数
//	//《C陷阱和缺陷》
//	(*(void(*)())0)();
//
//	//该代码是一次函数的声明
//	//声明的函数名字叫signal,
//	//signal函数有两个参数，int类型，一个是void(*)(int)类型
//	//signal函数的返回类型是void(*)(int);
//	void (*signal(int, void(*)(int)))(int);
//
//	typedef unsigned int uint;
//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	return 0;
//}


