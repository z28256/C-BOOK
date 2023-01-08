#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%zd\n", sizeof(a));//4*4=16,整个数组的大小，单位是字节
//	printf("%zd\n", sizeof(a + 0));//计算首元素的地址大小，4/8
//	printf("%zd\n", sizeof(*a));//计算首元素的大小，4
//	printf("%zd\n", sizeof(a + 1));//计算第二个元素的地址的大小，4/8
//	printf("%zd\n", sizeof(a[1]));//计算第二个元素的大小，4
//	printf("%zd\n", sizeof(&a));//计算整个数组的地址的大小，4/8
//	printf("%zd\n", sizeof(*&a));//计算整个数组的大小，4*4
//	printf("%zd\n", sizeof(&a + 1));//计算数组的地址+1，4/8
//	printf("%zd\n", sizeof(&a[0]));//计算首元素的地址，4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//首元素的地址+1，4/8
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%zd\n", sizeof(arr));//整个数组的大小，6
//	//printf("%zd\n", sizeof(arr + 0));//首元素的地址，4/8
//	//printf("%zd\n", sizeof(*arr));//首元素的大小，1
//	//printf("%zd\n", sizeof(arr[1]));//第二个元素的大小，1
//	//printf("%zd\n", sizeof(&arr));//数组的地址的大小，4/8
//	//printf("%zd\n", sizeof(&arr + 1));//数组的地址+1，4/8
//	//printf("%zd\n", sizeof(&arr[0] + 1));//首元素的地址+1，4/8
//
//	printf("%zd\n", strlen(arr));//未知
//	printf("%zd\n", strlen(arr + 0));//未知
//	//printf("%zd\n", strlen(*arr));//*arr = 'a' 'a': 97 strlen(地址) 错误
//	//printf("%zd\n", strlen(arr[1]));//错误
//	printf("%zd\n", strlen(&arr));//未知
//	printf("%zd\n", strlen(&arr + 1));//未知
//	printf("%zd\n", strlen(&arr[0] + 1));//未知
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));//数组的大小，7
//	printf("%zd\n", sizeof(arr + 0));//第一个元素的地址，4/8
//	printf("%zd\n", sizeof(*arr));//第一个元素的大小，1
//	printf("%zd\n", sizeof(arr[1]));//第二个元素的大小，1
//	printf("%zd\n", sizeof(&arr));//数组的地址的大小，4/8
//	printf("%zd\n", sizeof(&arr + 1));//数组的地址+1，4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//首元素的地址+1，4/8
//
//	printf("%zd\n", strlen(arr));//6
//	printf("%zd\n", strlen(arr + 0));//6
//	//printf("%zd\n", strlen(*arr));//错误
//	//printf("%zd\n", strlen(arr[1]));//错误
//	printf("%zd\n", strlen(&arr));//6
//	printf("%zd\n", strlen(&arr + 1));//未知
//	printf("%zd\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char ch = 'a';
//	short n = 45;
//	long long a = 11;
//	short b = 45;
//	printf("%zd\n", sizeof b);
//	printf("%zd\n", sizeof +b);
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof +a);
//	printf("%zd\n", sizeof(ch));
//	printf("%zd\n", sizeof(+ch));
//	printf("%zd\n", sizeof('c'));
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zd\n", sizeof(p));//首元素的地址的大小，4/8
//	printf("%zd\n", sizeof(p + 1));//第二个元素的地址的大小，4/8
//	printf("%zd\n", sizeof(*p));//'a'的大小：1
//	printf("%zd\n", sizeof(p[0]));//'a'的大小：1
//	printf("%zd\n", sizeof(&p));//p的地址：4/8
//	printf("%zd\n", sizeof(&p + 1));//p的地址+1：4/8
//	printf("%zd\n", sizeof(&p[0] + 1));//首元素的地址+1：4/8
//
//	printf("%zd\n", strlen(p));//6
//	printf("%zd\n", strlen(p + 1));//5
//	//printf("%zd\n", strlen(*p));//错误
//	//printf("%zd\n", strlen(p[0]));//错误
//	printf("%zd\n", strlen(&p));//未知
//	printf("%zd\n", strlen(&p + 1));//未知
//	printf("%zd\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%zd\n", sizeof(a));//3*4*4=48
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//a[0]是第一行的地址，第一行的大小，4*4=16
//	printf("%zd\n", sizeof(a[0] + 1));//第一行首元素的地址+1，4/8
//	printf("%zd\n", sizeof(*(a[0] + 1)));//a[0][1]的大小：4
//	printf("%zd\n", sizeof(a + 1));//数组首元素a[0]的地址+1，4/8
//	printf("%zd\n", sizeof(*(a + 1)));//a[0]的地址+1，再解引用，int(*)[4],4*4=16
//	printf("%zd\n", sizeof(&a[0] + 1));//a[0]的地址+1，4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//a[0]的地址+1，再解引用,int(*)[4],16
//	printf("%zd\n", sizeof(*a));//a[0]的大小，16
//	printf("%zd\n", sizeof(a[3]));//a[3],int(*)[4],16
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d, %d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//#include <stdio.h>
//struct Test
//{
//	int Num;//4
//	char* pcName;//4(x86)
//	short sDate;//2
//	char cha[2];//2*1=2
//	short sBa[4];//2*4=8
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = 0x100000;
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//0x01000000 0x00000002 0x02000000
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//-4:0x10000000 00000000 00000000 00000100
//	//   0x11111111 11111111 11111111 11111011
//	//   0x11111111 11111111 11111111 11111100
//	//0xff ff ff fc
//	return 0;
//}