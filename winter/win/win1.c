#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);//2 * 2 * 2 * 2
//    return 0;
//}

//n �� k �η����ݹ飩

//double pow(int n, int k)
//{
//	double ret = 1;
//	if (k > 0)
//	{
//		while (k--)
//		{
//			ret *= n;
//		}
//	}
//	else if (k < 0)
//	{
//		k = -k;
//		while (k--)
//		{
//			ret *= n;
//		}
//		ret = 1.0 / ret;
//	}
//	return ret;
//}


//double pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1.0;
//	}
//	else 
//	{
//		//return 1.0 / (n * pow(n, -k - 1));
//		return 1.0 / pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%f\n", pow(n, k));
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum1(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//
//int DigitSum2(int n)
//{
//	if (n / 10)
//	{
//		return n % 10 + DigitSum2(n / 10);
//	}
//	//return n % 10;
//	return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum1(n));
//	printf("%d\n", DigitSum2(n));
//	return 0;
//}


//reverse_string(char * string)
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
//void reverse_string1(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//
//		left++;
//		right--;
//	}
//}
//void reverse_string2(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	if (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = '\0';
//		reverse_string2(str + 1);
//		str[right] = temp;
//	}
//}
//void reverse_string3(char* str)
//{
//	int len = my_strlen(str);
//
//	if (len >= 2)
//	{
//		char temp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//		reverse_string3(str + 1);
//		*(str + len - 1) = temp;
//	}
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	//char* ch = "abcdef";//����
//	printf("%s\n", ch);
//
//	reverse_string1(ch);
//	printf("%s\n", ch);
//	reverse_string2(ch);
//	printf("%s\n", ch);
//	reverse_string3(ch);
//	printf("%s\n", ch);
//
//	return 0;
//}


//int main()
//{
//	int arr1[5 + 6] = { 0 };
//	int arr2[9] = { 0 };
//	int n = 9;
//	//int arr3[n];//�䳤���飬���ܳ�ʼ��
//	//��ȫ��ʼ��
//	//����ȫ��ʼ����Ĭ��Ϊ0
//	//��ָ��Ԫ�ظ��������ݳ�ʼ����Ԫ�صĸ�����ȷ��
//	char str[] = { 'a', 'b' };
//	char str2[] = "ab";
//	printf("%s\n", str);
//	printf("%s\n", str2);
//	return 0;
//}


//1.���������±��
//2.[]�±���ʲ�����

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  %d\n", arr[i], *(p + i));
//		printf("%p  %p\n", &arr[i], p + i);
//	}
//	putchar('\n');
//	//for (i = sz - 1; i >= 0; i--)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//putchar('\n');
//	return 0;
//}


//int main()
//{
//	int arr[][2] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//int sz = sizeof(arr) / sizeof(arr[0][0]);
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(arr[0] + i));
//	//}
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
//		{
//			printf("%d %p \n", arr[i][j], &arr[i][j]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i <= 10; i++)
//	{
//		//arr[i] = i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//ð������
//void bubble_sort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
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
//	int arr[] = { 2, 4, 9, 7, 1, 0, -8, -99, 100 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����������Ԫ�صĵ�ַ�������������⣨sizeof(������)��&��������
//��������������������������������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	printf("%d\n", (int)sizeof(arr));
//	return 0;
//}


//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };//���ű��ʽ��4�����ͣ�
//    printf("%d\n", (int)sizeof(arr));//16
//    return 0;
//}

//#include <string.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%zd %zd\n", sizeof(str), strlen(str));//10 9
//    return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	putchar('\n');
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	putchar('\n');
//
//	return 0;
//}


//void print(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void init(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int* arr, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 4, 6, 8, 99, 5, 1 , 5, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	printf("%zd\n", sizeof(int [5]));
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(n));
//	return 0;
//}


//ԭ�� ���� ���루������洢�ģ�
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010 ԭ��/����/����
//	int b = -10;
//	//10000000000000000000000000001010 ԭ��
//	//11111111111111111111111111110101 ����
//	//11111111111111111111111111110110 ����
//	return 0;
//}


//����
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	//00000000000000000000000000010100 //20 ����һλ���൱��*2��
//	int b = a << 1;
//	printf("%d\n", b);
//	int c = -10;
//	//11111111111111111111111111110110
//	//11111111111111111111111111101100 (����)
//	//11111111111111111111111111101011
//	//10000000000000000000000000010100 (ԭ��)//-20
//	printf("%d\n", c << 1);
//	return 0;
//}


//����
//1.��������(���ƣ�������λ)
//2.�߼�����
//int main()
//{
//	int a = -1;
//	//11111111111111111111111111111111
//	printf("%d\n", a >> 1);
//	return 0;
//}


//������λ���������Ҫ�ƶ�����λ��Ҳ��Ӧ��̫����λ�������Ĳ�����ֻ����������

//& | ^
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	printf("%d\n", a & b);
//	//00000000000000000000000000000011//3
//	printf("%d\n", a | b);
//	//11111111111111111111111111111011//-5
//	printf("%d\n", a ^ b);
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000//-8
//	return 0;
//}


//������������,(��������ʱ����)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//a += b;
//	//b = a - b;
//	//a -= b;
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("%d %d", a, b);
//	return 0;
//}


//int main()
//{
//	unsigned int num = -10;
//	printf("%d\n", num);
//	printf("%u\n", num);
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	short s = 5;
//	printf("%zd\n", sizeof(s = a + 3));
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);
//
//	int a = 9;
//	//00000000000000000000000000001001
//	//00000000000000000000000000011001//16+9
//	//a |= (1 << 4);
//	a ^= (1 << 4);
//	printf("%d\n", a);
//	//�Ļ�ȥ
//	//a &= ~(1 << 4);
//	a ^= (1 << 4);
//	printf("%d\n", a);
//
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));//8/4
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));//8/4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));//40
//	printf("%zd\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a:1 b:2 c:3 d:4
//	//i = a++ || ++b || d++;// a:1 b:3 c:3 d:4
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//13
//	printf("c=%d\n", c);
//	return 0;
//}

//void test(int a)
//{
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = 10;
//	//test(a++);
//	//test(a);
//	test(++a);
//	
//	return 0;
//}


//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));//ǿ������ת��
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	//int a = 10;
//	//int b = 15;
//	//printf("%d\n", a > b ? a : b);
//
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", arr[3]);//[] ����������
//
//	int len = strlen("abcd");//strlen "abcd" ��()��������������
//	//()�Ĳ������Ǻ�������ʵ�ʲ�������������Ϊ�㣬()�Ĳ���������ֻ��һ��
//
//	return 0;
//}


//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pStu)
//{
//	pStu->age = 18;//�ṹ��Ա����
//}
//int main()
//{
//	struct Stu stu;
//	struct Stu* pStu = &stu;//�ṹ��Ա����
//	stu.age = 20;//�ṹ��Ա����
//	set_age1(stu);
//	printf("%d\n", stu.age);
//	pStu->age = 20;//�ṹ��Ա����
//	set_age2(pStu);
//	printf("%d\n", stu.age);
//
//	return 0;
//}


//���������ǰ��ձ������������͵ķ���λ��������
//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//char a�ض�
//	//00000011
//	
//	char b = 127;
//	//01111111
//	char c = a + b;
//	//a + b
//	//a��b����������
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//	//char c�ض�
//	//10000010 
//	//11111101
//	//11111110 -126
//
//	printf("%d\n", c);
//	//%dʮ���Ƶ�����
//	//11111111 11111111 11111111 10000010 ����
//	return 0;
//}

//char�з������� -128 ~ 127
//10000000 -128 �涨
//char�޷������� 0 ~ 255


//int main()
//{
//	char a = 0xb6;//0x10110110(����)
//	short a1 = 0xb600;
//	int a2= 0xb6000000;
//	if (a == 0xb6)//0xb6������a�Ǹ����������������Ǹ���
//		printf("a");
//	if (a1 == 0xb600)
//		printf("a1");
//	if (a2 == 0xb6000000)
//		printf("a2");
//	return 0;
//}


//ֻҪ������ʽ����,�ͻᷢ����������,���ʽ +c ,�ͻᷢ������
//int main()
//{
//	char c = 1;
//	printf("%llu\n", sizeof(c));//1
//	printf("%zd\n", sizeof(+c));//4
//	printf("%zd\n", sizeof(-c));//4
//	return 0;
//}


//�Ƿ����ʽ������ȷ�����
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
//	printf("%d\n", answer);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}