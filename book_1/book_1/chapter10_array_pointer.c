#define _CRT_SECURE_NO_WARNINGS 1
//10.1 day_mon1.c  ��ӡÿ���µ�����
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


//10.2 no_data.c  δ��ʼ�����飬�洢��ֵδ֪
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int no_data[SIZE];		//δ��ʼ��������
//	int i = 0;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%2d%14d\n", i, no_data[i]);
//	}
//	return 0;
//}


//10.3  somedata.c  ���ֳ�ʼ������, ʣ���Ԫ�ر���ʼ��Ϊ0
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


//10.4 day_mon2.c  �ñ���������Ԫ�ظ���
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


//10.5  designate.c  ʹ��ָ����ʼ����
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


//������Ԫ�ظ�ֵ
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
//	yaks = oxen;	//������
//	yaks[SIZE] = oxen[SIZE];	//�����±�Խ�磬����±�ΪSIZE - 1;
//	yaks[SIZE] = { 5, 3, 2, 8 };//�������ã��±�Խ��
//	return 0;
//}


//10.6  bounds.c  �����±�Խ��
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


//��������
//int main(void)
//{
//	float a1[4];
//	float a2[4 * 5 + 6];
//	//sizeof���ʽ�����ͳ������ʽ����Ϊsizeof�������
//	float a3[sizeof(int) + 1];
//
//	float a4[-4];	//�����С�������0
//	float a5[0];	//�����С�������0
//	float a6[2.5];	//�����С����������
//
//	float a7[(int)2.5];//ǿ������ת��
//
//	int n = 5;
//	float a8[n];	//C99֮ǰ������ʹ�ñ䳤���飬������ʱ���ܳ�ʼ��
//
//	const int m = 8;
//	float a9[m];   //const���εı����������ͳ������ʽ
//	return 0;
//}


//10.7 rain.c  ����ÿ����ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ����ˮ��
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


//10.8 pnt_add.c  ָ���ַ
//��C�У�ָ���1ָ��������һ���洢��Ԫ��
//��������ԣ�����ζ�ŰѼ�1��ĵ�ַ����һ��Ԫ�صĵ�ַ����������һ���ֽڵĵ�ַ
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE];	//short: 2�ֽ�
//	short* pti = dates;
//	short index = 0;
//	double bills[SIZE];	//double: 8�ֽ�
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
//			*(days + index)); //��days[index]��ͬ
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


//10.10 sum_arr1.c  ����Ԫ��֮��
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
//	//sizeof(arr)��ָ������Ĵ�С ��8�ֽڣ���һ������ϵͳ�йأ�
//	printf("The size of arr is %zd bytes.\n", sizeof(arr));
//	return total;
//}


//10.11 sum_arr2.c  ����Ԫ��֮��
//#include <stdio.h>
//#define SIZE 10
//int sump(int* start, int* end);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
//	//long answer = sump(marbles, marbles + SIZE - 1);	//��һ��
//	long answer = sump(marbles, marbles + SIZE);	//�ڶ��֣�ָ��Խ��
//	printf("The total number of marbles is %ld.\n", answer);
//}
//int sump(int* start, int* end)
//{
//	int total = 0;
//	//while (start <= end)		//��һ��
//	while (start < end)		//�ڶ���
//	{
//		//total += *start;
//		//start++;
//	
//		//* �� ++ �����ȼ���ͬ����������Ǵ��������Ƚ���start++,�ڽ���
//		//*start,����Ϊ�Ǻ�׺++�������Ƚ�ԭ�е�ֵ�ӵ�total�ϣ��ٵ���ָ��
//		total += *start++;
//	}
//	return total;
//}


//10.12 ָ�������е����ȼ�
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


//10.13 ptr_ops.c  ָ�����
//ָ����������ӣ�����ʹ�� + �������ָ����������ӣ���������ָ��
//��ӡ�����������������������ָ����ָ�����͵Ĵ�С�����ֽ�Ϊ��λ��
//��ˣ�Ȼ��ѽ�����ʼ��ַ��ӡ�
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


//���ݵ�ַ���޸�ԭֵ
//#include <stdio.h>
//void add_to(double ar[], int n, double value)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ar[i] += value;
//	}
//}
//��������Ԫ�غͣ�������룩
//double sum(double ar[], int n)
//{
//	int i = 0;
//	double total = 0;
//	for (i = 0; i < n; i++)
//	{
//		total += ar[i]++;	//���������ÿ��Ԫ�ص�ֵ
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


//const:ֻ��
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


//10.14 arf.c  ��������ĺ���
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


//const��ָ�벻�����ڸı�ֵ��������ָ���
//int main(void)
//{
//	double rates[5] = { 5.6, 5.1, 2.3, 1.1, 9.5 };
//	const double* pd = rates;
//	//*pd = 44.2; // ������
//	//pd[2] = 9.5; // ������
//	rates[0] = 999.5;//����
//
//	pd++;//������pdָ���
//
//	return 0;
//}


//��const���ݻ��const���ݵĵ�ַ��ʼ��Ϊָ��const��ָ���Ϊ�丳ֵ�ǺϷ���
//int main(void)
//{
//	double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	const double* pc = rates;	//��Ч
//	pc = locked;		//��Ч
//	pc = &rates[3];		//��Ч
//
//	//ֻ�ܰѷ�const���ݵĵ�ַ������ָͨ��
//	double rates1[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double locked1[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	double* pnc = rates1;	//��Ч
//	pnc = locked1;			//��Ч,const�����ݲ����޸ģ���������ָͨ�� VS:��ͬ�ġ�const���޶���
//	pnc = &rates1[3];		//��Ч
//
//	return 0;
//}


//������������ʼ��һ������ָ��𴦵�ָ�룬�ؼ���const��λ��
//int main(void)
//{
//	double rates[5] = { 88.39, 100.12, 59.45, 183.11, 340.5 };
//	double* const pc = rates;
//
//	pc = &rates[2];		//��������Ϊ��ָ�벻��ָ���
//	*pc = 92.99;		//�������rates[0]��ֵ
//
//	return 0;
//}


//�ڴ���ָ��ʱ������ʹ��const���Σ���ָ��Ȳ��ܸ�������ָ��ĵ�ַ��
//Ҳ�����޸�ָ���ַ�ϵ�ֵ��
//int main(void)
//{
//	double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	const double* const pc = rates;
//	pc = &rates[2];	//������
//	*pc = 66.33;	//������
//	return 0;
//}


//10.15 zippo1,c  zippo�������Ϣ
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


//[]�����ȼ�����*
//10.16  zippo2.c  ͨ��ָ���ȡzippo����Ϣ
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


//ָ��ļ�����
//��������ת���Ϳ��԰�int���͵�ֵ����double���͵ı���
//���������͵�ָ�벻��������
//int main()
//{
//	int n = 5;
//	double x;
//	int* pl = &n;
//	double* pd = &x;
//	x = n;
//	pd = pl;	//�ӡ�int* ������double* �������Ͳ�����
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
//	pt = &ar1[0][0];	//����ָ��int��ָ��
//	pt = &ar1[0];		//����ָ��int��ָ�� VS:��int *���롰int (*)[3]���ļ�Ӽ���ͬ
//	pt = ar1;			//��Ч VS:��int *���롰int (*)[3]���ļ�Ӽ���ͬ
//	pa = ar1;			//����ָ���ں�3��int����Ԫ�������ָ��
//	pa = ar2;			//��Ч VS:��int (*)[3]���͡�int (*)[2]��������±겻ͬ
//	p2 = &pt;			//both pointer-to-int*
//	*p2 = ar2[0];		//����ָ��int��ָ��
//	p2 = ar2;			//��Ч VS:int **���롰int (*)[2]���ļ�Ӽ���ͬ
//
//	return 0;
//}


//���ؽ�����
//int main()
//{
//	int x = 20;
//	const int y = 23;
//	int* p1 = &x;
//	const int* p2 = &y;
//	const int** pp2;
//	p1 = p2;	//����ȫ����constָ�븳����constָ�� VS:��ͬ�ġ�const���޶���
//	p2 = p1;	//��Ч���ѷ�constָ�븳��constָ��
//	pp2 = &p1;	//����ȫ��Ƕ��ָ�����͸�ֵ
//	return 0;
//}

//����������,����ȫ
//#include <stdio.h>
//int main()
//{
//	const int** pp2;//����ͨ��*pp2�޸�����ָ�������
//	int* p1;
//	const int n = 13;
//	pp2 = &p1;//���������⵼��const�޶���ʧЧ
//	*pp2 = &n;//��Ч�����߶�����Ϊconst�����ᵼ��p1ָ��n(*pp2�ѱ��޸�)
//	*p1 = 10;//��Ч���ı���n��ֵ
//	printf("%d\n", n);
//	return 0;
//}
//��׼�涨��ͨ����constָ�����const������δ�����

//int main()
//{
//	const int y;
//	const int* p2 = &y;
//	int* p1;
//	p1 = p2;// C++������C���棬VS:��ͬ�ġ�const���޶���
//	return 0;
//}


//10.17 array2.c  �����ά����ĺ���
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


//��������������ʾ��ת����ָ���ʾ��
//��ar[1]ת����ar+1,��������ar+1��ֵ��Ҫ֪��ar��ָ��Ķ����С
//int sum2(int ar[][], int rows);	//���������
// 
//int sum2(int ar[][4], int rows);	//��Ч����
//int sum2 (int ar[3][4], int rows);//��Ч����������3������
//��ʾarָ��һ���ں�4��int����ֵ�����飨һ��int����ռ4���ֽڣ�
//ar+1����˼�ǡ��õ�ַ����16�ֽڡ�
//�����2�������ǿյģ��������Ͳ�֪������ô����


//typedef int arr4[4];	//arr4��һ���ں�4��int������
//typedef arr4 arr3x4[3];	//arr3x4��һ���ں�3��arr4������
//int sum1(arr3x4 ar, int rows);
//int sum2(int ar[3][4], int rows);
//int sum3(int ar[][4], int rows);	//��׼��ʽ���������������ͬ


//����һ��ָ��Nά�����ָ��ʱ��ֻ��ʡ������߷������е�ֵ
//��һ�������ű�������һ��ָ�룬�������ķ�������������ָ����ָ�����ݶ��������
//int sum4d(int ar[][12][20][30], int rows);//������������ȼ�
//int sum4d(int (*ar)[12][20][30], int rows); //ar��һ��ָ��


//��ͨ C���鶼�Ǿ�̬�ڴ���䣬���ڱ���ʱȷ������Ĵ�С��
//���������С�ǳ��������Ա������ڱ���ʱ��֪���ˡ�


//#include <stdio.h>
//int main()
//{
//	int diva[2] = { 10, 20 };
//	(int[2])
//	{
//		10, 20
//	};
//	(int[]) //����ʡ�Դ�С
//	{
//		50, 20, 90
//	};
//	/*��Ϊ�����������������ģ����Բ����ȴ���Ȼ����ʹ������
//	�����ڴ�����ͬʱʹ������ʹ��ָ���¼��ַ����һ���÷�*/
//	int* pt1;
//	pt1 = (int[2])
//	{
//		10, 20
//	};
//	printf("*pt1 = %d, pt1[1] = %d\n", *pt1, pt1[1]);
//
//	int(*pt2)[4];	//����һ��ָ���ά�����ָ��
//	pt2 = (int[2][4])
//	{
//		{ 1, 2, 3, -9},
//		{4, 5, 6, -8},
//	};
//
//	return 0;
//}


//10.19 flc.c  ��Ȥ�ĳ���
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


//10.13 �����ϰ
//1.�޸�10.7��rain.c������ָ����м���
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


//2.��ʼ��һ��double���͵����飬������3������������
//��һ�ݿ����������ʾ���ĺ������ڶ��ݣ�ָ���ʾ����ָ������ĺ���
//ǰ���������Ĳ�����Ŀ����������Դ�������ʹ�������Ԫ�ظ���
//�����ݣ�Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ��
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


//3.����int���������е����ֵ
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


//4.����double���������е����ֵ���±�
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


//5.����double�������������ֵ����Сֵ�Ĳ�ֵ
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


//6.double�������鵹������
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


//7.��ʼ��һ��double���Ͷ�ά���飬ʹ�ñ����ϰ2��һ����������
//�����ݿ�������һ����ά����
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


//8.ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص�������
//��3����5��Ԫ�ؿ������ں�3��Ԫ�ص�������
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


//9.��ʼ��һ��double���͵�3x5��ά���飬ʹ��һ������䳤����ĺ������俽����
// ��һ����ά�����У��ٱ�дһ���Ա䳤����Ϊ�βεĺ�������ʾ��������
//���ܴ���NxM���飨��֧�ֱ䳤���飬ʹ��Nx5�����飩
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


//10. ���������������飬�����������е�Ԫ��֮�ʹ洢��������������
//��������3����������һ�������С
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


//11. ����һ��int����3x5��ά���鲢��ʼ������ӡ�����飬
// Ȼ��������ֵ�������ٴδ�ӡ
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


//12.��д10.7 rain.c ��main()�е���Ҫ���񶼸�Ϊ�ú��������
//10.7 rain.c  ����ÿ����ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ����ˮ��
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


//13.�û�����3������ÿ��5��double���͵�����
//a.���û���������ݴ洢��3x5��������
//b.����ÿ��5�����ݵ�ƽ��ֵ
//c.�����������ݵ�ƽ��ֵ
//d.�ҳ�15�����е����ֵ
//e.��ӡ���
//����b,����һά����ƽ��ֵ�ĺ�����ѭ��д�����,��������������������Ϊ����
//c �� d ����Ӧ�ѽ��������������
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
