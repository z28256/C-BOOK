#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 100
//enum Sex
//{
//	MALE,
//	FEMALE = 5,
//	SECRET,
//};
//int main()
//{
//	int m = MAX;
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%zd\n", sizeof(enum Sex));
//	return 0;
//}


//union UN
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union UN un;
//	printf("%zd\n %p\n %p\n %p\n", sizeof(un), &un, &un.c, &un.i);
//	return 0;
//}


//union UN
//{
//	char c[5];
//	int n;
//};
//union UN2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	printf("%zd\n%zd\n", sizeof(union UN), sizeof(union UN2));
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//union UN
//{
//	char a;
//	int i;
//};
//int main()
//{
//	union UN a;
//	a.a = 1;
//	if (a.a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	union UN
//	{
//		char ch;
//		int i;
//	}un;
//	un.i = 1;
//	return un.ch;
//
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


#include <string.h>
#include <errno.h>
#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(10000000000000);
//	//int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10000000000000, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	//增加5个整形的空间
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//malloc(40)
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		*(p + i) = 1;//不会出现警告，但也是越界访问
//		//p[i] = 1;//有警告
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10;//栈区
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//free释放的是动态开辟的内存
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 25; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		return 1;
//	}
//	free(p);
//	//p = NULL;
// //free之后一定要将指针置为空指针
//	free(p);
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL == p)
//	{
//		return;
//	}
//	//使用
//	//...
//	if (1)
//		return;
//	//释放
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return NULL;
//	}
//	return p;
//}
//int main()
//{
//	int* ptr = test();
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}


