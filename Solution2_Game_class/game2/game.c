#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void print_board(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= rows; j++)
	{
		printf(" %d ", j);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void init_board(char board[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}
void mine_board(char board[ROWS][COLS], int rows, int cols)
{
	int count = 0;
	while (count < EASY_COUNT)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}
}
int get_mine_count(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int sum = 0;
	for (x = row - 1; x <= row + 1; x++)
	{
		for (y = col - 1; y <= col + 1; y++)
		{
			sum += board[x][y];
		}
	}
	return sum - 9 * '0';
}
void find_board(char board1[ROWS][COLS], char board2[ROWS][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < rows * cols - EASY_COUNT)
	{
		printf("请输入排查坐标：\n");
		scanf("%d%d", &x, &y);
		if (x <= rows && x >= 1 && y <= cols && y >= 1)
		{
			if (board2[x][y] != '*')
			{
				printf("该坐标被排查过了\n");
			}
			if (board1[x][y] == '1')
			{
				printf("踩到雷了\n");
				print_board(board1, ROW, COL);
				break;
			}
			else
			{
				int n = get_mine_count(board1, x, y);
				board2[x][y] = n + '0';
				print_board(board2, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("非法输入!\n");
		}
	}
	if (win == rows * cols - EASY_COUNT)
	{
		printf("排雷成功！\n");
		print_board(board2, ROW, COL);
	}
}
