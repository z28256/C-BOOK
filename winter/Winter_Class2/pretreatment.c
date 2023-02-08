#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	return 0;
//}


//#define do_forever for(;;)
//int main()
//{
//	do_forever
//		printf("ok\n");
//	return 0;
//}


//#define CASE  break;case
//
//int main()
//{
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//
//	}
//
//	return 0;
//}


//#define MAX 100;//最后加了;(有可能会出错)
//int main()
//{
//	int m = 0;
//	if (m > 0)
//	{
//		m = MAX;//m = 100; ;
//
//	}
//	else
//		;
//	return 0;
//}


//#define SUM(x, y) ((x) + (y))//使用宏时需要加上（）
//#define NUM 5
//int main()
//{
//	printf("%d\n", SUM(2, 5) * 2);
//	return 0;
//}


// # 能把一个宏参数变成对应的字符串
//#define PRINT(format, x) printf("the value of " #x " is " format "\n", x);
//
//int main()
//{
//	printf("hello" " world\n");
//	int n = 5;
//	PRINT("%d", n);
//	return 0;
//}


// ## 把他两边的符号合成一个符号
//#define CAT(x, y) x##y
//
//int main()
//{
//	int BAT = 152;
//	printf("%d\n", CAT(B, AT));
//	return 0;
//}

