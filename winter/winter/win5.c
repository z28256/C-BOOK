#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello!\n";
//	char* ret = strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[20] = "hello world!\n";
//	printf("%s\n", arr);
//	memset(arr + 2, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d%d", &a, &b);
//	int ret = get_max(a, b);
//	int ret2 = get_max(4, get_max(b, 10));
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}


//test(void) 保证无参数
//void test(void)
//{
//	printf("Hello\n");
//}
//int main()
//{
//	test();
//	return 0;
//}


//当函数调用时，实参传递给形参，这时形参是实参的一份临时拷贝
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//100-200之间的素数
//int is_prime(int n)
//{
//	int i = 0;
//
//	for (i = 2; i * i <= n; i++)
//	{
//		if (!(n % i))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 101; i < 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//判断闰年
//int is_leap_year(int year)
//{
//	if (!(year % 4) && year % 100 || !(year % 400))
//	{
//		return 1;
//	}
//	return 0;
//}


//int is_leap_year(int year)
//{
//	return !(year % 4) && year % 100 || !(year % 400);
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//函数：二分查找
//int binary_search(int* arr, int len, int k)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//return 0;//下标可能是0
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 12, 38, 45, 55, 67, 87, 123, 251, 222, 321 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = binary_search(arr, sizeof(arr) / sizeof(arr[0]), k);
//	if (ret != -1)
//	{
//		printf("下标是%d\n", ret);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


//void ADD(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int ADD(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int n = 0;
//	n = ADD(n);
//	printf("%d\n", n);
//	n = ADD(n);
//	printf("%d\n", n);
//	n = ADD(n);
//	printf("%d\n", n);
//	return 0;
//}


//函数的返回类型不写的时候，默认为int类型
//test(void)
//{
//	printf("hello\n");
//}
//int main()
//{
//	int ret = test();//test没有return，返回的是最后一条语句的值。
//	printf("%d\n", ret);
//	return 0;
//}


//链式访问
//int main()
//{
//	printf("%d\n", (int)strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d\n", 43)));
//	return 0;
//}


//函数的定义也是一种特殊的声明

//int a;//全局变量不初始化，默认为0
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
//a = 88;


//递归
//int main()
//{
//	printf("hehe\n");
//	main();//Stack overflow 栈溢出
//	return 0;
//}


//接受一个整型值（无符号），按照顺序打印它的每一位。
//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//void print(int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);//4 3 2 1
//		n /= 10;
//	}
//}
//int main()
//{
//	print(1234);
//	return 0;
//}


//整形指针+1，跳过一个整型，就是4个字节
//模拟实现strlen()

//递归（不创建临时变量）
//int my_strlen(char* str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "hello world";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}


//求n的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}


//第n个斐波那契数

//int count = 0;//统计第二个斐波那契数出现的次数
//int Fib(int n)
//{
//	if (n == 2)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//int Fib(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int ret = 1;
//	while (n > 2)
//	{
//		ret = n1 + n2;
//		n1 = n2;
//		n2 = ret;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	//printf("%d\n", count);
//	return 0;
//}


//a:1 2 8 
//b:1 4 22
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", j, i, i * j);
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//求 n 个整数中最大值
//int main()
//{
//	int arr[] = { 2, 4, -9, 5, 0, 99, 456 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		max = max > arr[i] ? max : arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//1 + ... + n
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = (1 + n) * n / 2;//等差数列求和
//	printf("%d\n", sum);
//	return 0;
//}


//静态区变量默认为0
//int b;
//int main()
//{
//    static int a;
//    printf("%d %d\n", a, b);
//    return 0;
//}


//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", j, i, i * j);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}

//while循环 条件表达式的执行次数总是比循环体的执行次数多一次
//（循环内部无break,continue,return goto..）

//函数设计应该追求高内聚低耦合（各模块之间独立）
