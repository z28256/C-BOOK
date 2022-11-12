#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%zd\n", sizeof(arr));//4 * 4 = 16
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//int a[][3] = { {0, 2}, {}, {3, 4, 5} };//空的{}错误
//	char str[] = "hello bit";
//	printf("%zd %zd\n", sizeof(str), strlen(str));
//	return 0;
//}

//交换两个数组的内容
//#include <stdio.h>
//void swap_arr(int* arr1, int* arr2, int sz);
//void print(int* arr, int sz);
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	swap_arr(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
//void swap_arr(int* arr1, int* arr2, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = temp;
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}


//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//void reverse(int* arr, int n);
//void init(int* arr, int n);
//void print(int* arr, int n);
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
//void reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int temp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = temp;
//		left++;
//		right--;
//	}
//}
//void init(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}


//变量有类型，数组也有类型，都是去掉变量名后的部分
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int arr[10];
//
//	printf("%zd\n", sizeof(num));
//	printf("%zd\n", sizeof(int));
//
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(int[10]));
//	printf("%zd\n", sizeof(int [10]));
//
//	return 0;
//}


//整数的二进制表示形式：三种（原码，反码，补码）
//正数的原码，反码，补码都一样
//负数的反码是原码的符号位不变，其他位按位取反，补码是反码+1
//内存中存储的是：补码的二进制

//补码——>原码：(1)除符号位外，按位取反，然后+1
//补码——>原码：(2)先-1，然后，除符号位外，按位取反

//移位操作符的操作数只能是整数

//左移操作 <<
// 左边丢弃，右边补0
//左移一位，相当于原数*2
//#include <stdio.h>
//int main()
//{
//	int a = 10;//正数
//	//补码：00000000 00000000 00000000 00001010
//	int b = a << 1;
//	//补码：00000000000000000000000000001010
//	//	   000000000000000000000000000010100 	
//	//	    00000000000000000000000000010100//4 + 16 	
//
//	int c = -10;
//	int d = c << 1;
//	//原码：10000000000000000000000000001010
//	//反码：11111111111111111111111111110101
//	//补码：11111111111111111111111111110110
//	//     111111111111111111111111111101100
//	//      11111111111111111111111111101100
//	//      10000000000000000000000000010011
//	//      10000000000000000000000000010100//-(4 + 16)
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//	printf("d = %d\n", d);
//
//	return 0;
//}


//右移操作符 >>
//1.算术右移，右边丢弃，左边补原来的符号位
//2.逻辑右移，右边丢弃，左边直接补0
//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//原码：10000000000000000000000000000001
//	//反码：11111111111111111111111111111110
//	//补码：11111111111111111111111111111111
//	//      11111111111111111111111111111111
//	//       11111111111111111111111111111111
//	//      11111111111111111111111111111111
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = a >> 1;
//	//00000000000000000000000000000100
//	// 00000000000000000000000000000100
//	//00000000000000000000000000000010
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a >> -2;//不能是负数
//	return 0;
//}


//位操作符：操作数时整数，二进制

//&：按二进制与(补码运算)
//对应的二进制位有0就为0，两个都为1才是1
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	int c = a & b;
//	//a: 00000000000000000000000000000011
//	//b: 11111111111111111111111111111011
//	//c: 00000000000000000000000000000011(正数)
//	printf("%d\n", c);
//	return 0;
//}

//|：或
//对应的二进制位有1就为1，两个都为0才是0
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	int c = a | b;
//	//a:00000000000000000000000000000011
//	//b:11111111111111111111111111111011
//	//c:11111111111111111111111111111011(补码,负数)
//	//c:10000000000000000000000000000100
//	//c:10000000000000000000000000000101
//	printf("%d\n", c);
//	return 0;
//}

// ^:异或
//对应的二进制位：相同的为0，不同的为1
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	int c = a ^ b;
//	//a:00000000000000000000000000000011
//	//b:11111111111111111111111111111011
//	//c:11111111111111111111111111111000(补码,负数)
//	//c:10000000000000000000000000000111
//	//c:10000000000000000000000000001000 
//	printf("%d\n", c);
//	return 0;
//}


//不创建临时变量，交换两个整数
// a ^ a = 0
// 0 ^ a = a
//异或^: 支持交换律
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//有可能溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int b = 12;
//	b >>= 1;
//	printf("%d\n", b);
//	return 0;
//}


//布尔类型(C99)
#include <stdio.h>
#include <stdbool.h>
//int main()
//{
//	bool flag = false;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	unsigned int num = -10;
//	//原码：10000000000000000000000000001010
//	//反码：11111111111111111111111111110101
//	//补码：11111111111111111111111111110110 //十进制：4294967286
//	printf("%u\n", num);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	*((int*)0x0012ff40);//错误
//	return 0;
//}


//函数调用时，要写(),sizeof后面的()可以省略，说明sizeof不是函数
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof (a));
//	printf("%zd\n", sizeof a);
//	//printf("%zd", sizeof int);//错误
//	printf("%zd\n", sizeof (int));
//
//
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof (int[10]));
//	//printf("%zd", sizeof int[10]);
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof arr);
//
//	return 0;
//}


//sizeof内部的表达式不计算(根据数据类型确定)
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	short b = 5;
//	printf("%zd\n", sizeof(b = a + 3));
//	printf("%d\n", b);
//	return 0;
//}


// ~ : 按位取反（包括符号位）
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  -1
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 9;
//	//把a的二进制中的第五位改为1
//	//00000000000000000000000000001001
//	//00000000000000000000000000010000  1<<4
//	//00000000000000000000000000011001  //16 + 9
//	int b = a ^ (1 << 4);
//	printf("%d\n", b);
//
//	a |= 1 << 4;
//	printf("%d\n", a);
//
//	//把a的二进制中的第五位改回0
//	//00000000000000000000000000011001
//	//00000000000000000000000000010000  //1 << 4
//	//00000000000000000000000000001001
//	b = a ^ (1 << 4);
//	printf("%d\n", b);
//
//	//00000000000000000000000000011001
//	//11111111111111111111111111101111 // ~(1<<4)
//	//00000000000000000000000000001001
//
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//
//	return 0;
//}
