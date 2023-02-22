#define _CRT_SECURE_NO_WARNINGS 1
//时间复杂度:算法中的基本操作的执行次数，为算法的时间复杂度
// 时间复杂度一般看最坏
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count);// N * N + 2 * N + M  O(N^2)
//}



//void Func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; k++)
//	{
//		count++;
//	}
//
//	int M = 10;
//	while (M--)
//	{
//		count++;
//	}
//
//	printf("%d\n", count);//2 * N + M  O(N)
//}


//void Func3(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);// M + N  O(M + N)
//}


//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);//O(1)
//}


//const char* strchr(const char* str, int character);//O(N)


//O(n*n)
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}


//2 ^ k = N   k = log N; O(logN)
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	// [begin, end]：begin和end是左闭右闭区间，因此有=号
//	while (begin <= end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}


//O(N)
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//	return Fac(N - 1) * N;
//}


//O(2^N)  a0*(1-q^n)/1-q   1*(1-2^n)/-1 = 2^n - 1    2 / 3 * (2^n - 1)
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2);
//}


//空间复杂度   O(1)
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}


//O(N)
//long long* Fibonacci(size_t n)
//{
//	if (n == 0)
//		return NULL;
//	long long* fibArray = (long long*)malloc((n + 1) * sizeof(long long));
//	fibArray[0] = 0;
//	fibArray[1] = 1;
//	for (int i = 2; i <= n; ++i)
//	{
//		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//	}
//	return fibArray;
//}


//O(N)
//long long Fac(size_t N)
//{
//	if (N == 0)
//		return 1;
//	return Fac(N - 1) * N;
//}


//O(N)空间用了之后，归还操作系统，可以重复利用
//long long Fib(int N)
//{
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2);
//}


//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？

//int missingNumber(int* nums, int numsSize) 
//{
//	int sum = numsSize * (numsSize + 1) / 2;
//	for (int i = 0; i < numsSize; i++)
//	{
//		sum -= nums[i];
//	}
//	return sum;
//}


//int missingNumber(int* nums, int numsSize)
//{
//	int ret = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		ret ^= nums[i];
//	}
//	for (int i = 0; i < numsSize + 1; i++)
//	{
//		ret ^= i;
//	}
//	return ret;
//}



//给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

//void reverse(int* nums, int left, int right)
//{
//	while (left < right)
//	{
//		int temp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = temp;
//		left++;
//		right--;
//	}
//}

//void rotate(int* nums, int numsSize, int k) 
//{
//	k %= numsSize;
//
//	int* num2 = (int*)calloc(numsSize, sizeof(int));
//	if (num2 == NULL)
//	{
//		perror("calloc");
//		return;
//	}
//
//	memcpy(num2, nums + (numsSize - k), sizeof(int) * k);
//	memcpy(num2 + k, nums, sizeof(int) * (numsSize - k));
//	memcpy(nums, num2, sizeof(int) * numsSize);
//	free(num2);
//	num2 = NULL;
//	//reverse(nums, 0, numsSize - k - 1);
//	//reverse(nums, numsSize - k, numsSize - 1);
//	//reverse(nums, 0, numsSize - 1);
//}
//
//int main()
//{
//	int arr[7] = { 1 ,2, 3, 4, 5, 6, 7 };
//	rotate(arr, 7, 3);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//void F1()
//{
//	int a = 0;
//	//printf("&a = %p\n", &a);
//	//printf("F1 = %p\n", F1);
//}
//
//void F2()
//{
//	//F1();
//
//	int b = 0;
//
//	//printf("&b = %p\n", &b);
//	//printf("F2 = %p\n", F2);
//}
//
//int main()
//{
//	F1();
//	F2();
//	return 0;
//}