#define _CRT_SECURE_NO_WARNINGS 1
//12.13 manydice.c  多次掷骰子的模拟程序
//与diceroll.c一起编译
//#include "diceroll.h"
//int main()
//{
//	int dice = 0;
//	int roll = 0;
//	int sides = 0;
//	int status = 0;
//
//	srand((unsigned int)time(NULL));//随机种子
//	printf("Enter the number of sides per dice, 0 to stop.\n");
//	while (scanf("%d", &sides) == 1 && sides > 0)
//	{
//		printf("How many dice?\n");
//		if ((status = scanf("%d", &dice)) != 1)
//		{
//			if (status == EOF)
//			{
//				break;
//			}
//			else
//			{
//				printf("You should have entered an integer.");
//				printf("Let's begin again.\n");
//				while (getchar() != '\n')
//				{
//					continue;
//				}
//				printf("How many sides? Enter 0 to stop.\n");
//				continue;
//			}
//		}
//		roll = roll_n_dice(dice, sides);
//		printf("You have rolled a %d using %d %d-sides dice.\n",
//			roll, dice, sides);
//		printf("How many sides? Enter 0 to stop.\n");
//	}
//	printf("The rollem() function was called %d times.\n", roll_count);
//	printf("GOOD FORTURE TO YOU!\n");
//	return 0;
//}