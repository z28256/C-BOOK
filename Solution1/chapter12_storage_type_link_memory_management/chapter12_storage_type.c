#define _CRT_SECURE_NO_WARNINGS 1
//12.1 hiding.c  ���еı���
//#include <stdio.h>
//int main()
//{
//	int x = 30;
//	printf("x in outer block: %d at %p\n", x, &x);
//	{
//		int x = 77;
//		printf("x in inner block: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	while (x++ < 33)
//	{
//		int x = 100;
//		x++;
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	return 0;
//}


//12.2  forc99.c  �µ�C99�����
//#include <stdio.h>
//int main()
//{
//	int n = 8;
//	printf("Initially, n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//	{
//		printf("      loop 1: n = %d at %p\n", n, &n);
//	}
//	printf("After loop 1: n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//	{
//		printf("loop 2 index n = %d at %p\n", n, &n);
//		int n = 6;
//		printf("     loop 2: n = %d at %p\n", n, &n);
//		n++;
//	}
//	printf("After loop 2, n = %d at %p\n", n, &n);
//	return 0;
//}


//12.3 loc_stat.c  ʹ�þֲ���̬����
//���δ��ʽ��ʼ����̬���������ǻᱻ��ʼ��Ϊ0
//#include <stdio.h>
//void trystat();
//int main()
//{
//	int count = 0;
//	for (count = 1; count <= 3; count++)
//	{
//		printf("Here comes iteration %d:\n", count);
//		trystat();
//	}
//	return 0;
//}
//void trystat()
//{
//	int fade = 1;//���ں�����һ���֣�ÿ�ε��øú�������ִ����������
//	//static int stay = 1;
//	//��̬�������ⲿ�����ڳ��������ڴ�ʱ��ִ�����
//	static int stay;//���Ǹú�����һ����
//	printf("fade = %d and stay = %d\n", fade++, stay++);
//}

//�����ں������β���ʹ��static��
//int wontwork(static int flu);//������


//���δ��ʼ���ⲿ���������ǻᱻ�Զ���ʼ��Ϊ 0����һԭ��Ҳ������
//�ⲿ���������Ԫ�ء����Զ������������ͬ��ֻ��ʹ�ó������ʽ��ʼ��
//�ļ������������
//int x = 10;
//int y = 3 + 20;
//int z = sizeof(int);
//int x2 = 2 * x;//���У�x�Ǳ���


//12.4  global.c  ʹ���ⲿ����
//#include <stdio.h>
//int units = 0;
//void critic();
//int main()
//{
//	extern int units;//��д�ɲ�д
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//	{
//		critic();
//	}
//	printf("You must have looked it up!\n");
//	return 0;
//}
//void critic()
//{
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", &units);
//}

//����ʹ��static�ؼ��֣�����һ�㺯��������Ĭ��Ϊextern��

//12.14 dyn_arr.c  ��̬��������
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	double* ptd;
//	int max = 0;
//	int number = 0;
//	int i = 0;
//	puts("What is the maximun number of type double entries?");
//	if (scanf("%d", &max) != 1)
//	{
//		puts("Number not correctly entered -- bye.");
//		exit(EXIT_FAILURE);
//	}
//	ptd = (double*)malloc(max * sizeof(double));
//	if (ptd == NULL)
//	{
//		puts("Memory allocation failed. Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter the values (q to quit):");
//	while (i < max && scanf("%lf", &ptd[i]) == 1)
//	{
//		++i;
//	}
//	printf("Here are you %d entries: \n", number = i);
//	for (i = 0; i < number; i++)
//	{
//		printf("%7.2f ", ptd[i]);
//		if (i % 7 == 6)
//		{
//			putchar('\n');
//		}
//	}
//	if (i % 7 != 0)
//	{
//		putchar('\n');
//	}
//	puts("Done.");
//	free(ptd);
//
//	return 0;
//}


//��ά����
//#include <stdlib.h>
//int main()
//{
//	int n = 5;
//	int m = 6;
//	//int ar2[n][m];//n*m�ı䳤����
//	int(*p2)[6];
//	//int(*p3)[m];//Ҫ��֧�ֱ䳤����
//	p2 = (int(*)[6])malloc(n * 6 * sizeof(int));
//	//p3 = (int(*)[m])malloc(n * m * sizeof(int));//Ҫ��֧�ֱ䳤����
//
//	return 0;
//}


//12.15 where.c ���ݱ��洢�ںδ���
//#include <stdio.h> 
//#include <stdlib.h> 
//#include <string.h> 
//int static_store = 30;
//const char* pcg = "String Literal";
//int main()
//{
//	int auto_store = 40;
//	char auto_string[] = "Auto char Array";
//	int* pi;
//	char* pcl;
//	pi = (int*)malloc(sizeof(int));
//	*pi = 35;
//	pcl = (char*)malloc(strlen("Dynamic String") + 1);
//	strcpy(pcl, "Dynamic String");
//
//	printf("static_store: %d at %p\n", static_store, &static_store);
//	printf("auto_store: %d at %p\n", auto_store, &auto_store);
//	printf("*pi: %d at %p\n", *pi, pi);
//	printf("%s at %p\n", pcg, pcg);
//	printf("%s at %p\n", auto_string, auto_string);
//	printf("%s at %p\n", pcl, pcl);
//	printf("%s at %p\n", "Quoted String", "Quoted String");
//	free(pi);
//	free(pcl);
//	return 0;
//}


//file1.c  ������һЩ�ⲿconst����
//const double PI = 3.14159;
//const char* MONTHS[12] =
//{
//	"January", "February", "March", "April",
//	"May", "June", "July", "August",
//	"September", "October", "November", "December",
//};

//file2.c ʹ�ö����ڱ𴦵��ⲿconst����
//extern const double PI;
//extern const* MONTHS[];


//constant.h ������һЩ�ⲿconst����
//������ͷ�ļ���ʹ��static����ȫ��const����
//static const double PI = 3.14159;
//const char* MONTHS[12] =
//{
//	"January", "February", "March", "April",
//	"May", "June", "July", "August",
//	"September", "October", "November", "December",
//};


//file1.c ʹ�ö����ڱ𴦵��ⲿconst����
//#include "constant.h"

//file1.c ʹ�ö����ڱ𴦵��ⲿconst����
//#include "constant.h"


//�����ϰ
//1.��ʹ��ȫ�ֱ�������д12.4
//#include <stdio.h>
//int critic(void);
//int main()
//{
//	int units;
//	printf("How many pounds to a firkin of butter?\n");
//	scanf("%d", &units);
//	while (units != 56)
//	{
//		units = critic();
//	}
//	printf("You must have looked it up!\n");
//	return 0;
//}
//int critic()
//{
//	int units;
//	printf("No luck, my friend. Try again.\n");
//	scanf("%d", &units);
//	return units;
//}


//4.��һ��ѭ���б�д������һ���������ú��������������õĴ���
//#include <stdio.h>
//#define TIMES 20
//void called_count(void);
//static int count = 0;
//int main()
//{
//	int i = 0;
//	for (i = 0; i < TIMES; i++)
//	{
//		called_count();
//	}
//	printf("%d\n", count);
//	return 0;
//}
//void called_count(void)
//{
//	count++;
//}

//5.100��0-100���������������
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void sort(int* arr, int n);
//int main()
//{
//	int i = 0;
//	int arr[100] = { 0 };
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//	sort(arr, 100);
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void sort(int* arr, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}

//void sort(int* arr, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}


//6.1000��1��10�����������ӡ��Ӧ������10 ����ͬ������ֵ����
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 1000
//#define SIZE_N 10
//#define SIZE_S 10
//int main()
//{
//	int i, j;
//	//int count[SIZE_N];
//
//	unsigned int seed[SIZE_S] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (j = 0; j < SIZE_S; j++)
//	{
//		//for (i = 0; i < SIZE_N; i++)
//		//{
//		//	count[i] = 0;
//		//}
//
//		int count[SIZE_N] = { 0 };
//
//		srand(seed[j]);
//		printf("seed = %d: \n", seed[j]);
//		for (i = 0; i < SIZE; i++)
//		{
//			count[rand() % 10]++;
//		}
//		for (i = 0; i < SIZE_N; i++)
//		{
//			printf("%d:%-5d ", i + 1, count[i]);
//			if (i == 4)
//			{
//				printf("\n");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		srand((unsigned int)time(NULL));
//		int k = 0;
//		int n = 0;
//		int arr[10] = { 0 };
//		for (k = 0; k < 1000; k++)
//		{
//			n = rand() % 10 + 1;
//			arr[n - 1]++;
//		}
//		for (k = 0; k < 10; k++)
//		{
//			printf("%d: %d  ",k + 1, arr[k]);
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}


//7.�ı�12.13
//#include <stdio.h>
// 
//#include <stdlib.h>
//#include <time.h>
//void sum_dice(int, int);
//int main()
//{
//	int set = 0;
//	int side = 0;
//	int dice = 0;
//	srand((unsigned int)time(NULL));
//
//	printf("Enter the number of sets; enter q to stop: ");
//	while (scanf("%d", &set) == 1)
//	{
//		printf("How many sides and how many dice? ");
//		scanf("%d %d", &side, &dice);
//		printf("Here are %d sets of %d %d-sides throws.\n",
//			set, dice, side);
//
//		int i = 0;
//		for (i = 0; i < set; i++)
//		{
//			sum_dice(side, dice);
//		}
//		printf("\n");
//		printf("How many sets? Enter q to stop: ");
//	}
//	return 0;
//}
//void sum_dice(int side, int dice)
//{
//	int sum = 0;
//	int i = 0;
//	if (side < 2)
//	{
//		printf("Need at least 2 sides.\n");
//		return;
//	}
//	if (dice < 1)
//	{
//		printf("Need at least 1 dice.\n");
//		return;
//	}
//
//	for (i = 0; i < dice; i++)
//	{
//		sum += rand() % side + 1;
//	}
//	printf("%d ", sum);
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void roll_count(int, int, int);
//int main()
//{
//	int sets = 0;
//	int sides = 0;
//	int dices = 0;
//
//	srand((unsigned int)time(NULL));
//	printf("Enter the number of sets; enter q to stop: ");
//	while (scanf("%d", &sets) == 1)
//	{
//		printf("How many sides and how many dice? ");
//		scanf("%d%d", &sides, &dices);
//		printf("Here are %d sets of %d %d-sides throws.\n",
//			sets, dices, sides);
//		roll_count(sets, sides, dices);
//		printf("How many sets? Enter q to stop: ");
//	}
//	return 0;
//}
//
//void roll_count(int sets, int sides, int dices)
//{
//	int i = 0;
//	int j = 0;
//	int roll = 0;
//
//	if (sides < 2)
//	{
//		printf("Need at least 2 sides.\n");
//		return;
//	}
//	if (dices < 1)
//	{
//		printf("Need at least 1 dice.\n");
//		return;
//	}
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < sets; i++)
//	{
//		roll = 0;
//		for (j = 0; j < dices; j++)
//		{
//			roll += rand() % sides + 1;
//		}
//		printf("%d ", roll);
//	}
//	printf("\n");
//}


//8.pe12-8.c
//#include <stdio.h>
//#include <stdlib.h>
//int* make_array(int elem, int val);
//void show_array(const int ar[], int n);
//int main()
//{
//	int* pa;
//	int size = 0;
//	int value = 0;
//	printf("Enter the number of element: ");
//	while (scanf("%d", &size) == 1 && size > 0)
//	{
//		printf("Enter the initialization value: ");
//		scanf("%d", &value);
//		pa = make_array(size, value);
//		if (pa)
//		{
//			show_array(pa, size);
//			free(pa);
//		}
//		printf("Enter the number of elements (<1 to quit): ");
//	}
//	printf("Done.\n");
//	return 0;
//}
//
//int* make_array(int elem, int val)
//{
//	int* pi = (int*)malloc(elem * sizeof(int));
//	int i = 0;
//	for (i = 0; i < elem; i++)
//	{
//		//*(pi + i) = val;
//		pi[i] = val;
//	}
//	return pi;
//}
//
//void show_array(const int ar[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(ar + i));
//		if (i % 8 == 7)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//}


//9.ѯ�����뵥�����������յ��ʲ���ʾ��ʹ��malloc()��Ҫ������ٸ����ʣ�
//����һ����̬���飬�������ں���Ӧ��ָ��char��ָ��

//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#define SIZE 40
//char** mal_ar(int n);
//int main()
//{
//	int words = 0;
//	int i = 0;
//	char** st;
//
//	printf("How many words do you wish to enter? ");
//	scanf("%d", &words);
//	getchar();
//
//	printf("Enter %d words now: \n", words);
//	st = mal_ar(words);
//
//	printf("Here are your words: \n");
//	for (i = 0; i < words; i++)
//	{
//		puts(st[i]);
//		free(st[i]);
//	}
//	free(st);
//
//	return 0;
//}
//char** mal_ar(int n)
//{
//	char** pt;
//	int i = 0;
//	int j = 0;
//	char ch = 0;
//
//	pt = (char**)malloc(n * sizeof(char*));
//	for (i = 0; i < n; i++)
//	{
//		pt[i] = (char*)malloc(SIZE * sizeof(char));
//
//		scanf("%s", pt[i]);
//
//		//while (isspace(ch = getchar()))
//		//{
//		//	continue;
//		//}
//		//pt[i][0] = ch;
//		//j = 1;
//		//while (!isspace(pt[i][j] = getchar()))
//		//{
//		//	j++;
//		//}
//		//pt[i][j] = '\0';
//	}
//	return pt;
//
//}