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
		printf("���� 0 �� 1 \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
void game()
{
	char board1[ROWS][COLS] = { 0 };//Դ����
	char board2[ROWS][COLS] = { 0 };//չʾ������
	init_board(board1, ROWS, COLS, '0');
	init_board(board2, ROWS, COLS, '*');
	print_board(board2, ROW, COL);
	//������
	mine_board(board1, ROW, COL);
	//print_board(board1, ROW, COL);
	//�Ų���
	find_board(board1, board2, ROW, COL);
}