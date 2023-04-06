#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void insert_sort(int* arr, int length)
{

	for (int i = 1; i < length; i++)
	{
		int end = i - 1;
		int temp = arr[i];
		while (end >= 0)
		{
			if (temp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
	}
}


void shell_sort(int* arr, int length)
{
	int gap = length;
	while (gap > 1)
	{
		gap = gap / 2;
		for (int i = gap; i < length; i++)
		{
			int end = i - gap;
			int temp = arr[i];
			while (end >= 0)
			{
				if (temp < arr[end])
				{
					arr[end + gap] = arr[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			arr[end + gap] = temp;
		}
	}
}


void print_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int length = sizeof(arr) / sizeof(int);

	//insert_sort(arr, length);
	shell_sort(arr, length);
	print_array(arr, length);
	return 0;
}