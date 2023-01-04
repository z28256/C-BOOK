#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40] = { 0 };
//	char str3[40] = { 0 };
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	//memset(str, '-', 6);
//	memset(str, 64, 6);
//	puts(str);
//	return 0;
//}


//交换两个整型变量
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int n1 = 1;
//	int n2 = 2;
//	swap(&n1, &n2);
//	printf("%d %d\n", n1, n2);
//	return 0;
//}


//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	char str[80] = { 0 };
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello ";
//	int ret = (int)strlen(strcat(arr, "byte!"));
//	puts(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//printf函数的返回值是打印在屏幕上字符的个数
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//输入：1234，输出 1 2 3 4
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//求n的阶乘（不考虑溢出）
//求第n个斐波那契数。（不考虑溢出）
//#include <stdio.h>
//int factorical(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorical(n - 1);
//	}
//}
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//
//int factorial_2(int n)
//{
//	int result = 1;
//	while (n > 1)
//	{
//		result *= n;
//		n--;
//	}
//	return result;
//}
//
//int fib2(int n)
//{
//	int result = 1;
//	int pre_result = 1;
//	int next_older_result = 0;
//
//	while (n > 2)
//	{
//		n--;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//}


//#include <stdio.h>
//int main()
//{
//	//int count = 10;
//	//int arr[count];//C99变长数组，不能初始化
//	
//	char arr1[] = "abc";
//	char arr2[3] = { 'a', 'b', 'c' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		//printf("%d ", arr[i]);
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


// 二维数组如果有初始化，行可以省略，列不能省略
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4 };
//	int arr1[3][4] = { {1, 2}, {3, 4} };
//	int arr2[][4] = { {1, 2}, {3, 4} };
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//			//printf("%-2d ", arr[i][j]);
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//越界
//	}
//	return 0;
//}


//冒泡排序
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3, 34, 4, 12, 65, 22, 98, 569, 123 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", *arr);
//	return 0;
//}


//移位操作符（整数）
//左移操作符(左边抛弃、右边补0)（左移一位，数值×2）
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	n <<= 1;
//	printf("%d\n", n);
//	return 0;
//}


//右移操作符

//逻辑移位（左边用0填充，右边丢弃）
//算术移位（左边的值用该数的符号位填充，右边丢弃）
//#include <stdio.h>
//int main()
//{
//	int n = -1;
//	n >>= 1;
//	printf("%d\n", n);
//	return 0;
//}

//对于移位运算符，不要移动负数位，这个是标准未定义的。
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	n >>= -1;//error
//	printf("%d\n", n);
//	return 0;
//}


//位操作符（整数）
//按位与 &
//按位或 |
//按位异或 ^（相同为0，不同为1）
//#include <stdio.h>
//int main()
//{
//	int n1 = 1;
//	int n2 = 1;
//	printf("%d\n", n1 & n2);
//	printf("%d\n", n1 | n2);
//	printf("%d\n", n1 ^ n2);
//	return 0;
//}


//不能创建临时变量（第三个变量），实现两个数的交换
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//求一个整数存储在内存中的二进制中1的个数
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = -1;
//	int i = 0;
//	int count = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (n & (1 << i))
//	//	{
//	//		count++;
//	//	}
//	//}
//	while (n)
//	{
//		count++;
//		n &= (n - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof a);
//	//printf("%zd\n", sizeof int);//Error
//	return 0;
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(ch));//10
//	test1(arr);//8（64位机器）
//	test2(ch);//8
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("i = %d\n", i);
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//整型提升(高位补符号位)
//char ch = -1;
//11111111
//11111111111111111111111111111111

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%zd\n", sizeof(c));//1
//	printf("%zd\n", sizeof(+c));//4
//	printf("%zd\n", sizeof(-c));//4
//
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}


//野指针
//#include <stdio.h>
//int main()
//{
//	//int* p;//未初始化，默认为随机值
//	//*p = 20;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//越界访问
//		*(p++) = i;
//	}
//	return 0;
//}

//int* p = NULL;

//#include <stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return (int)(p - s);
//}
//int main()
//{
//	char arr[] = "string";
//	printf("%d\n", my_strlen(arr));
//}


//#include <stdio.h>
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <=> p + %d = %p\n", i, &arr[i], i, p + i);
//	}
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int a = 10;
//int* pa = &a;
//int** pa = &pa;

//int b = 20;
//*ppa = &b;
//**ppa = 30;

