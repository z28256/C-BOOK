#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%zd\n", sizeof(a));//4*4=16,��������Ĵ�С����λ���ֽ�
//	printf("%zd\n", sizeof(a + 0));//������Ԫ�صĵ�ַ��С��4/8
//	printf("%zd\n", sizeof(*a));//������Ԫ�صĴ�С��4
//	printf("%zd\n", sizeof(a + 1));//����ڶ���Ԫ�صĵ�ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(a[1]));//����ڶ���Ԫ�صĴ�С��4
//	printf("%zd\n", sizeof(&a));//������������ĵ�ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(*&a));//������������Ĵ�С��4*4
//	printf("%zd\n", sizeof(&a + 1));//��������ĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(&a[0]));//������Ԫ�صĵ�ַ��4/8
//	printf("%zd\n", sizeof(&a[0] + 1));//��Ԫ�صĵ�ַ+1��4/8
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%zd\n", sizeof(arr));//��������Ĵ�С��6
//	//printf("%zd\n", sizeof(arr + 0));//��Ԫ�صĵ�ַ��4/8
//	//printf("%zd\n", sizeof(*arr));//��Ԫ�صĴ�С��1
//	//printf("%zd\n", sizeof(arr[1]));//�ڶ���Ԫ�صĴ�С��1
//	//printf("%zd\n", sizeof(&arr));//����ĵ�ַ�Ĵ�С��4/8
//	//printf("%zd\n", sizeof(&arr + 1));//����ĵ�ַ+1��4/8
//	//printf("%zd\n", sizeof(&arr[0] + 1));//��Ԫ�صĵ�ַ+1��4/8
//
//	printf("%zd\n", strlen(arr));//δ֪
//	printf("%zd\n", strlen(arr + 0));//δ֪
//	//printf("%zd\n", strlen(*arr));//*arr = 'a' 'a': 97 strlen(��ַ) ����
//	//printf("%zd\n", strlen(arr[1]));//����
//	printf("%zd\n", strlen(&arr));//δ֪
//	printf("%zd\n", strlen(&arr + 1));//δ֪
//	printf("%zd\n", strlen(&arr[0] + 1));//δ֪
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
//	printf("%zd\n", sizeof(arr));//����Ĵ�С��7
//	printf("%zd\n", sizeof(arr + 0));//��һ��Ԫ�صĵ�ַ��4/8
//	printf("%zd\n", sizeof(*arr));//��һ��Ԫ�صĴ�С��1
//	printf("%zd\n", sizeof(arr[1]));//�ڶ���Ԫ�صĴ�С��1
//	printf("%zd\n", sizeof(&arr));//����ĵ�ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(&arr + 1));//����ĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//��Ԫ�صĵ�ַ+1��4/8
//
//	printf("%zd\n", strlen(arr));//6
//	printf("%zd\n", strlen(arr + 0));//6
//	//printf("%zd\n", strlen(*arr));//����
//	//printf("%zd\n", strlen(arr[1]));//����
//	printf("%zd\n", strlen(&arr));//6
//	printf("%zd\n", strlen(&arr + 1));//δ֪
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
//	printf("%zd\n", sizeof(p));//��Ԫ�صĵ�ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(p + 1));//�ڶ���Ԫ�صĵ�ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(*p));//'a'�Ĵ�С��1
//	printf("%zd\n", sizeof(p[0]));//'a'�Ĵ�С��1
//	printf("%zd\n", sizeof(&p));//p�ĵ�ַ��4/8
//	printf("%zd\n", sizeof(&p + 1));//p�ĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(&p[0] + 1));//��Ԫ�صĵ�ַ+1��4/8
//
//	printf("%zd\n", strlen(p));//6
//	printf("%zd\n", strlen(p + 1));//5
//	//printf("%zd\n", strlen(*p));//����
//	//printf("%zd\n", strlen(p[0]));//����
//	printf("%zd\n", strlen(&p));//δ֪
//	printf("%zd\n", strlen(&p + 1));//δ֪
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
//	printf("%zd\n", sizeof(a[0]));//a[0]�ǵ�һ�еĵ�ַ����һ�еĴ�С��4*4=16
//	printf("%zd\n", sizeof(a[0] + 1));//��һ����Ԫ�صĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(*(a[0] + 1)));//a[0][1]�Ĵ�С��4
//	printf("%zd\n", sizeof(a + 1));//������Ԫ��a[0]�ĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(*(a + 1)));//a[0]�ĵ�ַ+1���ٽ����ã�int(*)[4],4*4=16
//	printf("%zd\n", sizeof(&a[0] + 1));//a[0]�ĵ�ַ+1��4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//a[0]�ĵ�ַ+1���ٽ�����,int(*)[4],16
//	printf("%zd\n", sizeof(*a));//a[0]�Ĵ�С��16
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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