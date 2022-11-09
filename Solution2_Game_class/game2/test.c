#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void test();
void menu();
void game();
int main()
{
	test();
	return 0;
}
void menu()
{
	printf("1.play\n");
	printf("0.exit\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("输入 0 或 1 \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始：\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (input);
}
void game()
{
	char board1[ROWS][COLS] = { 0 };//源数组
	char board2[ROWS][COLS] = { 0 };//展示的数组
	init_board(board1, ROWS, COLS, '0');
	init_board(board2, ROWS, COLS, '*');
	print_board(board2, ROW, COL);
	//生成雷
	mine_board(board1, ROW, COL);
	//print_board(board1, ROW, COL);
	//排查雷
	find_board(board1, board2, ROW, COL);
}