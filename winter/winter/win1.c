#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>     
//int main()
//{
//    //scanf() ���뺯��
//    printf("Hello World!\n");  //printf() ���������\n ����
//    return 0;
//}

//int main()
//{
//    printf("sizeof(char) = %zd\n", sizeof(char));
//    printf("sizeof(short) = %zd\n", sizeof(short));
//    printf("sizeof(int) = %zd\n", sizeof(int));
//    printf("sizeof(long) = %zd\n", sizeof(long));
//    printf("sizeof(long long) = %zd\n", sizeof(long long));
//    printf("sizeof(float) = %zd\n", sizeof(float));
//    printf("sizeof(double) = %zd\n", sizeof(double));
//    printf("sizeof(long double) = %zd\n", sizeof(long double));
//    return 0;
//}

//int global = 20;//ȫ��
//int main()
//{
//    int local = 15;//�ֲ�
//    int global = 50;//�ֲ�
//    printf("global = %d\n", global);
//    return 0;
//}

//int g_a = 55;
//void test()
//{
//    printf("test:%d\n", g_a);
//}
//int main()
//{
//    printf("%d\n", g_a);
//    test();
//    return 0;
//}


//int g_a;
//void test()
//{
//    printf("test:%d\n", g_a);
//}
//
//int g_a = 55;
//
//int main()
//{
//    printf("%d\n", g_a);
//    test();
//    return 0;
//}

//extern int g_a;
//int main()
//{
//	printf("%d\n", g_a);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 15;
//		printf("1 %d\n", a);
//	}
//	printf("2 %d\n", a);
//
//	return 0;
//}

//ö�ٳ���(�����е�RED, GREEN, BLUE��ö������Color�Ŀ���ȡֵ��ͬʱҲ�ǳ��������Խ�ö�ٳ���)
//enum Color
//{
//    RED,//0
//    GREEN,//1
//    BLUE,//2    
//};
//#define ����ı�ʶ������
//#define M 100
//int main()
//{
//    //���泣��
//    //3;
//    //5.61;
//    //'a';//�ַ����泣��
//    //"hello";//�ַ������泣��
//
//    //const���εı���
//    const int num = 156;
//    //num = 45;
//    printf("%d\n", num);
//
//    const int n = 5;
//    //int arr[n];//err
//    int arr1[5];
//
//    int arr2[M];
//    printf("%d\n", M);
//    //M = 55;//err
//
//    enum Color c = RED;
//    printf("%d\n", c);
//    //RED = 59;//err
//    
//    return 0;
//}

#include <string.h>
//int main()
//{
//    char arr1[] = { 'a', 'b', 'c'};
//    char arr2[] = "abc";
//    char arr3[] = {'a', 'b', 'c', '\0'};
//
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//
//    printf("%zd\n", strlen(arr1));
//    printf("%zd\n", strlen(arr2));
//
//    return 0;
//}


//int main()
//{
//	printf("c:\code\test.c\n");
//	return 0;
//}


//int main()
//{
//    //??) -����ĸ��- ] //VS��֧������ĸ��
//    printf("(??)");//(]
//    return 0;
//}


//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("%c\n", '"');
//	printf("%c\n", '\a');
//	printf("%c\n", '\127');
//	printf("%c\n", '\x46');
//	printf("%s\n", "abcd\bef");
//
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", strlen("acbdef"));
//	printf("%zd\n", strlen("c:\test\628\test.c"));
//	printf("%zd\n", strlen("c:\est\628\test.c"));
//	printf("%zd\n", strlen("abc\qdef"));
//	return 0;
//}


//int main()
//{
//    int iq = 0;
//    //while (scanf("%d", &iq) == 1)
//    while (scanf("%d", &iq) != EOF)
//    {
//        if (iq >= 140)
//        {
//            printf("Genius\n");
//        }
//        //printf("%s", iq >= 140 ? "Genius\n" : 0);//err
//    }
//    return 0;
//}


//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr1[10] = { 1, 2, 3, 4, 5 };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ'\0'
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 15 / 2);
//	printf("%f\n", 15.0 / 2);
//	//printf("%f\n", 15.0 % 2);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a = %d b = %d\n", a, b);//11 10
//	b = ++a;
//	printf("a = %d b = %d\n", a, b);//12 12
//	b = a--;
//	printf("a = %d b = %d\n", a, b);//11 12
//	b = --a;
//	printf("a = %d b = %d\n", a, b);//10 10
//	int c = (int)3.15;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	if (a = 5)//a == 5
//	{
//		printf("hello!\n");
//	}
//	int age = 1;
//	if (15 <= age <= 56)
//	//if(age >= 15 && age <= 56)
//	{
//		printf("young\n");
//	}
//	return 0;
//}


//int main()
//{
//    int a = 5;
//    int b = 15;
//    int max = a > b ? a : b;
//    printf("%d\n", max);
//    return 0;
//}


//int main()
//{
//    int arr[5] = { 1, 2, 3, 4, 5 };//��������е�[]�����±����ò�����
//    printf("%d\n", arr[2]);//�±����ò�����
//    return 0;
//}


//int ADD(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 4;
//    int b = 6;
//    int ret = ADD(a, b);
//    printf("%d\n", ret);
//
//    printf("%zd\n", sizeof a);
//    printf("%zd\n", sizeof(int));
//    return 0;
//}