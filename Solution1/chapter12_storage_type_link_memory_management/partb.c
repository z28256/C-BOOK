#define _CRT_SECURE_NO_WARNINGS 1
//partb.c ��������ಿ��
//��parta.cһ�����
//#include <stdio.h>
//extern int count;//����ʽ�������ⲿ����
//static int total = 0;//��̬�������ڲ�����
////void accumulate(int k);//����ԭ�ͣ���ѡ
//void accumulate(int k)//k���п�������������
//{
//	static int subtotal = 0;//��̬��������
//	if (k <= 0)
//	{
//		printf("loop cycle: %d\n", count);
//		printf("subtotal: %d; total: %d\n", subtotal, total);
//		subtotal = 0;
//	}
//	else
//	{
//		subtotal += k;
//		total += k;
//	}
//}

//12.7  rand0.c  ���������
//ʹ�� ANSI C ����ֲ�㷨
//static unsigned long int next = 1;//����
//unsigned int rand0()
//{
//	//����α�������ħ����ʽ
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}


//12.9 s_and_r.c�ļ�����  ����rand1()��srand()���ļ�
//ʹ�� ANSI C ����ֲ�㷨
//static unsigned long int next = 1;//����
//unsigned int rand1()
//{
//	//����α�������ħ����ʽ
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand1(unsigned int seed)
//{
//	next = seed;
//}
