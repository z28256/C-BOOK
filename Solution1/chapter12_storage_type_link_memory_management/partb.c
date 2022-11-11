#define _CRT_SECURE_NO_WARNINGS 1
//partb.c 程序的其余部分
//与parta.c一起编译
//#include <stdio.h>
//extern int count;//引用式声明，外部链接
//static int total = 0;//静态变量，内部变量
////void accumulate(int k);//函数原型，可选
//void accumulate(int k)//k具有块作用域，无链接
//{
//	static int subtotal = 0;//静态，无链接
//	if (k <= 0)
//	{
//		printf("loop cycle: %d\n", count);
//		printf("subtotal: %d; total: %d\n", subtotal, total);
//		subtotal = 0;
//	}
//	else
//	{
//		subtotal += k;
//		total += k;
//	}
//}

//12.7  rand0.c  生成随机数
//使用 ANSI C 可移植算法
//static unsigned long int next = 1;//种子
//unsigned int rand0()
//{
//	//生成伪随机数的魔术公式
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}


//12.9 s_and_r.c文件程序  包含rand1()和srand()的文件
//使用 ANSI C 可移植算法
//static unsigned long int next = 1;//种子
//unsigned int rand1()
//{
//	//生成伪随机数的魔术公式
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand1(unsigned int seed)
//{
//	next = seed;
//}
