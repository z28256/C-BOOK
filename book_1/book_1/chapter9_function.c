#define _CRT_SECURE_NO_WARNINGS 1
////9.1 lethead1.c   打印40个星号
//#include <stdio.h>
//#define NAME "GIGATHINK"
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//void starbar(void);
//int main(void)
//{
//	starbar();
//
//	printf("%s\n", NAME);
//	printf("%s\n", ADDRESS);
//	printf("%s\n", PLACE);
//
//	starbar();
//
//	return 0;
//}
//void starbar(void)
//{
//	int count = 0;
//	for (count = 1; count <= WIDTH; count++)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//}


//9.2 lethead2.c
//#include <stdio.h>
//#include <string.h>
//#define NAME "GIGATHINK, INC."
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//#define SPACE ' '
//void show_n_char(char ch, int num);
//int main(void)
//{
//	int spaces = 0;
//
//	show_n_char('*', WIDTH);
//	putchar('\n');
//
//	show_n_char(SPACE, 12);
//	printf("%s\n", NAME);
//
//	spaces = (WIDTH - (int)strlen(ADDRESS)) / 2;
//	show_n_char(SPACE, spaces);
//	printf("%s\n", ADDRESS);
//
//	show_n_char(SPACE, (WIDTH - (int)strlen(PLACE)) / 2);
//	printf("%s\n", PLACE);
//
//	show_n_char('*', WIDTH);
//	putchar('\n');
//
//	return 0;
//}
//
//void show_n_char(char ch, int num)
//{
//	int count = 0;
//
//	for (count = 1; count <= num; count++)
//	{
//		putchar(ch);
//	}
//}


//9.3 lesser.c  找出两个整数中较小的一个
//#include <stdio.h>
//int imin(int, int);
//int main(void)
//{
//	int evil1 = 0;
//	int evil2 = 0;
//
//	printf("Enter a pair of integers (q to quit):\n");
//	while (scanf("%d%d", &evil1, &evil2) == 2)
//	{
//		printf("The lesser of %d and %d is %d.\n",
//			evil1, evil2, imin(evil1, evil2));
//		printf("Enter a pair of integers (q to quit):\n");
//	}
//	printf("Bye!\n");
//
//	return 0;
//}
//
//int imin(int n, int m)
//{
//	return n > m ? m : n;
//}


//9.5 proto.c 使用函数原型
//#include <stdio.h>
//int imax(int, int);
//int main(void)
//{
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
//	return 0;
//}
//int imax(int n, int m)
//{
//	return n > m ? n : m;
//}


//9.6 recur.c  递归演示
//#include <stdio.h>
//void up_and_down(int);
//int main(void)
//{
//	up_and_down(1);
//	return 0;
//}
//void up_and_down(int n)
//{
//	printf("Level %d: n location %p\n", n, &n);
//	if (n < 4)
//	{
//		up_and_down(n + 1);
//	}
//	printf("Level %d: n location %p\n", n, &n);
//}


//9.7 factor.c  使用循环和递归计算阶乘
//#include <stdio.h>
//long fact(int n);	
//long rfact(int n);
//int main(void)
//{
//	int num = 0;
//	printf("This program calculates factories.\n");
//	printf("Enter a value in the range 0-12 (q to quit):\n");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num < 0)
//		{
//			printf("No negative numbers, please\n");
//		}
//		else if (num > 12)
//		{
//			printf("Keep input under 13.\n");
//		}
//		else
//		{
//			printf("loop: %d factorical = %ld\n", num, fact(num));
//			printf("recursion: %d factorical = %ld\n", num, rfact(num));
//		}
//		printf("Enter a value in the range 0-12 (q to quit):\n");
//	}
//	printf("Bye!\n");
//	return 0;
//}
//
////使用循环的函数
//long fact(int n)
//{
//	long ans = 0;
//	for (ans = 1; n > 1; n--)
//	{
//		ans *= n;
//	}
//	return ans;
//}
//
////使用递归的函数
//long rfact(int n)
//{
//	long ans = 0;
//	if (n > 0)
//	{
//		ans = n * rfact(n - 1);
//	}
//	else
//	{
//		ans = 1;
//	}
//	return ans;
//}


//9.8 binary.c  以二进制形式打印十进制整数
//#include <stdio.h>
//void to_binary(unsigned long n);
//int main(void)
//{
//	unsigned long number = 0;
//
//	printf("enter an integer (q to quit):\n");
//	while (scanf("%lu", &number) == 1)		//%lu  unsigned long 
//	{
//		printf("binary equivalent: ");
//		to_binary(number);
//		putchar('\n');
//		printf("enter an integer (q to quit):\n");
//	}
//	printf("done.\n");
//	return 0;
//}
//void to_binary(unsigned long n)
//{
//	int r = n % 2;
//
//	if (n >= 2)
//	{
//		to_binary(n / 2);
//	}
//	//putchar(r == 0 ? '0' : '1');
//	printf("%d", r);
//
//	return;
//}


//斐波那契(递归)
//unsigned long Fibonacci(unsigned n)
//{
//	if (n > 2)
//	{
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}


//9.9 usehotel.c  房间费率程序
//#include <stdio.h>
//#include "hotel.h"
//int main(void)
//{
//	int nights = 0;
//	double hotel_rate = 0.0;
//	int code = 0;
//
//	while ((code = menu()) != QUIT)
//	{
//		switch (code)
//		{
//		case 1:
//			hotel_rate = HOTEL1;
//			break;
//		case 2:
//			hotel_rate = HOTEL2;
//			break;
//		case 3:
//			hotel_rate = HOTEL3;
//			break;
//		case 4:
//			hotel_rate = HOTEL4;
//			break;
//		default:
//			hotel_rate = 0.0;
//			printf("Oops!\n");
//			break;
//		}
//		nights = getnights();
//		showprice(hotel_rate, nights);
//	}
//	printf("Thank you and goodbye.\n");
//
//	return 0;
//}


//9.12 loccheck.c  查看变量被存储在何处
//#include <stdio.h>
//void mikado(int);
//int main(void)
//{
//	int pooh = 2;
//	int bah = 5;
//	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//	return 0;
//}
//
//void mikado(int bah)
//{
//	int pooh = 10;
//	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//}


//9.13 swap.c  第一个版本的交换函数
//#include <stdio.h>
//void interchange(int u, int v);
//int main(void)
//{
//	int x = 5;
//	int y = 10;
//	printf("Originally x = %d and y = %d\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d\n", x, y);
//	return 0;
//}
//void interchange(int u, int v)
//{
//	printf("Originally u = %d and v = %d\n", u, v);
//	int temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d\n", u, v);
//}


//9.15 swap3.c  使用指针交换函数在函数间通信
//#include <stdio.h>
//void interchange(int* u, int* v);
//int main(void)
//{
//	int x = 5;
//	int y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	return 0;
//}
//
//void interchange(int* u, int* v)
//{
//	int temp = *u;
//	*u = *v;
//	*v = temp;
//}


//9.11 编程练习
//1. min(x, y)  两个double类型值的较小值
//#include <stdio.h>
//double min(double n1, double n2);
//int main(void)
//{
//	double a = 735.12;
//	double b = 13.12;
//	printf("%.2f\n", min(a, b));
//	return 0;
//}
//double min(double n1, double n2)
//{
//	return n1 < n2 ? n1 : n2;
//}


//2. chline(ch, i, j)，打印指定的字符j行i列
//#include <stdio.h>
//void chline(char, int, int);
//int main(void)
//{
//	chline('+', 3, 2);
//	return 0;
//}
//void chline(char ch, int i, int j)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= j; a++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			printf("%c", ch);
//		}
//		putchar('\n');
//	}
//}


//4.调和平均数  两数的倒数的平均值，最后取平均值的倒数
//两个double类型的参数，返回两个参数的调和平均数
//#include <stdio.h>
//double harmonic_mean(double f1, double f2);
//int main(void)
//{
//	double n1 = 1;
//	double n2 = 2;
//	printf("%.2f", harmonic_mean(n1, n2));
//	return 0;
//}
//double harmonic_mean(double f1, double f2)
//{
//	return 2 / (1 / f1 + 1 / f2);
//}


//5. 函数larger_of() 两个double类型变量的值替换为较大的值
//#include <stdio.h>
//void large_of(double* f1, double* f2);
//int main(void)
//{
//	double f1 = 5.56;
//	double f2 = 4.59;
//
//	printf("f1 = %.2f, f2 = %.2f\n", f1, f2);
//	large_of(&f1, &f2);
//	printf("f1 = %.2f, f2 = %.2f\n", f1, f2);
//
//	return 0;
//}
//void large_of(double* f1, double* f2)
//{
//	*f1 = *f1 > *f2 ? *f1 : *f2;
//	*f2 = *f1 > *f2 ? *f1 : *f2;
//}


//6.3个double变量的地址作为参数
//把最小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量
//#include <stdio.h>
//void swap_3(double* f1, double* f2, double* f3);
//void swap_2(double* f1, double* f2);
//int main(void)
//{
//	double n1 = 7.56;
//	double n2 = 6.56;
//	double n3 = 7.46;
//	printf("n1 = %.2f, n2 = %.2f, n3 = %.2f\n", n1, n2, n3);
//	swap_3(&n1, &n2, &n3);
//	printf("n1 = %.2f, n2 = %.2f, n3 = %.2f\n", n1, n2, n3);
//	return 0;
//}
//void swap_3(double* f1, double* f2, double* f3)
//{
//	if (*f1 > *f2)
//	{
//		swap_2(f1, f2);
//	}
//	if (*f1 > *f3)
//	{
//		swap_2(f1, f3);
//	}
//	if (*f3 < *f2)
//	{
//		swap_2(f2, f3);
//	}
//}
//void swap_2(double* f1, double* f2)
//{
//	double f = *f1;
//	*f1 = *f2;
//	*f2 = f;
//}


//7.从标准输入中读取字符，直到遇到文件结尾程序要报告每个字符是否是字母。
//如果是，还要报告该字母在字母表中的数值位置。
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//int site(char);
//void read(void);
//int main(void)
//{
//	read();
//	return 0;
//}
//void read(void)
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		printf("%d", site(ch));
//	}
//}
//int site(char ch)
//{
//	int n = 0;
//	n = tolower(ch) - 'a';
//	if (n >= 0 && n <= 25)
//	{
//		return n + 1;
//	}
//	else
//	{
//		return -1;
//	}
//}


//8.power()函数返回一个double类型的正整数次幂（循环）
//0的任何次幂都为0，任何数的0次幂都为1，0的0次幂报告未定义并处理为1
//#include <stdio.h>
//double power(double, int);
//int main(void)
//{
//	double n1 = 0;
//	int n2 = 0;
//	//n1的值应大于等于0
//	scanf("%lf%d", &n1, &n2);
//	printf("%.2f\n", power(n1, n2));
//	return 0;
//}
//double power(double n1, int n2)
//{
//	int i = 0;
//	double result = 1;
//	if (!n1 && !n2)
//	{
//		printf("0的0次幂未定义\n");
//		result = 1;
//	}
//	else if (!n2)
//	{
//		result = 1;
//	}
//	else if (!n1)
//	{
//		result = 0;
//	}
//	else if (n2 > 0)
//	{
//		for (i = 1; i <= n2; i++)
//		{
//			result *= n1;
//		}
//	}
//	else if (n2 < 0)
//	{
//		n1 = 1 / n1;
//		for (i = 1; i <= -n2; i++)
//		{
//			result *= n1;
//		}
//	}
//	return result;
//}


//9.递归重写8
//#include <stdio.h>
//double power(double, int);
//int main(void)
//{
//	double n1 = 0;
//	int n2 = 0;
//	//n1的值应大于等于0
//	scanf("%lf%d", &n1, &n2);
//	printf("%.2f\n", power(n1, n2));
//	return 0;
//}
//double power(double n1, int n2)
//{
//	int i = 0;
//	double result = 1;
//	if (!n1 && !n2)
//	{
//		printf("0的0次幂未定义\n");
//		result = 1;
//	}
//	else if (!n2)
//	{
//		result = 1;
//	}
//	else if (!n1)
//	{
//		result = 0;
//	}
//	else if (n2 > 0)
//	{
//		result = n1 * power(n1, n2 - 1);
//	}
//	else if (n2 < 0)
//	{
//		n1 = 1 / n1;
//		result = n1 * power(n1, -n2 - 1);
//
//	}
//	return result;
//}


//10.to_base_n(),两个在2～10范围内的参数，
//以第2个参数中指定的进制打印第1个参数的数值
//#include <stdio.h>
//void to_base_n(int, int);
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);	
//	to_base_n(a, b);
//	return 0;
//}
//
//void to_base_n(int n1, int n2)
//{
//	int t = n1 % n2;
//	if (n1 >= n2)
//	{
//		to_base_n(n1 / n2, n2);
//	}
//	printf("%d", t);
//}


//11.Fibonacci()函数，循环
//#include <stdio.h>
//int Fibonacci(int);
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", Fibonacci(i));
//	}
//	return 0;
//}
//int Fibonacci(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int result = 0;
//	int count = 0;
//	if (n <= 2)
//	{
//		result = 1;
//	}
//	else
//	{
//		for (count = 2; count < n; count++)
//		{
//			result = n1 + n2;
//			n1 = n2;
//			n2 = result;
//		}
//	}
//	return result;
//}