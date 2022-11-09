#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_COUNT 10
void print_board(char board[ROWS][COLS], int rows, int cols);
void init_board(char board[ROWS][COLS], int rows, int cols, char ch);
void mine_board(char board[ROWS][COLS], int rows, int cols);
void find_board(char board1[ROWS][COLS], char board2[ROWS][COLS], int rows, int cols);