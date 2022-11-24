#define _CRT_SECURE_NO_WARNINGS 1

//打印菱形
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 0; j <  2 * i + 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 0; j <  2 * (line - i - 1) - 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//自幂数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int temp = i;
//		int n = 1;
//		while (temp / 10)
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			sum += (int)pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//Sn = a + aa + aaa + aaaa + aaaaa;
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = a + k * 10;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include "add.h"
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}


//#include <stdio.h>
//int a = 10;
//int main()
//{
//	int b = 20;
//	int arr[12] = { 1, 2, 3, 4, 5, 6 };
//	test(arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int* p = 0x0012ff40;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//void test2()
//{
//	printf("789\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}


//阶乘和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}