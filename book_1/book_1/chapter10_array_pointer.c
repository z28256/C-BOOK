#define _CRT_SECURE_NO_WARNINGS 1
//10.1 day_mon1.c  打印每个月的天数
//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	int index = 0;
//	for (index = 0; index < MONTHS; index++)
//	{
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//	}
//	return 0;
//}


//10.2 no_data.c  未初始化数组，存储的值未知
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int no_data[SIZE];		//未初始化的数组
//	int i = 0;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%2d%14d\n", i, no_data[i]);
//	}
//	return 0;
//}


//10.3  somedata.c  部分初始化数组, 剩余的元素被初始化为0
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int some_data[SIZE] = { 1492, 1066 };
//	int i = 0;
//	printf("%2s%14s\n", "i", "some_data[i]");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%2d%14d\n", i, some_data[i]);
//	}
//	return 0;
//}


//10.4 day_mon2.c  让编译器计算元素个数
//#include <stdio.h>
//int main(void)
//{
//	const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int index = 0;
//	for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
//	{
//		printf("Month %2d has %d days.\n", index + 1, days[index]);
//	}
//	return 0;
//}


//10.5  designate.c  使用指定初始化器
//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31, 28,[4] = 31, 30, 31,[1] = 29 };
//	int i = 0;
//	for (i = 0; i < MONTHS; i++)
//	{
//		printf("%2d   %d\n", i + 1, days[i]);
//	}
//	return 0;
//}


//给数组元素赋值
//#include <stdio.h>
//#define SIZE 50
//int main(void)
//{
//	int counter = 0;
//	int events[SIZE];
//	for (counter = 0; counter < SIZE; counter++)
//	{
//		events[counter] = 2 * counter;
//	}
//
//	int oxen[SIZE] = { 5, 3, 2, 8 };
//	int yaks[SIZE];
//	yaks = oxen;	//不允许
//	yaks[SIZE] = oxen[SIZE];	//数组下标越界，最大下标为SIZE - 1;
//	yaks[SIZE] = { 5, 3, 2, 8 };//不起作用，下标越界
//	return 0;
//}


//10.6  bounds.c  数组下标越界
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int value1 = 44;
//	int arr[SIZE];
//	int value2 = 88;
//	int i = 0;
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= SIZE; i++)
//	{
//		arr[i] = 2 * i + 1;
//	}
//	for (i = -1; i < 7; i++)
//	{
//		printf("%2d %d\n", i, arr[i]);
//	}
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	printf("address of arr[-1]: %p\n", &arr[-1]);
//	printf("address of arr[4]: %p\n", &arr[4]);
//	printf("address of value1: %p\n", &value1);
//	printf("address of value2: %p\n", &value2);
//
//	return 0;
//}


//声明数组
//int main(void)
//{
//	float a1[4];
//	float a2[4 * 5 + 6];
//	//sizeof表达式是整型常量表达式，因为sizeof是运算符
//	float a3[sizeof(int) + 1];
//
//	float a4[-4];	//数组大小必须大于0
//	float a5[0];	//数组大小必须大于0
//	float a6[2.5];	//数组大小必须是整数
//
//	float a7[(int)2.5];//强制类型转换
//
//	int n = 5;
//	float a8[n];	//C99之前不允许使用变长数组，且声明时不能初始化
//
//	const int m = 8;
//	float a9[m];   //const修饰的变量不是整型常量表达式
//	return 0;
//}


//10.7 rain.c  计算每年的总降水量、年平均降水量和5年中每月的平均降水量
//#include <stdio.h>
//#define MONTHS 12
//#define YEARS 5
//int main(void)
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{ 4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f },
//		{ 8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f },
//		{ 9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f },
//		{ 7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f },
//		{ 7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f }
//	};
//	int year = 0;
//	int month = 0;
//	float subtot = 0.0f;
//	float total = 0.0f;
//	printf(" YEAR RAINFALL (inches)\n");
//	for (year = 0, total = 0; year < YEARS; year++)
//	{
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			subtot += rain[year][month];
//		}
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
//	for (month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0; year < YEARS; year++)
//		{
//			subtot += rain[year][month];
//		}
//		printf("%3.1f ", subtot / YEARS);
//	}
//	printf("\n");
//	return 0;
//}


//10.8 pnt_add.c  指针地址
//在C中，指针加1指的是增加一个存储单元。
//对数组而言，这意味着把加1后的地址是下一个元素的地址，而不是下一个字节的地址
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE];	//short: 2字节
//	short* pti = dates;
//	short index = 0;
//	double bills[SIZE];	//double: 8字节
//	double* ptf = bills;
//	printf("%23s %15s\n", "short", "double");
//	for (index = 0; index < SIZE; index++)
//	{
//		printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);
//	}
//	return 0;
//}


//10.9  day_mon3.c  use pointer nontation
//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, };
//	int index = 0;
//	for (index = 0; index < MONTHS; index++)
//	{
//		printf("Month %2d has %d days.\n", index + 1,
//			*(days + index)); //与days[index]相同
//	}
//	return 0;
//}


//int sum(int* arr)
//{
//	int i = 0;
//	int total = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//total += arr[i];
//		total += *(arr + i);
//	}
//	return total;
//}


//int sum(int arr[], int n)
//int sum(int* arr, int n)
//{
//	int i = 0;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		//total += arr[i];
//		total += *(arr + i);
//	}
//	return total;
//}


//10.10 sum_arr1.c  数组元素之和
//#include <stdio.h>
//#define SIZE 10
//int sum(int arr[], int n);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
//	long answer = sum(marbles, SIZE);
//	printf("The total number of %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
//	return 0;
//}
//int sum(int arr[], int n)
//{
//	int index = 0;
//	int total = 0;
//	for (index = 0; index < n; index++)
//	{
//		total += arr[index];
//	}
//	//sizeof(arr)是指针变量的大小 ：8字节（不一定，与系统有关）
//	printf("The size of arr is %zd bytes.\n", sizeof(arr));
//	return total;
//}


//10.11 sum_arr2.c  数组元素之和
//#include <stdio.h>
//#define SIZE 10
//int sump(int* start, int* end);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
//	//long answer = sump(marbles, marbles + SIZE - 1);	//第一种
//	long answer = sump(marbles, marbles + SIZE);	//第二种，指针越界
//	printf("The total number of marbles is %ld.\n", answer);
//}
//int sump(int* start, int* end)
//{
//	int total = 0;
//	//while (start <= end)		//第一种
//	while (start < end)		//第二种
//	{
//		//total += *start;
//		//start++;
//	
//		//* 与 ++ 的优先级相同，但结合律是从右往左，先进行start++,在进行
//		//*start,又因为是后缀++，所以先将原有的值加到total上，再递增指针
//		total += *start++;
//	}
//	return total;
//}


//10.12 指针运算中的优先级
//#include <stdio.h>
//int data[2] = { 100, 200 };
//int moredata[2] = { 300, 400 };
//int main(void)
//{
//	int* p1 = data;
//	int* p2 = data;
//	int* p3 = moredata;
//
//	printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//
//	return 0;
//}


//10.13 ptr_ops.c  指针操作
//指针与整数相加：可以使用 + 运算符把指针与整数相加，或整数与指针
//相加。无论哪种情况，整数都会和指针所指向类型的大小（以字节为单位）
//相乘，然后把结果与初始地址相加。
//#include <stdio.h>
//int main(void)
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int* ptr1 = urn;
//	int* ptr2 = &urn[2];
//	printf("pointer value, dereferenced pointer, pointer address:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	int* ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
//	ptr1++;
//	printf("\nvalues after ptr1++:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr2--;
//	printf("\nvalues after --ptr2:\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//	--ptr1;
//	++ptr2;
//	printf("\nPointer reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	printf("\nsubtracting one pointer from another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",
//		ptr2, ptr1, ptr2 - ptr1);
//	printf("\nsubtracting an int from a pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
//
//	return 0;
//}


//传递地址，修改原值
//#include <stdio.h>
//void add_to(double ar[], int n, double value)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ar[i] += value;
//	}
//}
//计算数组元素和（错误代码）
//double sum(double ar[], int n)
//{
//	int i = 0;
//	double total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += ar[i]++;	//错误递增了每个元素的值
//	}
//	return total;
//}
//
//int main(void)
//{
//	int i = 0;
//	double array[] = { 1.2, 6.2, 3.1, 2.5, 9.1, .6, .1, 4.6, };
//	int sz = sizeof(array) / sizeof(array[0]);
//
//	printf("sum = %.1f\n", sum(array, sz));
//
//	add_to(array, sz, 1.1);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f ", array[i]);
//	}
//	printf("\n");
//
//	printf("sum = %.1f\n", sum(array, sz));
//	return 0;
//}


//const:只读
//int sum(const int ar[], int n)
//{
//	int i = 0;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += ar[i];
//	}
//	return total;
//}


//10.14 arf.c  处理数组的函数
//#include <stdio.h>
//#define SIZE 5
//void show_array(const double ar[], int n);
//void mult_array(double ar[], int n, double mult);
//int main(void)
//{
//	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
//
//	printf("The original dip array:\n");
//	show_array(dip, SIZE);
//
//	mult_array(dip, SIZE, 2.5);
//
//	printf("The dip array calling mult_array():\n");
//	show_array(dip, SIZE);
//
//	return 0;
//}
//
//void show_array(const double ar[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%8.3f ", ar[i]);
//	}
//	putchar('\n');
//}
//
//void mult_array(double ar[], int n, double mult)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ar[i] *= mult;
//	}
//}


//const的指针不能用于改变值，但可以指向别处
//int main(void)
//{
//	double rates[5] = { 5.6, 5.1, 2.3, 1.1, 9.5 };
//	const double* pd = rates;
//	//*pd = 44.2; // 不允许
//	//pd[2] = 9.5; // 不允许
//	rates[0] = 999.5;//允许
//
//	pd++;//允许，让pd指向别处
//
//	return 0;
//}


//把const数据或非const数据的地址初始化为指向const的指针或为其赋值是合法的
//int main(void)
//{
//	double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	const double* pc = rates;	//有效
//	pc = locked;		//有效
//	pc = &rates[3];		//有效
//
//	//只能把非const数据的地址赋给普通指针
//	double rates1[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double locked1[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	double* pnc = rates1;	//有效
//	pnc = locked1;			//无效,const的数据不能修改，不能用普通指针 VS:不同的“const”限定符
//	pnc = &rates1[3];		//有效
//
//	return 0;
//}


//可以声明并初始化一个不能指向别处的指针，关键是const的位置
//int main(void)
//{
//	double rates[5] = { 88.39, 100.12, 59.45, 183.11, 340.5 };
//	double* const pc = rates;
//
//	pc = &rates[2];		//不允许，因为该指针不能指向别处
//	*pc = 92.99;		//允许更改rates[0]的值
//
//	return 0;
//}


//在创建指针时还可以使用const两次，该指针既不能更改它所指向的地址，
//也不能修改指向地址上的值：
//int main(void)
//{
//	double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double* const pc = rates;
//	pc = &rates[2];	//不允许
//	*pc = 66.33;	//不允许
//	return 0;
//}


//10.15 zippo1,c  zippo的相关信息
//#include <stdio.h>
//int main(void)
//{
//	int zippo[4][2] =
//	{
//		{2, 4},
//		{6, 8},
//		{1, 3},
//		{5, 7},
//	};
//
//	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
//	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
//	printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
//	printf("zippo[0][0] = %d\n", zippo[0][0]);
//	printf("*zippo[0] = %d\n", *zippo[0]);
//	printf("**zippo = %d\n", **zippo);
//	printf("zippo[2][1] = %d\n", zippo[2][1]);
//	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
//
//	return 0;
//}


//[]的优先级高于*
//10.16  zippo2.c  通过指针获取zippo的信息
//#include <stdio.h>
//int main(void) 
//{
//	int zippo[4][2] =
//	{
//		{2, 4},
//		{6, 8},
//		{1, 3},
//		{5, 7},
//	};
//	//int(*pz)[2];
//	//pz = zippo;
//	int(*pz)[2] = zippo;
//	printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
//	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
//	printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
//	printf("pz[0][0] = %d\n", pz[0][0]);
//	printf("*pz[0] = %d\n", *pz[0]);
//	printf("**pz = %d\n", **pz);
//	printf("pz[2][1] = %d\n", pz[2][1]);
//	printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));
//
//	return 0;
//}


//指针的兼容性
//不用类型转换就可以把int类型的值赋给double类型的变量
//但两个类型的指针不能这样做
//int main()
//{
//	int n = 5;
//	double x;
//	int* pl = &n;
//	double* pd = &x;
//	x = n;
//	pd = pl;	//从“int* ”到“double* ”的类型不兼容
//	return 0;
//}


//int main()
//{
//	int* pt;
//	int(*pa)[3];
//	int ar1[2][3];
//	int ar2[3][2];
//	int** p2;
//
//	pt = &ar1[0][0];	//都是指向int的指针
//	pt = &ar1[0];		//都是指向int的指针 VS:“int *”与“int (*)[3]”的间接级别不同
//	pt = ar1;			//无效 VS:“int *”与“int (*)[3]”的间接级别不同
//	pa = ar1;			//都是指向内含3个int类型元素数组的指针
//	pa = ar2;			//无效 VS:“int (*)[3]”和“int (*)[2]”数组的下标不同
//	p2 = &pt;			//both pointer-to-int*
//	*p2 = ar2[0];		//都是指向int的指针
//	p2 = ar2;			//无效 VS:int **”与“int (*)[2]”的间接级别不同
//
//	return 0;
//}


//多重解引用
//int main()
//{
//	int x = 20;
//	const int y = 23;
//	int* p1 = &x;
//	const int* p2 = &y;
//	const int** pp2;
//	p1 = p2;	//不安全，把const指针赋给非const指针 VS:不同的“const”限定符
//	p2 = p1;	//有效，把非const指针赋给const指针
//	pp2 = &p1;	//不安全，嵌套指针类型赋值
//	return 0;
//}

//两级解引用,不安全
//#include <stdio.h>
//int main()
//{
//	const int** pp2;//不能通过*pp2修改它所指向的内容
//	int* p1;
//	const int n = 13;
//	pp2 = &p1;//允许，但是这导致const限定符失效
//	*pp2 = &n;//有效，两者都声明为const，但会导致p1指向n(*pp2已被修改)
//	*p1 = 10;//有效，改变了n的值
//	printf("%d\n", n);
//	return 0;
//}
//标准规定了通过非const指针更改const数据是未定义的

//int main()
//{
//	const int y;
//	const int* p2 = &y;
//	int* p1;
//	p1 = p2;// C++不允许，C警告，VS:不同的“const”限定符
//	return 0;
//}


//10.17 array2.c  处理二维数组的函数
//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);
//void sum_cols(int[][COLS], int);
//int sum2d(int(*ar)[COLS], int rows);
//int main(void)
//{
//	int junk[ROWS][COLS] =
//	{
//		{ 2, 4, 6, 8},
//		{ 3, 5, 7, 9},
//		{12, 10, 8, 6},
//	};
//	sum_rows(junk, ROWS);
//	sum_cols(junk, ROWS);
//	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
//	return 0;
//}
//void sum_rows(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot;
//	for (r = 0; r < rows; r++)
//	{
//		tot = 0;
//		for (c = 0; c < COLS; c++)
//		{
//			tot += ar[r][c];
//		}
//		printf("row %d: sum = %d\n", r, tot);
//	}
//}
//
//void sum_cols(int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot;
//	for (c = 0; c < COLS; c++)
//	{
//		tot = 0;
//		for (r = 0; r < rows; r++)
//		{
//			tot += ar[r][c];
//		}
//		printf("col %d: sum = %d\n", c, tot);
//	}
//}
//int sum2d(int (*ar)[COLS], int rows)
//{
//	int r;
//	int c;
//	int tot = 0;
//	for (r = 0; r < rows; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			tot += ar[r][c];
//		}
//	}
//	return tot;
//}


//编译器会把数组表示法转换成指针表示法
//把ar[1]转换成ar+1,编译器对ar+1求值，要知道ar所指向的对象大小
//int sum2(int ar[][], int rows);	//错误的声明
// 
//int sum2(int ar[][4], int rows);	//有效声明
//int sum2 (int ar[3][4], int rows);//有效声明，但是3被忽略
//表示ar指向一个内含4个int类型值的数组（一个int类型占4个字节）
//ar+1的意思是“该地址加上16字节”
//如果第2个括号是空的，编译器就不知道该怎么处理


//typedef int arr4[4];	//arr4是一个内含4个int的数组
//typedef arr4 arr3x4[3];	//arr3x4是一个内含3个arr4的数组
//int sum1(arr3x4 ar, int rows);
//int sum2(int ar[3][4], int rows);
//int sum3(int ar[][4], int rows);	//标准形式，与上面的声明相同


//声明一个指向N维数组的指针时，只能省略最左边方括号中的值
//第一个方括号表明这是一个指针，而其他的方括号用于描述指针所指向数据对象的类型
//int sum4d(int ar[][12][20][30], int rows);//与下面的声明等价
//int sum4d(int (*ar)[12][20][30], int rows); //ar是一个指针


//普通 C数组都是静态内存分配，即在编译时确定数组的大小。
//由于数组大小是常量，所以编译器在编译时就知道了。


//#include <stdio.h>
//int main()
//{
//	int diva[2] = { 10, 20 };
//	(int[2])
//	{
//		10, 20
//	};
//	(int[]) //可以省略大小
//	{
//		50, 20, 90
//	};
//	/*因为复合字面量是匿名的，所以不能先创建然后再使用它，
//	必须在创建的同时使用它。使用指针记录地址就是一种用法*/
//	int* pt1;
//	pt1 = (int[2])
//	{
//		10, 20
//	};
//	printf("*pt1 = %d, pt1[1] = %d\n", *pt1, pt1[1]);
//
//	int(*pt2)[4];	//声明一个指向二维数组的指针
//	pt2 = (int[2][4])
//	{
//		{ 1, 2, 3, -9},
//		{4, 5, 6, -8},
//	};
//
//	return 0;
//}


//10.19 flc.c  有趣的常量
//#include <stdio.h>
//#define COLS 4
//int sum2d(const int ar[][COLS], int rows);
//int sum(const int ar[], int n);
//int main(void)
//{
//	int total1, total2, total3;
//	int* pt1;
//	int(*pt2)[COLS];
//	pt1 = (int[2])
//	{
//		10, 20,
//	};
//	pt2 = (int[2][COLS])
//	{
//		{ 1, 2, 3, -9 },
//		{ 4, 5, 6, -8 },
//	};
//	total1 = sum(pt1, 2);
//	total2 = sum2d(pt2, 2);
//	total3 = sum((int[]) { 4, 4, 4, 5, 5, 5 }, 6);
//	printf("total1 = %d\n", total1);
//	printf("total2 = %d\n", total2);
//	printf("total3 = %d\n", total3);
//	return 0;
//}
//
//int sum(const int ar[], int n)
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += ar[i];
//	}
//	return total;
//}
//
//int sum2d(const int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int tot = 0;
//	for (r = 0; r < rows; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			tot += ar[r][c];
//		}
//	}
//	return tot;
//}


//10.13 编程练习
//1.修改10.7的rain.c程序，用指针进行计算
//#include <stdio.h>
//#define MONTHS 12
//#define YEARS 5
//int main(void)
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{ 4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f },
//		{ 8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f },
//		{ 9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f },
//		{ 7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f },
//		{ 7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f }
//	};
//	int year = 0;
//	int month = 0;
//	float subtot = 0.0f;
//	float total = 0.0f;
//	printf(" YEAR RAINFALL (inches)\n");
//	for (year = 0, total = 0; year < YEARS; year++)
//	{
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			//subtot += rain[year][month];
//			subtot += *( *(rain + year) + month);
//		}
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
//	for (month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0; year < YEARS; year++)
//		{
//			//subtot += rain[year][month];
//			subtot += *(*(rain + year) + month);
//		}
//		printf("%3.1f ", subtot / YEARS);
//	}
//	printf("\n");
//	return 0;
//}


//2.初始化一个double类型的数组，拷贝到3个其他数组中
//第一份拷贝：数组表示法的函数；第二份：指针表示法和指针递增的函数
//前两个函数的参数：目标数组名，源数组名和待拷贝的元素个数
//第三份：目标数组名，源数组名和指向源数组最后一个元素后面的元素的指针
//#include <stdio.h>
//void copy_arr(double target[], double source[], int n);
//void copy_ptr(double* target, double* source, int n);
//void copy_ptrs(double *target, double* source, double* end);
//int main(void)
//{
//	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//
//	copy_arr(target1, source, 5);
//	copy_ptr(target2, source, 5);
//	copy_ptrs(target3, source, source + 5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%.1f ", target1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%.1f ", target2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%.1f ", target3[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void copy_arr(double target[], double source[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		target[i] = source[i];
//	}
//}
//void copy_ptr(double* target, double* source, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(target + i) = *(source + i);
//	}
//}
//void copy_ptrs(double* target, double* source, double* end)
//{
//	while (source <= end)
//	{
//		*target = *source;
//		target++;
//		source++;
//	}
//}


//3.返回int类型数组中的最大值
//#include <stdio.h>
//#define SIZE 10
//int Max_array(int* pi, int n);
//int main(void)
//{
//	int arr[SIZE] = { 0 };
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = Max_array(arr, SIZE);
//	printf("%d\n", max);
//	return 0;
//}
//int Max_array(int* pi, int n)
//{
//	int max = *pi;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (*(pi + i) > max)
//		{
//			max = *(pi + i);
//		}
//	}
//	return max;
//}


//4.返回double类型数组中的最大值的下标
//#include <stdio.h>
//#define SIZE 10
//int subscript(double* pf, int n);
//int main(void)
//{
//	double d_arr[SIZE] = { 0.0 };
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%lf", &d_arr[i]);
//	}
//	int ret = subscript(d_arr, SIZE);
//	printf("%d\n", ret);
//	return 0;
//}
//int subscript(double* pf, int n)
//{
//	int i = 0;
//	double max = *pf;
//	for (i = 1; i < n; i++)
//	{
//		if (max < *(pf + i))
//		{
//			max = *(pf + i);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (max == *(pf + i))
//		{
//			return i;
//		}
//	}
//}


//5.返回double类型数组中最大值和最小值的差值
//#include <stdio.h>
//#define SIZE 10
//double sub(double* pf, int n);
//int main(void)
//{
//	int i = 0;
//	double d_arr[SIZE] = { 0.0 };
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%lf", &d_arr[i]);
//	}
//	double ret = sub(d_arr, SIZE);
//	printf("%f\n", ret);
//	return 0;
//}
//double sub(double* pf, int n)
//{
//	int i = 0;
//	double min = *pf;
//	double max = *pf;
//	for (i = 0; i < n; i++)
//	{
//		if (min > *(pf + i))
//		{
//			min = *(pf + i);
//		}
//		if (max < *(pf + i))
//		{
//			max = *(pf + i);
//		}
//	}
//	return max - min;
//}


//6.double类型数组倒序排列
//#include <stdio.h>
//#define SIZE 10
//void reverse(double* fp, int n);
//int main(void)
//{
//	int i = 0;
//	double d_arr[SIZE] = { 0.0 };
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%lf", &d_arr[i]);
//	}
//	reverse(d_arr, SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%f ", d_arr[i]);
//	}
//	return 0;
//}
//void reverse(double* fp, int n)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left < right)
//	{
//		double tmp = *(fp + left);
//		*(fp + left) = *(fp + right);
//		*(fp + right) = tmp;
//		left++;
//		right--;
//	}
//	
//}


//7.初始化一个double类型二维数组，使用编程练习2的一个拷贝函数
//将数据拷贝到另一个二维数组
//#include <stdio.h>
//void copy_ptrs(double* target, double* source, double* end);
//int main(void)
//{
//	double d2_arr[3][2] =
//	{
//		{1.1, 2.2},
//		{3.3, 4.4},
//		{5.5, 6.6}
//	};
//	double copy[3][2] = { 0.0 };
//	int i = 0;
//	for (i = 0; i < sizeof(d2_arr) / sizeof(d2_arr[0]); i++)
//	{
//		copy_ptrs(copy[i], d2_arr[i], *(d2_arr + i) + 2);
//	}
//
//	for (i = 0; i < sizeof(d2_arr) / sizeof(d2_arr[0][0]); i++)
//	{
//		printf("%f ", *(d2_arr[0] + i));	//1
//	}
//	printf("\n");
//	double* f = &copy[0][0];			//2
//	for (i = 0; i < sizeof(copy) / sizeof(copy[0][0]); i++)
//	{
//		printf("%f ", *(f + i));		//2
//	}
//	return 0;
//}
//
//void copy_ptrs(double* target, double* source, double* end)
//{
//	while (source <= end)
//	{
//		*target = *source;
//		target++;
//		source++;
//	}
//}


//8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中
//第3到第5个元素拷贝到内含3个元素的数组中
//#include <stdio.h>
//void copy_ptrs(double* target, double* source, double* end);
//int main(void)
//{
//	double arr[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, };
//	double arr2[3] = { 0.0 };
//	copy_ptrs(arr2, arr + 2, arr + 4);
//	int i = 0;
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//	return 0;
//}
//
//void copy_ptrs(double* target, double* source, double* end)
//{
//	while (source <= end)
//	{
//		*target = *source;
//		target++;
//		source++;
//	}
//}


//9.初始化一个double类型的3x5二维数组，使用一个处理变长数组的函数将其拷贝到
// 另一个二维数组中，再编写一个以变长数组为形参的函数以显示两个数组
//都能处理NxM数组（不支持变长数组，使用Nx5的数组）
//#include <stdio.h>
//void Copy(double(*pf1)[5], double(*pf2)[5], int n);
//void Print(double(*pf)[5], int n);
//int main(void)
//{
//	double d2_arr[3][5] =
//	{
//		{1.1, 1.2, 1.3, 1.4, 1.5},
//		{2.1, 2.2, 2.3, 2.4, 2.5},
//		{3.1, 3.2, 3.3, 3.4, 3.5},
//	};
//	double copy[3][5] = { 0.0 };
//	Copy(d2_arr, copy, 3);
//	Print(copy, 3);
//	return 0;
//}
//void Copy(double(*pf1)[5], double(*pf2)[5], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			*(*(pf2 + i) + j) = *(*(pf1 + i) + j);
//		}
//	}
//}
//void Print(double(*pf)[5], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%f ", *(*(pf + i) + j));
//		}
//		printf("\n");
//	}
//
//}


//10. 函数接收两个数组，将两个数组中的元素之和存储到第三个数组中
//函数接收3个数组名和一个数组大小
//#include <stdio.h>
//void sum_array(int* pi1, int* pi2, int* pi3, int n);
//int main(void)
//{
//	int arr1[4] = { 2, 4, 5, 8 };
//	int arr2[4] = { 1, 0, 4, 6 };
//	int arr3[4] = { 0 };
//
//	sum_array(arr1, arr2, arr3, 4);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr3 + i));
//	}
//	return 0;
//}
//void sum_array(int* pi1, int* pi2, int* pi3, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(pi3 + i) = *(pi1 + i) + *(pi2 + i);
//	}
//}


//11. 声明一个int类型3x5二维数组并初始化，打印该数组，
// 然后该数组的值翻倍，再次打印
//#include <stdio.h>
//void Double(int pi[][5], int line);
//void Print(int pi[][5], int line);
//int main(void)
//{
//	int arr[3][5] =
//	{
//		{1, 2, 3, 4, 5},
//		{2, 3, 4, 5, 6},
//		{3, 4, 5, 6, 7},
//	};
//	Double(arr, 3);
//	Print(arr, 3);
//	return 0;
//}
//void Double(int pi[][5], int line)
//{
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			*(*(pi + i) + j) *= 2;
//		}
//	}
//}
//void Print(int pi[][5], int line)
//{
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d ", pi[i][j]);
//		}
//		printf("\n");
//	}
//
//}


//12.重写10.7 rain.c 把main()中的主要任务都改为用函数来完成
//10.7 rain.c  计算每年的总降水量、年平均降水量和5年中每月的平均降水量
//#include <stdio.h>
//#define MONTHS 12
//#define YEARS 5
//void year_rainfall(const float(*pf)[MONTHS]);
//void monthly_averages(const float(*pf)[MONTHS]);
//int main(void)
//{
//	const float rain[YEARS][MONTHS] =
//	{
//		{ 4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f },
//		{ 8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f },
//		{ 9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f },
//		{ 7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f },
//		{ 7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f }
//	};
//	year_rainfall(rain);
//	monthly_averages(rain);
//	return 0;
//}
//void year_rainfall(const float (*pf)[MONTHS])
//{
//	int year = 0;
//	float total = 0.0f;
//	int month = 0;
//	float subtot = 0.0f;
//	printf(" YEAR RAINFALL (inches)\n");
//
//	for (year = 0, total = 0; year < YEARS; year++)
//	{
//		for (month = 0, subtot = 0; month < MONTHS; month++)
//		{
//			subtot += *(*(pf + year) + month);
//		}
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot;
//	}
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//
//}
//void monthly_averages(const float(*pf)[MONTHS])
//{
//	int month = 0;
//	int year = 0;
//	float subtot = 0.0f;
//	printf("MONTHLY AVERAGES:\n\n");
//	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
//
//	for (month = 0; month < MONTHS; month++)
//	{
//		for (year = 0, subtot = 0; year < YEARS; year++)
//		{
//			subtot += pf[year][month];
//		}
//		printf("%3.1f ", subtot / YEARS);
//	}
//	printf("\n");
//
//}


//13.用户输入3组数，每组5个double类型的数组
//a.把用户输入的数据存储在3x5的数组中
//b.计算每组5个数据的平均值
//c.计算所有数据的平均值
//d.找出15个数中的最大值
//e.打印结果
//对于b,利用一维数组平均值的函数，循环写出结果,其他都是以整个数组作为参数
//c 和 d 函数应把结果返回主调函数
//#include <stdio.h>
//void input(double(*d2_arr)[5]);
//void average(double* arr);
//double all_average(double(*fp)[5]);
//double max(double(*fp)[5]);
//int main(void)
//{
//	double arr[3][5] = { 0.0 };
//	input(arr);
//	int i = 0;
//	double ret = 0;
//	for (i = 0; i < 3; i++)
//	{
//		average(arr[i]);
//	}
//	ret = all_average(arr);
//	printf("Average: %f\n", ret);
//	ret = max(arr);
//	printf("Max: %f\n", ret);
//	return 0;
//}
//void input(double(*d2_arr)[5])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d: ", i);
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%lf", &d2_arr[i][j]);
//		}
//	}
//}
//void average(double* arr)
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += *(arr + i);
//	}
//	printf("%f \n", sum / 5);
//}
//double all_average(double(*fp)[5])
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			sum += *(*(fp + i) + j);
//		}
//	}
//	return sum / 15;
//}
//double max(double(*fp)[5])
//{
//	int i = 0;
//	double max = **fp;
//	for (i = 0; i < 15; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			if (max < *(*(fp + i) + j))
//			{
//				max = *(*(fp + i) + j);
//			}
//		}
//	}
//	return max;
//}
