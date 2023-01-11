#define _CRT_SECURE_NO_WARNINGS 1
//strerror
//char * strerror(int errnum);

#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	
//	return 0;
//}


//FILE *fopen(const char* filename,const char* mode);
//#include <errno.h>
//#include <stdlib.h>
//int main()
//{
//	FILE* pf = fopen("d:/homework/as.css", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		perror("123");
//		return 1;
//	}
//	fclose(pf);
//	return 0;
//}


#include <ctype.h>
//int main()
//{
//	//int ret = isdigit('4');
//	int ret = isdigit('z');
//	//int ret = isdigit(4);//返回0
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", tolower('A'));
//	return 0;
//}


//int main()
//{
//	char arr[] = "i have an apple";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i])) 
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>
//void* my_memcpy(void* dest, void* src, size_t num);
void* my_memmove(void* dest, void* src, size_t num);

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int arr2[10] = { 0 };
	//my_memcpy(arr2, arr1, 40);
	//memcpy(arr2, arr1, 40);
	my_memmove(arr1, arr1 + 3, 20);
	//memmove(arr1 + 2, arr1, 20);
	return 0;
}
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//
//}


//int main()
//{
//	int arr1[] = {1, 3, 5};
//	int arr2[] = {1, 4, 5};
//	int n = memcmp(arr1, arr2, 5);
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '\0', 5);
//	printf("%s\n", arr);
//	memset(arr + 6, 'y', 5);
//	printf("%s\n", arr);
//
//	int array[5] = { 1, 2, 3, 4, 5 };
//	memset(array, 0, 20);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//}s, ss;
//
//typedef struct Stu Stu;
//
//int main()
//{
//	Stu s1, s2;
//	struct Stu s3, s4;
//	return 0;
//}


//struct
//{
//	char name[20];
//	int age;
//};

//struct
//{
//	int a;
//	char c;
//	double d;
//}x;
//
//struct
//{
//	int a;
//	char c;
//	double d;
//}* p;
//
//int main()
//{
//	p = &x;// 从“*”到“*”的类型不兼容
//	return 0;
//}


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	struct Node n2;
//	n1.next = &n2;
//	return 0;
//}


//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1, 2 };
//
//struct Point p2 = { 5, 9 };
//
//struct S
//{
//	int num;
//	char ch;
//	struct Point p;
//	float d;
//};
//
//int main()
//{
//	struct Point p3 = { 2, 9 };
//	struct S s = { 100, 's', { 3, 5 }, 4.5f };
//	struct S s2 = { .ch = 'c', .d = 6.3f, .num = 454, .p.x = 4, .p.y = 6 };
//	printf("%d %c %d %d %.2f\n", s.num, s.ch, s.p.x, s.p.y, s.d);
//	printf("%d %c %d %d %.2f\n", s2.num, s2.ch, s2.p.x, s2.p.y, s2.d);
//	return 0;
//}


//#include <stddef.h>//offsetof
////12
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////8
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////16
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////32
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S1));
//
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}