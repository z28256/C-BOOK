#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (5 == i)
//        {
//            //break;//1 2 3 4
//            continue;//1 2 3 4 然后死循环
//        }
//        printf("%d\n", i);
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        i++;
//        if (5 == i)
//        {
//            //continue;//2 3 4 6 7 8 9 10 11
//        }
//        printf("%d\n", i);
//    }
//    return 0;
//}


//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);
//    }
//}


//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("Enter the passwords: \n");
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("Enter 'Y' / 'N' : \n");
//	if ((ch = getchar()) == 'Y')
//	{
//		printf("Success\n");
//	}
//	else
//	{
//		printf("Failure\n");
//	}
//	return 0;
//}


//int main()
//{
//    int ch = '\0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//        {
//            continue;
//        }
//        putchar(ch);
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (5 == i)
//        {
//            //break;//1 2 3 4
//            continue;//1 2 3 4 6 7 8 9 10
//        }
//        printf("%d\n", i);
//    }
//    return 0;
//}


//int main()
//{
//    for (;;)//死循环
//    {
//        printf("hello!\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int j = 0;
//
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)//执行3次后，j的值一直为3，不会再进入循环
//        {
//            printf("world\n");//3次
//        }
//    }
//
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("hello\n");//9次
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hello!\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//    {
//        k++;
//        printf("hello\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d\n", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}


//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d\n", i);
//        if (i == 5)
//        {
//            //break;//1 2 3 4 5
//            continue;//1 2 3 4然后一直打印5，死循环
//        }
//        i++;
//    } while (i <= 10);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 1;
//
//        while (n)
//        {
//            ret *= n;
//            n--;
//        }
//
//    //int i = 0;
//    //for (i = 1; i <= n; i++)
//    //{
//    //    ret *= i;
//    //}
//
//    printf("%d\n", ret);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//        sum += ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//int main()
//{
//    int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//    int k = 7;
//    int flag = 0;
//    int left = 0;
//    int right = sizeof(arr) / sizeof(arr[0]);
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] < k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            flag = 1;
//            printf("arr[%d] = %d\n", mid, k);
//            break;
//        }
//    }
//    if (!flag)
//    {
//        printf("No!\n");
//    }
//    return 0;
//}


