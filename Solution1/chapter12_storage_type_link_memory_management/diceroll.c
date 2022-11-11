#define _CRT_SECURE_NO_WARNINGS 1
//12.11 diceroll.c  掷骰子模拟程序
//与mandydice.c一起编译
//#include "diceroll.h"
//int roll_count = 0;//外部链接，定义式声明
//static int rollem(int sides)//该函数属于该文件私有
//{
//	int roll = 0;
//	roll = rand() % sides + 1;
//	++roll_count;//计算函数调用次数
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