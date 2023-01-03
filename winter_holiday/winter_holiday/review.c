#define _CRT_SECURE_NO_WARNINGS 1
//初始C语言
//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}


//局部变量与全局变量同名时，局部优先
//#include <stdio.h>
//
//int global = 2222;
//int main()
//{
//	int local = 1111;
//	int global = 1122;
//
//	printf("global = %d\n", global);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't' , '\0' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("\130 X\n");
//	printf("\x30 0\n");
//	printf("\'\n");
//	printf("\"\n");
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%zd\n", strlen("abcdef"));
//	printf("%zd\n", strlen("c:\test\628\test.c"));
//
//	return 0;
//}


//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", Add(1, 2));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("Enter 1 or 0\n");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("%d\n", line);
//	}
//	if (line > 20000)
//	{
//		printf("ok\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i ++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//typedef unsigned int uint_32;
//int main()
//{
//	unsigned int n1 = 0;
//	uint_32 n2 = 0;
//	return 0;
//}


//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	static int n = 0;
//	n++;
//	printf("%d ", n);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}


//#include <stdio.h>
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//#define MAX 1000
//#define ADD(x, y) ( (x) + (y) )
//#include <stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	//printf("%p\n", &num);
//
//	int* p = &num;
//	*p = 20;
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}


//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[15];
//};
//int main()
//{
//	struct Stu s = { "Tom", 20, "Male", "222" };
//	printf("name = %s age = %d sex = %s id = %s\n",
//		s.name, s.age, s.sex, s.id);
//	struct Stu* p = &s;
//	printf("name = %s age = %d sex = %s id = %s\n",
//		p->name, p->age, p->sex, p->id);
//	return 0;
//}


//else与离它最近的if匹配
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//判断一个数是否是奇数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//
//	}
//	return 0;
//}


//输出1-100之间的奇数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		break;
//	}
//	//switch (day)
//	//{
//	//case 1:
//	//	printf("1");
//	//	break;
//	//case 2:
//	//	printf("2");
//	//	break;
//	//case 3:
//	//	printf("3");
//	//	break;
//	//case 4:
//	//	printf("4");
//	//	break;
//	//case 5:
//	//	printf("5");
//	//	break;
//	//case 6:
//	//	printf("6");
//	//	break;
//	//case 7:
//	//	printf("7");
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//i++;
//		//if (5 == i)
//		//{
//		//	//break;
//		//	continue;
//		//}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			//break;
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d\n", k);
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to China";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(100);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("Input: ");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//		{
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	else
//	{
//		printf("log in\n");
//	}
//	return 0;
//}


//折半查找
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 10;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//	return 0;
//}


//二分查找函数
//#include <stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 11;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("%d\n", bin_search(arr, left, right, key));
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在一分钟内关机，输入12345可取消关机\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "12345"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("Enter 12345: ");
//		scanf("%s", input);
//		if (!(strcmp(input, "12345")))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


