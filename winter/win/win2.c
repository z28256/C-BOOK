#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//6
//	b = ++c, c++, ++a, a++;//b = 7, a = 8, c = 8
//	b += a++ + c;//b = 7 + 8 + 8 = 23, a = 9
//	printf("a = %d b = %d c = %d\n", a, b, c);//9 23 8
//	return 0;
//}


//int NumberOf1(int n)//��������
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int NumberOf1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		//if ((n >> i) & 1)
//		if ((1 << i) & n)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�ж�2��k�η�
#include <stdbool.h>
//bool is_pow_2(int n)
//{
//	//if (!(n & (n - 1)))
//	//{
//	//	return true;
//	//}
//	//return false;
//
//	//return n & (n - 1) ? false : true;
//
//	return !(n & (n - 1));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (is_pow_2(n))
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//void Print(int n)
//{
//	printf("����λ: ");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", 1 & (n >> i));
//	}
//	printf("\nż��λ��");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", 1 & (n >> i));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

//int diff_count(int n, int m)
//{
//	int count = 0;
//	n ^= m;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	return count;
//}

//int diff_count(int n, int m)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) != ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int n1 = 0;
//	scanf("%d%d", &n, &n1);
//	printf("%d\n", diff_count(n, n1));
//	return 0;
//}


//Fib
//int Fib1(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//}
//int Fib2(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	int n1 = 1;
//	int n2 = 2;
//	int ret = 0;
//	while (n > 2)
//	{
//		ret = n1 + n2;
//		n1 = n2;
//		n2 = ret;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret2 = Fib2(n);
//	printf("%d\n", ret2);
//
//	int ret1= Fib1(n);
//	printf("%d\n", ret1);
//	return 0;
//}


//�����·ݵ�����
//int days_of_month(int y, int m)
//{
//	int days = 0;
//	switch (m)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		days = 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		days = 30;
//	case 2:
//		days = !(y % 4) && y % 100 || !(y % 400) ? 29 : 28;
//	}
//	return days;
//}

//int days_of_month(int y, int m)
//{
//	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	days[1] = (2 == m) && (!(y % 4) && y % 100 || !(y % 400)) ? 29 : 28;
//	return days[m - 1];
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d%d", &y, &m);
//	printf("%d\n", days_of_month(y, m));
//	return 0;
//}


//int i;//0
//int main()
//{
//    i--;//-1 11111111 11111111 11111111 11111111
//    if (i > sizeof(i))//����ת�� int -> size_t
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int temp = 0;
//	int sum = 0;
//	for (int i = 0; i < n * m; i++)
//	{
//		scanf("%d", &temp);
//		sum += temp > 0 ? temp : 0;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//6����
//void Print(int n)
//{
//	//if (n / 6)
//	//	Print(n / 6);
//	//printf("%d ", n % 6);
//
//	int i = 0;
//	int arr[10] = { 0 };
//
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	while (i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//���б任
//int main()
//{
//	int m = 2;
//	int n = 3;
//	int arr[2][3];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 4, 7, 9, 3, 4 };
//	int del = 4;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != del)
//		{
//			printf("%d ", arr[i]);
//			arr[j++] = arr[i];
//		}
//	}
//	putchar('\n');
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//ָ�������������ŵ�ַ�ģ���ַ��Ψһ��ʾһ���ڴ浥Ԫ(byte���ֽ�)��
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�

//ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩��
//ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ���

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*) & a;
//	*pc = 0;
//	printf("%x\n", a);
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 0;
//	return &a;
//}
//int main()
//{
//	int* p = test();//���ؾֲ���������ʱ�����ĵ�ַ
//	//printf("\n");
//	printf("%d\n", *p);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;
//	if (p != NULL)
//	{
//		;
//	}
//	return 0;
//}


//ͬһ����Ԫ�ص�ַ������õ����Ǹ�Ԫ�����͵ĸ���
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%lld %lld\n", &arr[9] - &arr[0], &ch[0] - &ch[4]);//9 -4 
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* temp = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - temp;
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("abcdef\n"));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		*(i + p) = i + 1;
//		printf("%d\n", i[p]);
//	}
//	return 0;
//}


//ָ������ģ���ά����
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	int b[] = { 3, 6, 9, 12 };
//	int c[] = { 5, 10, 15, 20 };
//	int* arr[] = { a, b, c };
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//}stu;
//
//int main()
//{
//	stu s1 = { "Tom", 20, "Female", 15.2 };
//	stu s2 = { "Jerry", 45, "Male", 11.0 };
//	printf("%s %d %s %.1f\n", s1.name, s1.age, s1.sex, s1.score);
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex, s2.score);
//	return 0;
//}


//struct S
//{
//	int a; 
//	char c;
//};
//
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//void Print1(struct P* sp)
//{
//	printf("%.1f %d %c %.1f", sp->d, sp->s.a, sp->s.c, sp->f);
//}
//
//int main()
//{
//	struct P p = { 5.5, {100, 'a'}, 3.1f };
//	Print1(&p);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	short* p = (short*)arr;
//	for (int i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);//0 0 3 4
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%lu %lu\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);//11223300
//    return 0;
//}


#include <string.h>
//void reverse(char* str)
//{
//	int left = 0;
//	int right = (int)strlen(str) - 1;
	//while (left < right)
	//{
	//	char temp = str[left];
	//	str[left] = str[right];
	//	str[right] = temp;
	//	left++;
	//	right--;
	//}
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
//
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//gets(arr);
//	scanf("%[^\n]", arr);
//	//reverse(arr);
//	reverse(arr, arr + strlen(arr) - 1);
//	printf(arr);
//	return 0;
//}