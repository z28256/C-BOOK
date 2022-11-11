#define _CRT_SECURE_NO_WARNINGS 1
//parta.c  不同的存储类别
//与partb.c  一起编译
//#include <stdio.h>
//void report_count();
//void accumulate(int k);
//
//int count = 0;//文件作用域，外部链接
//
//int main()
//{
//	int value = 0;//自动变量
//	register int i = 0;//寄存器变量
//	printf("Enter a positive integer (0 to quit): ");
//	while (scanf("%d", &value) == 1 && value > 0)
//	{
//		++count;//使用文件作用域变量
//		for (i = value; i >= 0; i--)
//		{
//			accumulate(i);
//		}
//		printf("Enter a positive integer (0 to quit): ");
//	}
//	report_count();
//	return 0;
//}
//void report_count()
//{
//	printf("Loop executed %d times\n", count);
//}


//12.8 r_drive0.c驱动程序  测试rand0函数
//与rand0.c一起编译
//#include <stdio.h>
//extern unsigned int rand0(void);
//int main()
//{
//	int count = 0;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", rand0());
//	}
//	return 0;
//}


//12.10 r_drive1.c驱动程序  测试rand1()和srand()
//与s_and_r.c一起编译
//#include <stdio.h>
//extern void srand1(unsigned int x);
//extern int rand1(void);
//int main()
//{
//	int count = 0;
//	unsigned seed = 0;
//	printf("Please enter your choice for seed.\n");
//	while (scanf("%u", &seed) == 1)
//	{
//		srand1(seed);//重置种子
//		for (count = 0; count < 5; count++)
//		{
//			printf("%d\n", rand1());
//		}
//		printf("Please enter next seed (q to quit):\n");
//	}
//	printf("Done\n");
//	return 0;
//}