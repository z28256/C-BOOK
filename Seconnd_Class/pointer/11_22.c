#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa是一个二级指针
//	**ppa = 50;
//	printf("%d\n", a);
//	printf("%d\n", **ppa);
//
//	int*** pppa = &ppa;//三级指针
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr[] = { &a, &b, &c, &d, &e };
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//		printf("%d  ", *(*(arr + i)));
//	}
//
//	return 0;
//}


//模拟二维数组
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 2, 3, 4, 5, 6 };
//	int c[] = { 3, 4, 5, 6, 7 };
//	int* arr[] = { a, b, c };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%d   ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//结构体
//#include <stdio.h>
//struct Stu
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char sex[20];
//	float score;
//}s4, s5;//结构体变量：全局
//
////int main()
////{
////	//结构体变量：局部
////	struct Stu s1, s2;
////	//s1 = { "Tom", 45, "Female", 45.6f };
////	//s2 = { "Tom", 45, "Female", 45.6f };
////
////	return 0;
////}
//
//int main()
//{
//	struct Stu s2 = { "Jerry", 5, "Female", 4.3f };
//	struct Stu s1 = { "Tom", 45, "Male", 45.3f };
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex, s2.score);
//	printf("%s %d %s %.1f\n", s1.name, s1.age, s1.sex, s1.score);
//	return 0;
//}


//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//};
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//void Print1(struct P sp)
//{
//	printf("%f %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//
//void Print2(struct P* sp)
//{
//	printf("%f %d %c %f\n", (*sp).d, (*sp).s.a, (*sp).s.c, (*sp).f);
//	printf("%f %d %c %f\n", sp->d, sp->s.a, sp->s.c, sp->f);
//}
//
//int main()
//{
//	struct P p = { 5.55, {100, 'c'}, 3.25f };
//	scanf("%d %c", &(p.s.a), &(p.s.c));
//	printf("%f %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//	Print1(p);//传值调用
//	Print2(&p);//传址调用
//	return 0;
//}

//作业题
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*) & a;
//	*pc = 0;
//	printf("%#x\n", a);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个一维数组
//#include <stdio.h>
//void print(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 4, 7, 8, 5, 2, 3, 6, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容
//#include <string.h>
//#include <stdio.h>

//void reverse(char* str)
//{
//	int left = 0;
//	int right = (int)strlen(str) - 1;
//
//	while (left < right)
//	{
//		char temp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = temp;
//		left++;
//		right--;
//	}
//}

//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + (int)strlen(str) - 1;
//
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}


//int main()
//{
//	char arr[10000] = { 0 };
//	//scanf("%s", arr);//只能读取一个单词
//	scanf("%[^\n]", arr);
//	//gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//}


//#include <stdio.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[10000] = { 0 };
//	//scanf("%s", arr);//只能读取一个单词
//	scanf("%[^\n]", arr);
//	//gets(arr);
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s\n", arr);
//}