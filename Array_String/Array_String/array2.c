#define _CRT_SECURE_NO_WARNINGS 1

//1.对角线遍历
// 
//给你一个大小为 m x n 的矩阵 mat ，请以对角线遍历的顺序，用一个数组返回这个矩阵中的所有元素。

int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize)
{
    *returnSize = *matColSize * matSize;
    int* ret = (int*)malloc(*returnSize * sizeof(int));
    int row = 0, col = 0, index = 0;
    while (index < *returnSize)
    {
        ret[index++] = mat[row][col];
        if ((row + col) % 2)
        {
            if (row < matSize - 1)
            {
                row++;
                if (col > 0)
                    col--;
            }
            else
                col++;
        }
        else
        {
            if (col < (*matColSize) - 1)
            {
                col++;
                if (row > 0)
                    row--;
            }
            else
                row++;
        }
    }
    return ret;
}



//2.零矩阵
//编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。

#include <stdbool.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{
    bool row[matrixSize];
    memset(row, false, sizeof(row));
    bool col[*matrixColSize];
    memset(col, false, sizeof(col));
    for (int i = 0; i < matrixSize; ++i)
    {
        for (int j = 0; j < *matrixColSize; ++j)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = col[j] = true;
            }
        }
    }
    for (int i = 0; i < matrixSize; ++i)
    {

        for (int j = 0; j < *matrixColSize; ++j)
        {
            if (col[j] || row[i])
            {
                matrix[i][j] = 0;
            }
        }
    }
}


//3.旋转矩阵

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void rotate(int** matrix, int matrixSize, int* matrixColSize)
{
    //水平翻转
    for (int i = 0; i < matrixSize / 2; ++i)
    {
        for (int j = 0; j < *matrixColSize; ++j)
        {
            swap(&matrix[i][j], &matrix[matrixSize - i - 1][j]);
        }
    }
    //主对角线反转
    for (int i = 0; i < matrixSize; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }
}


/*void rotate(int** matrix, int matrixSize, int* matrixColSize)
{
    int matrix_new[matrixSize][matrixSize];
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            matrix_new[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < matrixSize; ++i)
    {
        for (int j = 0; j < matrixSize; ++j)
        {
            matrix[j][matrixSize - i - 1] = matrix_new[i][j];
        }
    }
}*/




