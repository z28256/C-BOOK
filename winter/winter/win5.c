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


//test(void) ��֤�޲���
//void test(void)
//{
//	printf("Hello\n");
//}
//int main()
//{
//	test();
//	return 0;
//}


//����������ʱ��ʵ�δ��ݸ��βΣ���ʱ�β���ʵ�ε�һ����ʱ����
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


//100-200֮�������
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


//�ж�����
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


//���������ֲ���
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
//	//return 0;//�±������0
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
//		printf("�±���%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ�\n");
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


//�����ķ������Ͳ�д��ʱ��Ĭ��Ϊint����
//test(void)
//{
//	printf("hello\n");
//}
//int main()
//{
//	int ret = test();//testû��return�����ص������һ������ֵ��
//	printf("%d\n", ret);
//	return 0;
//}


//��ʽ����
//int main()
//{
//	printf("%d\n", (int)strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d\n", 43)));
//	return 0;
//}


//�����Ķ���Ҳ��һ�����������

//int a;//ȫ�ֱ�������ʼ����Ĭ��Ϊ0
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
//a = 88;


//�ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();//Stack overflow ջ���
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
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


//����ָ��+1������һ�����ͣ�����4���ֽ�
//ģ��ʵ��strlen()

//�ݹ飨��������ʱ������
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


//��n�Ľ׳�
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


//��n��쳲�������

//int count = 0;//ͳ�Ƶڶ���쳲����������ֵĴ���
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


//����Ļ�����9*9�˷��ھ���
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


//�� n �����������ֵ
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


//1/1 - 1/2 + 1/3 - 1/4 + 1/5 ���� + 1/99 - 1/100��ֵ
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


//1�� 100 �����������г��ֶ��ٸ�����9
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
//	int sum = (1 + n) * n / 2;//�Ȳ��������
//	printf("%d\n", sum);
//	return 0;
//}


//��̬������Ĭ��Ϊ0
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

//whileѭ�� �������ʽ��ִ�д������Ǳ�ѭ�����ִ�д�����һ��
//��ѭ���ڲ���break,continue,return goto..��

//�������Ӧ��׷����ھ۵���ϣ���ģ��֮�������
