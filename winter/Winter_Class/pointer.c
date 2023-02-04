#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//常量字符串，不能被修改，可以用 const 来保证不被修改
//	const char* pc = "abcde";
//	printf("%s\n", pc);
//	return 0;
//}


// C 会将常量字符串存储到单独的一个内存区域，
//当几个指针都指向同一个字符串时，都指向同一块内存
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//指针数组
//int main()
//{
//	const char* arr[4] = { "hello", "world", "start", "end" };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	putchar('\n');
//	int arr1[3] = { 2, 5, 7 };
//	int arr2[3] = { 3, 6, 8 };
//	int arr3[3] = { 1, 4, 9 };
//
//	int* arr4[3] = { arr1, arr2, arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}


//数组指针
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int(*p)[3] = &arr;
//	//数组地址与数组首元素地址的值相同，但是意义不同
//	printf("%p\n", p);
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	printf("%p\n", p + 1);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	return 0;
//}


//void print(int (*p)[2], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int(*p)[3] = &arr;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", (*p)[i]);
//	}
//
//	int arr1[3][2] = { 1, 2, 3, 4, 5, 6 };
//	print(arr1, 3, 2);
//	return 0;
//}


//int (*p[10])[5];  //p是有10个元素的数组，元素类型是int(*)[5]，p是数组指针数组


//一维数组传参
//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int* arr[])//ok
//{}
//void test2(int** arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//二维数组传参
//void test(int arr[3][5])//ok
//{}
////void test(int arr[][])//err
////{}
//void test(int arr[][5])//ok
//{}
//void test(int* arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])//ok
//{}
//void test(int** arr)//err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
//void test(int*);
//int main()
//{
//	int n = 2;
//	int* p = &n;
//	int arr[3] = { 0 };
//	test(&n);
//	test(p);
//	test(arr);
//	return 0;
//}


//当函数的参数为二级指针的时候，可以接收什么参数？
//void test(char** p);
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*p)(int, int) = &add;
//	//int (*p)(int, int) = add;
//	//printf("%d\n", (*p)(2, 4));
//	//printf("%d\n", p(2, 4));
//
//
//	(*(void(*)())0)();
//	//将0强制类型转换为函数指针void(*)()类型，然后再解引用
//	void (*signal(int, void(*)(int)))(int);
//	//signal函数两个参数int,void(*)(int),返回类型为void(*)(int)
//
//	typedef void(*pf)(int);
//	pf signal(int, pf);
//
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//函数指针数组
//	int(*pf[5])(int, int) = { add };
//	return 0;
//}


//void menu()
//{
//	printf("0.exit  1.add  \n");
//	printf("2.sub   3.mul  \n");
//	printf("4.div  \n");
//}
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

//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	if (pf == div && !y)
//	{
//		printf("除数不能为0\n");
//		return;
//	}
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	do
//	{
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


//int main()
//{
//	int (*pf[4])(int, int) = { add, sub, mul, div };
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	do
//	{
//		scanf("%d", &input);
//
//		if (!input)
//		{
//			printf("Exit!\n");
//		}
//		else if (input <= 4 && input >= 0)
//		{
//			scanf("%d%d", &x, &y);
//			if (input == 4 && !y)
//			{
//				printf("除数不能为0\n");
//				continue;
//			}
//			int ret = pf[input - 1](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("Error!\n");
//		}
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//	menu();
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			scanf("%d%d", &x, &y);
//			ret = add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			scanf("%d%d", &x, &y);
//			if (!y)
//			{
//				printf("除数不能为0\n");
//				break;
//			}
//			ret = div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("Exit!\n");
//			break;
//		default:
//			printf("Error!\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int (*pf[5])(int, int) = { 0 };
//	//指向函数指针数组的指针
//	int (*(*ppf)[5])(int, int) = &pf;
//	return 0;
//}


//冒泡排序模拟实现qsort函数

#include <stdlib.h>
#include <string.h>
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
//	if (*(float*)e1 - *(float*)e2 > 0)
//	{
//		return 1;
//	}
//	else if (*(float*)e1 - *(float*)e2 < 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void print(struct stu* p, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d %s\n", (p + i)->age, (p + i)->name);
//	}
//}
//
//void swap(char* e1, char* e2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *(e1 + i);
//		*(e1 + i) = *(e2 + i);
//		*(e2 + i) = temp;
//	}
//}
//
//void bubble_qsort(void* start, int num, int width, int(*pf)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (pf((char*)start + j * width, (char*)start + (j + 1)*width) > 0)
//			{
//				swap((char*)start + j * width, (char*)start + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = {9, 2, 7, 4, 6};
//	int num = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, num, sizeof(arr[0]), cmp_int);
//	bubble_qsort(arr, num, sizeof(arr[0]), cmp_int);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//
//
//	float f_arr[5] = { 2.4f, 1.2f, 1.1f, 8.4f, 6.1f };
//	int num1 = sizeof(f_arr) / sizeof(f_arr[0]);
//	//qsort(f_arr, num1, sizeof(f_arr[0]), cmp_float);
//	bubble_qsort(f_arr, num1, sizeof(f_arr[0]), cmp_float);
//
//	for (int i = 0; i < num1; i++)
//	{
//		printf("%.2f ", f_arr[i]);
//	}
//	putchar('\n');
//
//	struct stu s[3] = { { 20, "Tom"}, { 50, "Lion" }, { 33, "Jerry" } };
//	int num2 = sizeof(s) / sizeof(s[0]);
//	//qsort(s, num2, sizeof(s[0]), cmp_age);
//	bubble_qsort(s, num2, sizeof(s[0]), cmp_age);
//	print(s, num2);
//	//qsort(s, num2, sizeof(s[0]), cmp_name);
//	bubble_qsort(s, num2, sizeof(s[0]), cmp_name);
//	print(s, num2);
//
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	//11001000
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//11001000
//	//01100100
//	//100101100
//	//00101100 - 0x2c 12+2*16=44
//	printf("%d  %d\n", a + b, c);
//
//	return 0;
//}


//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);//0x34 - 3*16+4=52(小端),0x00(大端)
//
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；


//int main()
//{
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((2 == b) + (3 == a) == 1) &&
//							((2 == b) + (4 == e) == 1) &&
//							((1 == c) + (2 == d) == 1) &&
//							((5 == c) + (3 == d) == 1) &&
//							((4 == e) + (1 == a) == 1) &&
//							a * b * c * d * e == 120)
//						{
//							printf("a = %d, b = %d, c = %d, d = %d, e = %d\n",
//								a, b, c, d, e);
//						}
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。


//int main()
//{
//	for (char killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1


//int main()
//{
//	int arr[5][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 4 - i; j++)
//		{
//			putchar(' ');
//		}
//		arr[i][i] = 1;
//		arr[i][0] = 1;
//		for (j = 0; j <= i; j++)
//		{
//			if (i > 1 && j > 0 && i != j)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//void test(int* arr)
//{
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
//	//test(arr[0]);
//	test(&arr[0][0]);
//	return 0;
//}


//int find(int(*p)[3], int* px, int* py, int k)
//{
//	*px = 0;
//	(*py)--;
//	while (*px <= 2 && *py >= 0)
//	{
//		if (p[*px][*py] > k)
//			(*py)--;
//		else if (p[*px][*py] < k)
//			(*px)++;
//		else
//			return 1;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 19;
//	int x = 3;
//	int y = 3;
//
//	int ret = find(arr, &x, &y, k);
//
//	if (ret)
//		printf("%d %d\n", x, y);
//	else
//		printf("找不到\n");
//
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void left_spin(char* str, int n)
//{
//	int len = (int)strlen(str);
//	n %= len;
//	while (n--)
//	{
//		char temp = *str;
//		for (int i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = temp;
//	}
//}


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
//void left_spin(char* str, int n)
//{
//	int len = (int)strlen(str);
//	n %= len;
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//}


//int main()
//{
//	char str[] = "abcdef";
//	left_spin(str, 2);
//	printf(str);
//	return 0;
//}


//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//int is_spin(char* s1, char* s2)
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	if (len1 != len2)
//		return 0;
//	while (len1--)
//	{
//		left_spin(s1, 1);
//		if (!strcmp(s1, s2))
//			return 1;
//	}
//	return 0;
//}


//int is_spin(char* s1, char* s2)
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	if (len1 != len2)
//		return 0;
//	strncat(s1, s1, len1);
//	if (strstr(s1, s2))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "defbc";
//
//	if (is_spin(s1, s2))
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}


//sizeof(数值名) &数组名 代表的是整个数组，其他情况下都是数组首元素地址
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));//int[4] - 16
//	printf("%zd\n", sizeof(a + 0));//int* - 4/8
//	printf("%zd\n", sizeof(*a));//int - 4
//	printf("%zd\n", sizeof(a + 1));//int* 4/8
//	printf("%zd\n", sizeof(a[1]));//int - 4
//	printf("%zd\n", sizeof(&a));//int(*)[4] - 4/8
//	printf("%zd\n", sizeof(*&a));//int[4] - 16
//	printf("%zd\n", sizeof(&a + 1));//int(*)[4] - 4/8
//	printf("%zd\n", sizeof(&a[0]));//int* - 4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//int* - 4/8
//	return 0;
//}


//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	
//	//printf("%zd\n", sizeof(arr));//char[6] - 6
//	//printf("%zd\n", sizeof(arr + 0));//char* - 4/8
//	//printf("%zd\n", sizeof(*arr));//char - 1
//	//printf("%zd\n", sizeof(arr[1]));//char - 1
//	//printf("%zd\n", sizeof(&arr));//char(*)[6] - 4/8
//	//printf("%zd\n", sizeof(&arr + 1));//char(*)[6] - 4/8
//	//printf("%zd\n", sizeof(&arr[0] + 1));//char* - 4/8
//
//	printf("%zd\n", strlen(arr));//随机n
//	printf("%zd\n", strlen(arr + 0));//随机n
//	
//	//读取位置 0x0000000000000061 时发生访问冲突。//6 * 16 + 1 = 97
//	//printf("%zd\n", strlen(*arr));//'a' - 97  非法访问
//	//printf("%zd\n", strlen(arr[1]));//'b'' - 98 非法访问
//	printf("%zd\n", strlen(&arr));//随机n
//	printf("%zd\n", strlen(&arr + 1));//随机m
//	printf("%zd\n", strlen(&arr[0] + 1));//随机n-1
//	
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	
//	printf("%zd\n", sizeof(arr));//char[7] - 7
//	printf("%zd\n", sizeof(arr + 0));//char* - 4/8
//	printf("%zd\n", sizeof(*arr));//char - 1
//	printf("%zd\n", sizeof(arr[1]));//char - 1
//	printf("%zd\n", sizeof(&arr));//char(*)[7] - 4/8
//	printf("%zd\n", sizeof(&arr + 1));//char(*)[7] - 4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//char* - 4/8
//	
//	printf("%zd\n", strlen(arr));//6
//	printf("%zd\n", strlen(arr + 0));//6
//	//printf("%zd\n", strlen(*arr));//'a' - 97 //err
//	//printf("%zd\n", strlen(arr[1]));//'b'-98//err
//	printf("%zd\n", strlen(&arr));//6
//	printf("%zd\n", strlen(&arr + 1));//随机n
//	printf("%zd\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", sizeof('a'));//int 4,.cpp-1
//	char c = 'a';
//	printf("%zd\n", sizeof(c));//char 1
//	printf("%zd\n", sizeof(+c));//int 4
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	
//	printf("%zd\n", sizeof(p));//char* - 4/8
//	printf("%zd\n", sizeof(p + 1));//char* - 4/8
//	printf("%zd\n", sizeof(*p));//char - 1
//	printf("%zd\n", sizeof(p[0]));//char - 1
//	printf("%zd\n", sizeof(&p));//char** - 4/8
//	printf("%zd\n", sizeof(&p + 1));//char** - 4/8
//	printf("%zd\n", sizeof(&p[0] + 1));//char* - 4/8
//
//	printf("%zd\n", strlen(p));//6
//	printf("%zd\n", strlen(p + 1));//5
//	//printf("%zd\n", strlen(*p));//'a'-97//err
//	//printf("%zd\n", strlen(p[0]));//'a'-97//err
//	printf("%zd\n", strlen(&p));//6
//	printf("%zd\n", strlen(&p + 1));//随机
//	printf("%zd\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}


//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//int [3][4] - 48
//	printf("%zd\n", sizeof(a[0][0]));//int - 4
//	printf("%zd\n", sizeof(a[0]));//int[4] - 16
//	printf("%zd\n", sizeof(a[0] + 1));//int* - 4/8
//	printf("%zd\n", sizeof(*(a[0] + 1)));//int - 4
//	printf("%zd\n", sizeof(a + 1));//int(*)[4] - 4/8
//	printf("%zd\n", sizeof(*(a + 1)));//int[4] - 16
//	printf("%zd\n", sizeof(&a[0] + 1));//int(*)[4] - 4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//int[4] - 16
//	printf("%zd\n", sizeof(*a));//int[4] - 16
//	printf("%zd\n", sizeof(a[3]));//int[4] - 16
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5
//	return 0;
//}


//由于还没学习结构体，这里告知结构体的大小是20个字节(x86)
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p);//0x100000
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//0x 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//0x 00 00 00 02(小端)
//	//0x 02 00 00 00(实际数值)
//	printf("%x,%x", ptr1[-1], *ptr2);//0x4 0x2000000
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//1 3
//	//5 0
//	//0 0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//a[0][0] - 1
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//int类型元素个数
//	//4*4+2 - 4*5+2 = -4 
//	//%p - 0xff ff ff fc -- -4 %d: -4
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
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//cpp -> &(c+2) PONIT
//	printf("%s\n", *-- * ++cpp + 3);//cpp -> &(c+1),c+1 -> c, ER
//	printf("%s\n", *cpp[-2] + 3);//cpp -> &(c+3), ST 
//	printf("%s\n", cpp[-1][-1] + 1);//cpp -> &(c+2), c+2-1 = c+1, EW
//	return 0;
//}

