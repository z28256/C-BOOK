#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//������ 0 - 100000  153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3
#include <stdbool.h>
#include <math.h>
//int number_of_bits(int n)
//{
//	int count = 1;
//	while (n / 10)
//	{
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//bool is_narcissistic_number(int n)
//{
//	int sum = 0;
//	int temp = n;
//	if (n < 10)
//		return true;
//	while (n)
//	{
//		sum += (int)pow(n % 10, number_of_bits(n));
//		n /= 10;
//	}
//	return sum == temp;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (is_narcissistic_number(i))
//			printf("%d ", i);
//	}
//	return 0;
//}


//�� Sn = a + aa + aaa + aaaa + aaaaa ��ǰ 5 ��֮�ͣ����� a ��һ������
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int k = 0;
//	int n = 0;
//	scanf("%d%d", &n, &a);
//	while (n--)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//Debug ���԰汾
//Release �����汾
//Linux gcc-������  gdb-������
//���ö�ջ  ջ������ֻ�ܴ�ջ����/��  ���У��Ŷ�/�����ǰ���

//F9 �ϵ㣨���ļ���ת�� �Ҽ�������ѡ��ڼ���ѭ��ͣ�£������ѡ��ÿ�ζ���ͣ��

//x86 Debug ��������ѭ��
//�ֲ������Ǵ�����ڴ��е�ջ���ģ��ֲ�������ʹ��ϰ����
//��ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//i �� arr ����֮��ǡ������������
//gcc�� i �� arr ����֮���� 1 ������
//vc6.0: i �� arr ֮��û�пռ�
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("%d\n", i);
//		arr[i] = 0;
//	}
//	return 0;
//}


#include <assert.h>
//���� assert�п��Էű��ʽ�����ʽ���Ϊ�٣�����
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//char str[20] = { 0 };
//	char str[20] = "xxxxxxxxxx";
//	char* p = "hello";
//	printf("%s\n", my_strcpy(str, p));
//	return 0;
//}



//1. const����*����ߣ�const���ε���ָ��ָ�������
//2. const����*���ұ�, const���ε�ָ���������
//int main()
//{
//	int n1 = 10;
//	int n2 = 20;
//	const int* p1 = &n1;//�ȼ���int const* p1 = &n1;
//	//*p1 = 20;//err
//	p1 = &n2;
//
//	int* const p2 = &n2;
//	*p2 = 10;
//	//p2 = &n1;//err
//
//	return 0;
//}



//strlen���������� strcat.c
//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - start - 1;
//}
//int main()
//{
//	char* p = "hello";
//	printf("%d\n", my_strlen(p));
//	return 0;
//}


//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);//���wang
//    return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	printf("%d\n", money * 2 - 1);
//	return 0;
//}


//�����Ǿ���
//int main()
//{
//	int arr[3][3];
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j && arr[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//int main()
//{
//	int arr1[2][3] = {1, 2, 3, 4, 5, 6};
//	int arr2[2][3] = {1, 2, 3, 4, 7, 6};
//	int flag = 1;
//	for (int i = 0; i < 2 * 3; i++)
//	{
//		if (arr1[0][i] != arr2[0][i])
//		//if (*(*arr1+i) != *(*arr2+i))
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//void move(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2)
//		{
//			left++;
//		}
//		while (left < right && !(arr[right] % 2))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�ϲ���������
//int main()
//{
//	int arr1[4] = { 1, 2, 6, 10 };
//	int arr2[3] = { 3, 5, 9 };
//	int arr3[7] = { 0 };
//	int n1 = 0;
//	int n2 = 0;
//	int i = 0;
//	while (n1 < 4 && n2 < 3)
//	{
//		if (arr1[n1] < arr2[n2])
//		{
//			arr3[i++] = arr1[n1++];
//		}
//		else
//		{
//			arr3[i++] = arr2[n2++];
//		}
//	}
//	if (4 == n1)
//	{
//		while (n2 < 3)
//		{
//			arr3[i++] = arr2[n2++];
//		}
//	}
//	else
//	{
//		while (n1 < 4)
//		{
//			arr3[i++] = arr1[n1++];
//		}
//	}
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d\n", arr3[i]);
//	}
//	return 0;
//}


//����sorted
//����unsorted
//int main()
//{
//	int arr[6] = { 1, 2, 3, 3, 2, 1 };
//	int flag1 = 0;
//	int flag2 = 0;
//	for (int i = 1; i < 6; i++)
//	{
//		if (arr[i] > arr[i - 1])
//		{
//			flag1 = 1;
//		}
//		else if (arr[i] < arr[i - 1])
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 == 2)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
//		printf("sorted\n");
//	}
//	return 0;
//}