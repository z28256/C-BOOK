#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a; //a : 6, c : 6
//	//������������ȼ���'='��
//	//�Ƚ���b = ++c   b: 7, c: 7;
//	//c++, ++a, a++;  c: 8, a: 8
//	b = ++c, c++, ++a, a++;
//	//'+='�����ȼ���'+'��
//	//a++ + c : 16, a : 9
//	b += a++ + c; //b = 16 + 7 = 23
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//ͳ�ƶ��������ж��ٸ�1
//#include <stdio.h>
//int NumberOf1(int);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int NumberOf1(unsigned int n)  //unsigned int
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
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1)
//		{
//			count++;
//		}
//	}
//
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


//��ȡһ�����������������е���������λ��ż��ά������ӡ
//#include <stdio.h>
//void print(int n);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//void print(int n)
//{
//	int i = 0;
//	printf("����λ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	printf("\n");
//
//	printf("ż��λ��");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	printf("\n");
//
//}


//�ж�n�ǲ���2��k�η�
//2��k�η�:����������ֻ��һ��1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (!(n & (n - 1)))
//	{
//		printf("Right!\n");
//	}
//	return 0;
//}


//����int ������ �ж��ٸ�λ(bit)��ͬ
//#include <stdio.h>
//int count_diff_one(int m, int n);
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int ret = count_diff_one(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//
////int count_diff_one(int m, int n)
////{
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((m >> i) & 1) != ((n >> i) & 1))
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int count_diff_one(int m, int n)
//{
//	int count = 0;
//	int temp = m ^ n;
//	//ͳ��temp�Ķ��������м���1
//	while (temp)
//	{
//		temp &= (temp - 1);
//		count++;
//	}
//	return count;
//}


//������̨��
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//����·ݵ�����
//#include <stdio.h>
//int days_of_month(int y, int m);
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int ret = days_of_month(y, m);
//		printf("%d\n", ret);
//
//	}
//	return 0;
//}
//int days_of_month(int y, int m)
//{
//	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (m == 2 && (!(y % 4) && (y % 100) || !(y % 400)))
//	{
//		arr[1]++;
//	}
//	return arr[m - 1];
//}


//#include <stdio.h>
//int i;//ȫ�ֱ�����Ĭ��Ϊ0
//int main()
//{
//	i--;//-1
//	//sizeof����size_t : unsigned int 
//	if (i > sizeof(i))//��������ת����i ת��Ϊunsigned int ����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &tmp);
//		if (tmp > 0)
//		{
//			sum += tmp;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//������
//#include <stdio.h>
//void Print(int n);
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//void Print(int n)
//{
//	if (n / 6)
//	{
//		Print(n / 6);
//	}
//	printf("%d", n % 6);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[20] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[n][m];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[j][i]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);
//	//int arr[n];
//	int n = 5;
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	if (del != arr[i])
//	//	{
//	//		printf("%d ", arr[i]);
//	//	}
//	//}
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (del != arr[i])
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}