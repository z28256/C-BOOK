#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#pragma pack(1)
//struct s1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}


//位段
//位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(struct A));
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	//10:1010
//	//010
//	char b : 4;
//	//12:1100
//	//1100
//	char c : 5;
//	//3:11
//	//00011
//	char d : 4;
//	//4:100
//	//0100
//};
////0110 0010 0000 0011 0000 0100 
////62 03 04
////
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//
