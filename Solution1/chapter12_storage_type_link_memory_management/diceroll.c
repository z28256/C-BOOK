#define _CRT_SECURE_NO_WARNINGS 1
//12.11 diceroll.c  ������ģ�����
//��mandydice.cһ�����
//#include "diceroll.h"
//int roll_count = 0;//�ⲿ���ӣ�����ʽ����
//static int rollem(int sides)//�ú������ڸ��ļ�˽��
//{
//	int roll = 0;
//	roll = rand() % sides + 1;
//	++roll_count;//���㺯�����ô���
//	return roll;
//}
//int roll_n_dice(int dice, int sides)
//{
//	int d = 0;
//	int total = 0;
//	if (sides < 2)
//	{
//		printf("Need at least 2 sides.\n");
//		return -2;
//	}
//	if (dice < 1)
//	{
//		printf("Need at least 1 dice.\n");
//		return -1;
//	}
//	for (d = 0; d < dice; d++)
//	{
//		total += rollem(sides);
//	}
//	return total;
//}