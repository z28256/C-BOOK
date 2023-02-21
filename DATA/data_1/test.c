#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    char str1[] = "hello world!\n";
//    char str2[] = "hello world!\n";
//
//    const char* str3 = "hello\n";
//    const char* str4 = "hello\n";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}


//int main()
//{
//    const char* arr[4] = { "hello", "world", "start", "end" };
//    for (int i = 0; i < 4; i++)
//    {
//        printf("%s ", arr[i]);
//    }
//    putchar('\n');
//
//    int arr1[3] = { 2, 5, 7 };
//    int arr2[3] = { 3, 6, 9 };
//    int arr3[3] = { 1, 4, 5 };
//
//    int* arr4[3] = { arr1, arr2, arr3 };
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%d ", arr4[i][j]);
//        }
//        putchar('\n');
//    }
//    return 0;
//}


//void print(int(*p)[3], int r, int c)
//{
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            printf("%d ", p[i][j]);
//        }
//        putchar('\n');
//    }
//}
//int main()
//{
//    int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
//    print(arr, 2, 3);
//    return 0;
//}


//int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    //int (*p)(int, int) = &add;
//    int (*p)(int, int) = add;
//    printf("%d\n", p(2, 4));
//    printf("%d\n", (*p)(2, 4));
//
//    return 0;
//}


//void menu()
//{
//	printf("\n0.exit  1.add\n");
//	printf("2.sub   3.mul\n");
//	printf("4.div\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
////回调函数(add,sub,mul,div)
//void calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("输入两个数:\n");
//	scanf("%d%d", &x, &y);
//	if (p == div && !y)
//	{
//		printf("除数不能为0\n");
//		return;
//	}
//	printf("%d\n", p(x, y));
//
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("输入计算方法：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			printf("Error!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//
//int main()
//{
//	int(*pf[4])(int, int) = { add, sub, mul, div };
//	int input = 0;
//	int x, y;
//	do
//	{
//		menu();
//		printf("选择计算方法：\n");
//		scanf("%d", &input);
//		
//		if (!input)
//			printf("Exit!\n");
//		else if (input <= 4 && input >= 1)
//		{
//			printf("输入两个数字：\n");
//			scanf("%d%d", &x, &y);
//			if (input == 3 && !y)
//			{
//				printf("除数不能为0\n");
//				continue;
//			}
//			int ret = pf[input - 1](x, y);
//			printf("%d\n\n", ret);
//		}
//		else
//			printf("Error!\n");
//	} while (input);
//
//	return 0;
//}


//qsort 大于 0 的时候交换
//#include <stdlib.h>
//
//struct stu
//{
//	int age;
//	char name[20];
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else if (*(float*)e1 < *(float*)e2)
//		return -1;
//	else
//		return 0;
//}
//
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//
//int main()
//{
//	int arr[5] = { 2, 1, 5, 4, 3 };
//	float arr1[5] = { 2.0f, 2.5f, 2.3f, 1.9f, 3.0f };
//	struct stu s[3] = { { 20, "Tom"}, { 50, "Lion" }, { 33, "Jerry" } };
//
//	qsort(s, 3, sizeof(s[0]), cmp_age);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d %s\n", s[i].age, s[i].name);
//	}
//	qsort(arr, 5, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	qsort(arr1, 5, sizeof(arr1[0]), cmp_float);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.2f\n", arr1[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//    int a[] = { 1, 2, 3 ,4 };
//    printf("%zd\n", sizeof(a));//4*4 16
//    printf("%zd\n", sizeof(a + 0));//int* 4/8
//    printf("%zd\n", sizeof(*a));//a[0] int 4
//    printf("%zd\n", sizeof(a + 1));//int* 4/8
//    printf("%zd\n", sizeof(a[1]));//int 4
//    printf("%zd\n", sizeof(&a));//int(*)[4]  4/8
//    printf("%zd\n", sizeof(*&a));//int[4] 16
//    printf("%zd\n", sizeof(&a + 1));//int(*)[4] 4/8
//    printf("%zd\n", sizeof(&a[0]));//int* 4/8
//    printf("%zd\n", sizeof(&a[0] + 1));//int* 4/8
//    return 0;
//}


#include <string.h>
//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%zd\n", sizeof(arr));
//    //char[6] 6
//    printf("%zd\n", sizeof(arr + 0));
//    //char* 4/8
//    printf("%zd\n", sizeof(*arr));
//    //char 1
//    printf("%zd\n", sizeof(arr[1]));
//    //char 1
//    printf("%zd\n", sizeof(&arr));
//    //char(*)[6] 4/8
//    printf("%zd\n", sizeof(&arr + 1));
//    //char(*)[6] 4/8
//    printf("%zd\n", sizeof(&arr[0] + 1));
//    //char* 4/8
//    printf("%zd\n", strlen(arr));
//    //n
//    printf("%zd\n", strlen(arr + 0));
//    //n
//    //printf("%zd\n", strlen(*arr));
//    ////*arr = 'a' = 97 error
//    //printf("%zd\n", strlen(arr[1]));
//    ////98 error
//    printf("%zd\n", strlen(&arr));
//    //n
//    printf("%zd\n", strlen(&arr + 1));
//    //m
//    printf("%zd\n", strlen(&arr[0] + 1));
//    //n-1
//    return 0;
//}


//int main()
//{
//    char arr[] = "abcdef";
//    printf("%zd\n", sizeof(arr));//char[7] 7
//    printf("%zd\n", sizeof(arr + 0));//char* 4/8
//    printf("%zd\n", sizeof(*arr));//char 1
//    printf("%zd\n", sizeof(arr[1]));//char 1
//    printf("%zd\n", sizeof(&arr));//char(*)[6] 4/8
//    printf("%zd\n", sizeof(&arr + 1));//char(*)[6] 4/8
//    printf("%zd\n", sizeof(&arr[0] + 1));//char* 4/8
//
//    printf("%zd\n", strlen(arr));//6
//    printf("%zd\n", strlen(arr + 0));//6
//    //printf("%zd\n", strlen(*arr));//97 err
//    //printf("%zd\n", strlen(arr[1]));//98 err
//    printf("%zd\n", strlen(&arr));//6
//    printf("%zd\n", strlen(&arr + 1));//m
//    printf("%zd\n", strlen(&arr[0] + 1));//5
//
//    char* p = "abcdef";
//    printf("%zd\n", sizeof(p));//char* 4/8
//    printf("%zd\n", sizeof(p + 1));//char* 4/8
//    printf("%zd\n", sizeof(*p));//char 1
//    printf("%zd\n", sizeof(p[0]));//char 1
//    printf("%zd\n", sizeof(&p));//char** 4/8
//    printf("%zd\n", sizeof(&p + 1));//char** 4/8
//    printf("%zd\n", sizeof(&p[0] + 1));//char* 4/8
//
//    printf("%zd\n", strlen(p));//6
//    printf("%zd\n", strlen(p + 1));//5
//    //printf("%zd\n", strlen(*p));//97 err
//    //printf("%zd\n", strlen(p[0]));//97 err
//    printf("%zd\n", strlen(&p));//m
//    printf("%zd\n", strlen(&p + 1));//n
//    printf("%zd\n", strlen(&p[0] + 1));//5
//
//    return 0;
//}


//int main()
//{
//    int a[3][4] = { 0 };
//    printf("%zd\n", sizeof(a));//int[3][4] 3*4*4 48
//    printf("%zd\n", sizeof(a[0][0]));//int 4
//    printf("%zd\n", sizeof(a[0]));//int[4] 4*4 16 
//    printf("%zd\n", sizeof(a[0] + 1));//int* 4/8
//    printf("%zd\n", sizeof(*(a[0] + 1)));//int 4
//    printf("%zd\n", sizeof(a + 1));//int(*)[4] 4/8
//    printf("%zd\n", sizeof(*(a + 1)));//int[4] 16
//    printf("%zd\n", sizeof(&a[0] + 1));//int(*)[4] 4/8
//    printf("%zd\n", sizeof(*(&a[0] + 1)));//int[4] 16
//    printf("%zd\n", sizeof(*a));//int[4] 16
//    printf("%zd\n", sizeof(a[3]));//int[4] 16
//    return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* p = (int*)(&a + 1);
//    printf("%d %d\n", *(a + 1), *(p - 1));//2 5
//    return 0;
//}


//struct Test
//{
//    int Num;//0-3
//    char* pcName;//x86(32位) 4 字节 4-7，x64(64位) 8 字节 8-15
//    short sDate;
//    //x86 8-9   x64 16-17
//    char cha[2];
//    //x86 10-11 x64 18-19
//    short sBa[4];//x86 12-19 x64 20-27 --32
//}*p;
////该结构体的大小为20字节(x86)
////假设 p 的值为 0x100000
//int main()
//{
//    printf("%zd\n", sizeof(struct Test));
//    printf("%p\n", p);
//    printf("%p\n", p + 0x1);//0x100014(x86)16+4=20//0x100020(x64)2*16=32
//    printf("%p\n", (unsigned long)p + 0x1);//0x100001
//    printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//    return 0;
//}


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    //00000001 00000010
//    //00000100 大端 //100
//    //01000000 02000000
//    //00000002 小端//20000000
//    printf("%x,%x", ptr1[-1], *ptr2);//4 20000000
//    return 0;
//}


//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//1
//    return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc  -4  
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}


//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);//at
//    return 0;
//}


//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    printf("%s\n", **++cpp);//point cpp : c + 2 : point
//    printf("%s\n", *-- * ++cpp + 3);//cpp : c + 1 : new  *cpp = c + 1   --(c+1) = c er
//    printf("%s\n", *cpp[-2] + 3);//*(*(cpp - 2)) + 3 : *(c+3)+3 : st
//    printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp - 1) - 1) + 1 : *(c + 1) + 1 : ew
//    return 0;
//}


//void move(char a, char b);
////把x上的盘子移到y上，把z当做中介
//void hanoi(int n, char x, char y, char z);
//int count = 0;// 2 ^ n - 1
//
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//	char a = '1';
//	char b = '2';
//	char c = '3';
//	hanoi(num, a, b, c);
//	printf("%d\n", count);
//	return 0;
//}
//void move(char a, char b)
//{
//	printf("%c--->%c\n", a, b);
//}
//void hanoi(int n, char x, char y, char z)
//{
//	count++;
//	if (n == 1)
//	{
//		move(x, y);
//	}
//	else
//	{
//		//先把x上的n-1个盘子移到z上, y为中介
//		hanoi(n - 1, x, z, y);
//		//把x上的最下面的盘子（即第n个盘子）移到y上
//		move(x, y);
//		//把z上的n-1个盘子移到y上，x为中介
//		hanoi(n - 1, z, y, x);
//	}
//}

