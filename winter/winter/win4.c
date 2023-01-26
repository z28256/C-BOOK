#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//Sleep()
//#include <stdlib.h>//system()
//int main()
//{
//	char str1[] = "hello world!";
//	char str2[] = "            ";
//	int left = 0;
//	int right = (int)strlen(str1) - 1;
//	while (left <= right)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		Sleep(100);
//		system("cls");
//
//		left++;
//		right--;
//	}
//	printf(str2);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	int flag = 0;
//	do
//	{
//		printf("Enter the passwords: \n");
//		scanf("%s", password);
//		if (!strcmp(password, "abcdefg"))
//		{
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("µÚ %d ´ÎÃÜÂë´íÎó¡£\n", i + 1);
//		}
//		i++;
//	}while (i < 3);
//	if (flag)
//	{
//		printf("\nµÇÂ¼³É¹¦\n");
//	}
//	else
//	{
//		printf("\nµÇÂ½Ê§°Ü\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <windows.h>
//void menu()
//{
//	printf("    0.exit\n");
//	printf("    1.play\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//
//	do
//	{
//		scanf("%d", &num);
//		printf("num %c ret\n", num == ret ? '=' : num > ret ? '>' : '<');
//		Sleep(1000);
//		system("cls");
//
//	} while (num != ret);
//	
//	printf("Win!\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("Exit\n");
//			break;
//		default:
//			printf("Enter 0 / 1 :\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	char str[20] = { 0 };
//	system("shutdown -s -t 60");
//	//do
//	//{
//	//	printf("Enter \"abcdefg\" :\n");
//	//	scanf("%s", str);
//	//} while (strcmp("abcdefg", str));
//
//again:
//	printf("Enter \"abcdefg\" :\n");
//	scanf("%s", str);
//
//	if (strcmp("abcdefg", str))
//	{
//		goto again;
//	}
//	system("shutdown -a");
//	return 0;
//}


#include <stdio.h>
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//		b = 30;
//	case 2:
//		b = 20;
//	case 3:
//		b = 16;
//	default:
//		b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}


//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for (i = 3; i < 100; i += 3)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	for (i = 1; i * 3 < 100; i++)
//	{
//		printf("%d ", 3 * i);
//	}
//	return 0;
//}


//void swap(int* x, int* y)
//{
//	if (*x < *y)
//	{
//		int temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	swap(&a, &b);
//	swap(&a, &c);
//	swap(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1;
//
//		for (int j = 2; j * j <= i; j++)
//		{
//			if (!(i % j))
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y += 4)
//	{
//		if (y % 100 || !(y % 400))
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int k = 0;
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//	return 0;
//}