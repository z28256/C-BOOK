#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	int a = 2;
//	int b = 9;
//	printf("%d\n", MAX(a++, b++));//10
//	//MAX(a++, b++) ((a++) > (b++) ? (a++) : (b++))
//
//	printf("a = %d\n", a);//3
//	printf("b = %d\n", b);//11
//	return 0;
//}


//#define MALLOC(num, type)  (type*)malloc(num * sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(10, int);
//
//	return 0;
//}

//
//#define MAX 100
//int main()
//{
//	int a = MAX;
//#undef MAX//移除宏定义
//	//int b = MAX;
//	return 0;
//}


//#define NUM 2
//int main()
//{
//#if NUM //常量表达式(true/false)
//
//#endif //NUM
//
//
//#if MAX
//#elif MAX - 1
//#else MAX - 2
//
//#endif // MAX
//
//	return 0;
//}


//#define FUN 2*8
//#if defined(FUN)//是否被定义
//
//#endif // FUN
//
//#ifdef FUN//是否被定义（和上面的等价）
//
//#endif // FUN
//
//#if !defined(FUN)
//
//#endif
//
//#ifndef FUN
//
//#endif // !FUN


//#include "func.h"//先在源文件目录下找，然后再去标准位置查找头文件
//#include <stdio.h>//查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。
//对于库文件也可以使用 "" 的形式包含，查找的效率就低



//如何解决头文件的重复包含（条件编译）
//1.
//#ifndef __TEST_H__
//#define __TEST_H__
//头文件的内容
//#endif  //__TEST_H_

//2.
//#pragma once



//#define INT_PTR int*
//typedef int* int_ptr;
////INT_PTR a, b;
//int* a, b;// b 为int类型
//int_ptr c, d;


//#define N 4
//#define Y(n) ((N+2)*n)
//
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));//2 * (4 + (4 + 2)*5 + 1)//70
//	printf("%d\n", z);
//	return 0;
//}


//#define A 2+2
//#define B 3+3
//#define C A*B//2 + 2 * 3 + 3//11
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}


//struct S
//{
//	char a;
//	int c;
//};
//#define OFFSETOF(type, member) ((size_t)&((type*)0)->member)
////offsetof()//stddef.h
//int main()
//{	
//	struct S s = { 0 };
//
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, a));
//	return 0;
//}


//#define SWAP(n) (((n & 0x55555555) << 1) + ((n & 0xaaaaaaaa) >> 1))
//int main()
//{
//	//1010 -- 0101
//	printf("%d\n", SWAP(10));
//	return 0;
//}