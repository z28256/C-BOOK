#define _CRT_SECURE_NO_WARNINGS 1
//parta.c  ��ͬ�Ĵ洢���
//��partb.c  һ�����
//#include <stdio.h>
//void report_count();
//void accumulate(int k);
//
//int count = 0;//�ļ��������ⲿ����
//
//int main()
//{
//	int value = 0;//�Զ�����
//	register int i = 0;//�Ĵ�������
//	printf("Enter a positive integer (0 to quit): ");
//	while (scanf("%d", &value) == 1 && value > 0)
//	{
//		++count;//ʹ���ļ����������
//		for (i = value; i >= 0; i--)
//		{
//			accumulate(i);
//		}
//		printf("Enter a positive integer (0 to quit): ");
//	}
//	report_count();
//	return 0;
//}
//void report_count()
//{
//	printf("Loop executed %d times\n", count);
//}


//12.8 r_drive0.c��������  ����rand0����
//��rand0.cһ�����
//#include <stdio.h>
//extern unsigned int rand0(void);
//int main()
//{
//	int count = 0;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", rand0());
//	}
//	return 0;
//}


//12.10 r_drive1.c��������  ����rand1()��srand()
//��s_and_r.cһ�����
//#include <stdio.h>
//extern void srand1(unsigned int x);
//extern int rand1(void);
//int main()
//{
//	int count = 0;
//	unsigned seed = 0;
//	printf("Please enter your choice for seed.\n");
//	while (scanf("%u", &seed) == 1)
//	{
//		srand1(seed);//��������
//		for (count = 0; count < 5; count++)
//		{
//			printf("%d\n", rand1());
//		}
//		printf("Please enter next seed (q to quit):\n");
//	}
//	printf("Done\n");
//	return 0;
//}