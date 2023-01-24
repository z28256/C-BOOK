#define _CRT_SECURE_NO_WARNINGS 1
//EOF 文件结束标志
//end of file
#include <stdio.h>
//int main()
//{
//	int n1, n2;
//	int ret = scanf("%d%d", &n1, &n2);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int main()
//{
//    //建议
//    register int a = 4;
//    return 0;
//}


//typedef unsigned int u_int;
//int main()
//{
//    u_int m = 0;
//    unsigned int n = 0;
//    return 0;
//}


//void test()
//{
//    static int a = 0;
//    int a = 0;
//    a++;
//    printf("%d\n", a);
//}
//int main()
//{
//    int i = 5;
//    while (i--)
//    {
//        test();
//    }
//    printf("%d\n", a);//err
//    return 0;
//}


//extern int a;
//int main()
//{
//    printf("%d\n", a);
//    return 0;
//}


//extern int ADD(int, int);
//int main()
//{
//    int a = 2;
//    int b = 9;
//    int ret = ADD(a, b);
//    printf("%d\n", ret);
//    return 0;
//}


//#define M 100
//#define MAX(x, y) (x > y ? x : y)
//#define Add(x, y) ((x) + (y))
//int Max(int x, int y)
//{
//    return x > y ? x : y;
//}
//int main()
//{
//    printf("%d\n", M);
//    int a = 9;
//    printf("%d\n", MAX(a, 11));
//    printf("%.2f\n", MAX(2.4, 1.5));
//    printf("%d\n", Max(a, 11));
//    printf("%d\n", Add(2, 4));
//    return 0;
//}


//int main()
//{
//    int a = 1;//向内存申请 4 个字节
//    int* p = &a;
//    printf("%d\n", a);
//    *p = 5;
//    // *p 等价于 a
//    printf("%d\n", a);
//    a = 9;
//    printf("%d\n", *p);
//    printf("%p\n", p);
//    printf("%p\n", &a);
//
//    return 0;
//}

//int main()
//{
//    printf("%zd\n", sizeof(int*));
//    printf("%zd\n", sizeof(char*));
//    return 0;
//}

//int main()
//{
//    int n = 9;
//    int arr[n];
//    return 0;
//}

//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", sum(a));
//    }
//    return 0;
//}

//int main()
//{
//    double arr[5] = { 0.0 };
//    int i = 0;
//    while (i < 5)
//    {
//        int j = 0;
//        double sum = 0;
//        while (j < 5)
//        {
//            scanf("%lf", &arr[j]);
//            sum += arr[j];
//            j++;
//        }
//        j = 0;
//        while (j < 5)
//        {
//            printf("%.1f ", arr[j]);
//            j++;
//        }
//        printf("%.1f\n", sum);
//        i++;
//    }
//    return 0;
//}


//struct Stu
//{
//    char name[20];
//    char sex[8];
//    int age;
//};
//void Print(struct Stu* ps)
//{
//    printf("%s %s %d\n", (*ps).name, (*ps).sex, (*ps).age);
//    printf("%s %s %d\n", ps->name, ps->sex, ps->age);
//}
//int main()
//{
//    struct Stu s1 = { "Tom", "male", 45 };
//    struct Stu s2 = { "Jerry", "female", 22 };
//    printf("%s %s %d\n", s1.name, s1.sex, s1.age);
//    Print(&s2);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int age = 2;
//	if (age > 18)
//		printf("成年人\n");
//	printf("刑事责任\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2)
//	{
//		printf("奇数\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 3;
//	switch (day)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 1;
//	switch (day)
//	{
//	case 1:
//	case 2:
//		printf("day < 3");
//		break;
//	case 3:
//	case 4:
//		printf(">= 3");
//		break;
//	default:
//		printf("Error!\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m = 3
//	case 2:
//		n++;//n = 2
//	case 3:
//		switch (n)//switch允许嵌套使用
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;//m = 4
//			n++;//n = 3
//			break;
//		}
//	case 4:
//		m++;//m = 5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//5, 3
//	return 0;
//}