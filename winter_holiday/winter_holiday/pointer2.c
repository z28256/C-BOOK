#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void menu();
//int Add(int, int);
//int Sub(int, int);
//int Mul(int, int);
//int Div(int, int);
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	int(*pf[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("Enter two numbers: \n");
//			scanf("%d%d", &x, &y);
//
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (0 == input)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("\n1.add  2.sub\n");
//	printf("\n3.mul  4.div\n");
//	printf("\n   0.exit\n");
//}


//#include <stdio.h>
//
//void menu();
//int Add(int, int);
//int Sub(int, int);
//int Mul(int, int);
//int Div(int, int);
//void calc(int(*p)(int, int));
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出程序\n");
//			break;
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("Enter two numbers: \n");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//void menu()
//{
//	printf("\n1.add  2.sub\n");
//	printf("\n3.mul  4.div\n");
//	printf("\n   0.exit\n");
//}


//qsort函数的使用
//void qsort( void *base, size_t num, size_t width, 
//int (__cdecl *compare )(const void *elem1, const void *elem2 ) );


//#include <stdio.h>
//#include <stdlib.h>
//#include <search.h>
//#include <string.h>
//int int_cmp(const void *, const void *);
//int cmp_age(const void *, const void *);
//int cmp_name(const void *, const void *);
//int bubble_qsort(const void*, int, int, int(*)(void*, void*));
//void swap(char*, char*, int);
//struct Stu
//{
//	int age;
//	char name[4];
//};
//int main()
//{
//	int arr[10] = { 2, 4, 1, 9, 7, 8, 6, 5, 10, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//qsort(arr, sz, sizeof arr[0], int_cmp);
//	bubble_qsort(arr, sz, sizeof arr[0], int_cmp);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	struct Stu s1 = { 20, "Tom" };
//	struct Stu s2 = { 115, "Ac" };
//	struct Stu s3 = { 99, "Ji" };
//	struct Stu s[3] = {s1, s2, s3};
//	
//	int num = sizeof(s) / sizeof(s[0]);
//	//qsort(s, num, sizeof(s[0]), cmp_age);
//	bubble_qsort(s, num, sizeof(s[0]), cmp_age);
//	//qsort(s, num, sizeof(s[0]), cmp_name);
//	bubble_qsort(s, num, sizeof(s[0]), cmp_name);
//
//	return 0;
//}
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int bubble_qsort(const void* arr, int num, int width, int(*p)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (p((char*)arr + width * j, (char*)arr + width * (j + 1)) > 0)
//			{
//				swap((char*)arr + width * j, (char*)arr + width * (j + 1), width);
//			}
//		}
//	}
//}
//void swap(char* n1, char* n2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *(n1 + i);
//		*(n1 + i) = *(n2 + i);
//		*(n2 + i) = temp;
//	}
//}
