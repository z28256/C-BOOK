#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <search.h>
//#include <string.h>
//int int_cmp(const void*, const void*);
//int cmp_age(const void*, const void*);
//int cmp_name(const void*, const void*);
//int bubble_qsort(const void*, int, int, int(*)(void*, void*));
//void swap(char*, char*, int);
//struct Stu
//{
//	int age;
//	char name[4];
//};
//int main()
//{
//	int arr[10] = { 2, 4, 1, 9, 7, 8, 6, 5, 10, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//qsort(arr, sz, sizeof arr[0], int_cmp);
//	bubble_qsort(arr, sz, sizeof arr[0], int_cmp);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	struct Stu s1 = { 20, "Tom" };
//	struct Stu s2 = { 115, "Ac" };
//	struct Stu s3 = { 99, "Ji" };
//	struct Stu s[3] = { s1, s2, s3 };
//
//	int num = sizeof(s) / sizeof(s[0]);
//	//qsort(s, num, sizeof(s[0]), cmp_age);
//	bubble_qsort(s, num, sizeof(s[0]), cmp_age);
//	//qsort(s, num, sizeof(s[0]), cmp_name);
//	bubble_qsort(s, num, sizeof(s[0]), cmp_name);
//
//	return 0;
//}
//int int_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int bubble_qsort(const void* arr, int num, int width, int(*p)(void*, void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (p((char*)arr + width * j, (char*)arr + width * (j + 1)) > 0)
//			{
//				swap((char*)arr + width * j, (char*)arr + width * (j + 1), width);
//			}
//		}
//	}
//}
//void swap(char* n1, char* n2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *(n1 + i);
//		*(n1 + i) = *(n2 + i);
//		*(n2 + i) = temp;
//	}
//}



//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	//00000000 11001000
//	unsigned char b = 100;
//	//00000000 01100100
//	unsigned char c = 0;
//	c = a + b;
//	//a:00000000 00000000 00000000 11001000
//	//b:00000000 00000000 00000000 01100100
//	//a + b:00000000 00000000 00000001 00101100
//	//c:00000000 00101100
//	printf("%d %d\n", a + b, c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x1234;
//	//a:0x00 00 12 34
//
//	char b = *(char*)&a;
//	printf("%d\n", b);
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；(b==2) + (a==3) == 1
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((a == 3) + (b == 2)) == 1 &&
//							((b == 2) + (e == 4)) == 1 &&
//							((c == 1) + (d == 2)) == 1 &&
//							((c == 5) + (d == 3)) == 1 &&
//							((e == 4) + (a == 1)) == 1)
//						{
//							if ( a * b * c * d * e == 120 )
//							{
//								printf("%d %d %d %d %d\n",
//									a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//#include <stdio.h>
//int main()
//{
//	char killer = 0;
//	for ( killer = 'a'; killer <= 'd'; killer++ )
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//#include <stdio.h>
//int main()
//{
//	int arr[5][5] = { 0 };
//	int n = 5;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		arr[i][i] = 1;
//		int k = 0;
//		for (k = 0; k < 2 * n - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			arr[i][0] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//杨氏矩阵
//#include <stdio.h>
//int find_k(int(*arr)[3], int* r, int* c, int k)
//{
//	int x = 0;
//	int y = *c - 1;
//	while (x <= *r - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*r = x;
//			*c = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int x = 3; 
//	int y = 3;
//	int ret = find_k(arr, &x, &y, k);
//	if (ret)
//	{
//		printf("下标是%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void left_spin1(char* arr, int k);
//void left_spin2(char* arr, int k);
//void reverse(char*, char*);
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 3;
//
//	//left_spin1(arr, k);
//	left_spin2(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}
//void left_spin1(char* arr, int k)
//{
//	int len = strlen(arr);
//	int i = 0;
//	int j = 0;
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char temp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		*(arr + len - 1) = temp;
//	}
//}
//void left_spin2(char* arr, int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int is_left_spin(char* arr1, char* arr2);
//void left_spin2(char* arr, int k);
//void reverse(char*, char*);
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defabc";
//	char arr3[] = "defab";
//	int k = 3;
//
//	printf("%s", is_left_spin(arr1, arr2) ? "Yes\n" : "No\n");
//	printf("%s", is_left_spin(arr1, arr3) ? "Yes\n" : "No\n");
//
//	return 0;
//}
//int is_left_spin(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		if (!strcmp(arr1, arr2))
//		{
//			return 1;
//		}
//		left_spin2(arr1, 1);
//	}
//  return 0;
//}
//void left_spin2(char* arr, int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}


//#include <stdio.h>
//#include <string.h>
//
//int is_spin(char*, char*);
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefad";
//	
//	printf("%s\n", is_spin(arr1, arr2) ? "Yes" : "No");
//
//
//	return 0;
//}
//int is_spin(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 < len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	return strstr(arr1, arr2) ? 1 : 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//char arr[20] = "hello ";
//	//char str[] = "world";
//	//strncat(arr, str, strlen(arr));
//	//printf("%s\n", arr);
//
//	char arr1[] = "abcdabcd";
//	char arr2[] = "abcdf";
//	printf("%s\n", strstr(arr1, arr2));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p1 = (int*)(&a + 1);
//	//int* p2 = (int*)(a + 1);
//	int* p2 = *(a + 1);
//	printf("%d %d\n", *(p1 - 1), *(p2 - 1));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5] = { 0, 11, 2, 88, 99 };
//	int* p = (int*)(&a + 1);
//	printf("%d %d\n", *(p - 1), *(a + 1));
//	return 0;
//}