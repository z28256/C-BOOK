#define _CRT_SECURE_NO_WARNINGS 1
//5.1 shoes1.c  把鞋码转换成英寸
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;		//const变量不可更改
//	double shoe = 9.0;
//	double foot = 0.0;
//
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's) foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}


//5.2 shoes2.c  计算多个不同鞋码对应的脚长
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe = 3.0;
//	double foot = 0.0;
//
//	printf("Shoe size (men's) foot length\n");
//	while (shoe < 18.5)			//while(++shoe < 18.5) 不能shoe++,会出现19
//	{							
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}							
//	printf("If the shoes fits, wear it.\n");
//
//	return 0;
//}


//5.3 golf.c  高尔夫锦标赛记分卡
//#include <stdio.h>
//int main(void)
//{
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;		//从右往左进行赋值
//	printf("cheera tarzan jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
//	
//	return 0;
//}


//5.4 square.c  计算1-20的平方
//#include <stdio.h>
//int main(void)
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num++;
//	}
//	return 0;
//}


//5.5 wheat.c  指数增长
//#include <stdio.h>
//#define SQUARES 64		//棋盘中的方格数
//int main(void)
//{
//	const double CROP = 2E16;		//世界小麦年产量
//	double current = 1.0;
//	double total = 1.0;
//	int count = 1;
//
//	printf("square\t   grains\t  total\tfraction\n");
//	printf("added\t   grains\t  total\n");
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	while (count < SQUARES)
//	{
//		count++;
//		current *= 2.0;		//下一个方格谷粒翻倍
//		total += current;	//总数增加
//		printf("%4d %13.2e %12.2e %12.2e\n",
//			count, current, total, total / CROP);
//	}
//
//	printf("That's all.\n");
//
//	return 0;
//}


//5.6 divide.c  演示除法
//#include <stdio.h>
//int main(void)
//{
//	printf("integer division: 5/4 is %d\n", 5 / 4);
//	printf("integer division: 6/3 is %d\n", 6 / 3);
//	printf("integer division: 7/4 is %d\n", 7 / 4);
//	printf("floating division: 7./4. is %1.2f\n", 7. / 4.);
//	printf("mixed division: 7./4 is %1.2f\n", 7. / 4);
//	printf("%d\n", 12 / 3 * 2);		//从左往右
//	return 0;
//}


//5.7 rules.c  优先级测试
//#include <stdio.h>
//int main(void)
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//	return 0;
//}


//5.8 sizeof.c  使用sizeof运算符
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	size_t intsize = sizeof(int);
//	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
//		n, sizeof n, intsize);
//
//	return 0;
//}


//5.9 min_sec.c  把秒数转换成分和秒
//#include <stdio.h>
//#define SEC_PER_MIN 60
//int main(void)
//{
//	int sec = 0;
//	int min = 0;
//	int left = 0;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<= 0 to quit): \n");
//	scanf("%d", &sec);		//读取秒数
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;	//截断分钟数
//		left = sec % SEC_PER_MIN;	//剩下的秒数
//		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
//		printf("Enter next value (<= 0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//
//	return 0;
//}


//负数求模（趋零截断）
//标准规定，若a, b都是整数，便可通过a - (a / b) * b  来计算a % b
//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", 11 / 5);
//	printf("%d\n", 11 % 5);
//	printf("%d\n", 11 / -5);	//-2
//	printf("%d\n", 11 % -2);	// 11 - (11 / -2) * -2 = 1
//	printf("%d\n", -11 / -5);	//2
//	printf("%d\n", -11 % -5);	// -11 - (-11 / -5) * -5 = -1
//	printf("%d\n", -11 / 5);	//-2
//	printf("%d\n", -11 % 5);	// -11 - (-11 / 5) * 5 = -1
//	return 0;
//}


//5.10 add_one.c  递增：前缀和后缀
//#include <stdio.h>
//int main(void)
//{
//	int ultra = 0, super = 0;
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d\n", super, ultra);
//	}
//	return 0;
//}


//5.11 post_pre.c  前缀和后缀
//#include <stdio.h>
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post = 0, pre_b = 0;
//	
//	a_post = a++;		//后缀递增
//	pre_b = ++b;		//前缀递增
//	printf("a a_post b pre_b\n");
//	printf("%d%4d%5d%5d\n", a, a_post, b, pre_b);
//
//	return 0;
//}


//5.12 bottles.c 
//#include <stdio.h>
//#define MAX 100
//int main(void)
//{
//	int count = MAX + 1;
//	while (--count > 0)
//	{
//		printf("%d bottles of spring water on the wall, "
//			"%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//	return 0;
//}


//递增和递减运算符优先级只低于圆括号
//每个表达式都有一个值,表达式q = 5 * 2作为一个整体的值是10,表达式5 * 2的值为10 
//5.13 addemup.c  几种常见的语句
//#include <stdio.h>
//int main(void)
//{
//	int count, sum;			//声明
//	count = 0;				//表达式语句
//	sum = 0;				//表达式语句
//	while (count++ < 20)	//迭代语句
//	{
//		sum += count;		//表达式语句
//	}
//	printf("sum = %d\n", sum);//表达式语句
//	return 0;				//跳转语句
//}


//5.14 convert.c  自动类型转换
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//	
//	fl = i = ch = 'C';
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch += 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
//	ch = 1107;
//	printf("Now ch = %c\n", ch);
//	ch = 80.89;
//	printf("Now ch = %c\n", ch);
//
//	return 0;
//}


//5.15 pound.c  定义一个带参数的函数
//#include <stdio.h>
//void pound(int n);		//函数原型声明
//int main(void)
//{
//	int times = 5;
//	char ch = '!';		//ASCII码是33
//	float f = 6.0f;
//	pound(times);
//	pound(ch);
//	pound(f);
//	return 0;
//}
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//	}
//	printf("\n");
//}


//5.16 running.c   A useful program for runners
//#include <stdio.h>
//const int S_PER_M = 60;				//1分钟的秒数
//const int S_PER_H = 3600;			//1小时的分钟数
//const double M_PER_K = 0.62137;		//1公里的英里数
//int main(void)
//{
//	double distk, distm;	//跑过的距离（公里，英里）
//	double rate;			//平均速度（英里/小时）
//	int min, sec;			//跑步用时（分钟，秒）
//	int time;				//跑步用时（秒）
//	double mtime;			//跑一英里的时间（秒）
//	int mmin, msec;			//跑一英里的时间（分钟，秒）
//	printf("This program convert your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk);		//%lf表示读取double类型的值
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//	time = S_PER_M * min + sec;		//把时间转换成秒
//	distm = M_PER_K * distk;		//把公里转换成英里
//	rate = distm / time * S_PER_H;	
//	mtime = (double)time / distm;
//	mmin = (int)mtime / S_PER_M;
//	msec = (int)mtime % S_PER_M;
//	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
//		distk, distm, min, sec);
//	printf("That pacecorresponds to running amile in %d min, ", mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);
//	return 0;
//}


//5.11  1.输入分钟转换成小时和秒  while循环 小于/等于0时停止循环
//#include <stdio.h>
//#define SEC_PER_MIN 60
//#define MIN_PER_HOUR 60
//int main(void)
//{
//	int min = 0;
//	int sec = 0;
//	double hour = 0;
//
//	printf("Enter min:\n");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		sec = min * SEC_PER_MIN;
//		hour = (double)min / MIN_PER_HOUR;
//		printf("min = %d, hour = %.2f, sec = %d\n", min, hour, sec);
//		printf("Enter the number of min:\n");
//		scanf("%d", &min);
//	}
//	return 0;
//}


//2. 输入整数，输出依次增加的十个数（输入5，输出5-15）
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	int count = 0;
//	printf("Enter the number: \n");
//	scanf("%d", &num);
//	count = num + 10;
//	while (num <= count)
//	{
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}


//3.  输入天数，输出周数和天数（输入18，输出2周4天）
//#include <stdio.h>
//#define DAY_PER_WEEK 7
//int main(void)
//{
//	int days = 0;
//	printf("Enter the days:\n");
//	scanf("%d", &days);
//	while (days > 0)
//	{
//		printf("%d days are %d weeks, %d days.\n\n",
//			days, days / DAY_PER_WEEK, days % DAY_PER_WEEK);
//		printf("Enter the days:\n");
//		scanf("%d", &days);
//	}
//
//	return 0;
//}


//4.  输入身高（cm）,以厘米和英寸显示该值，允许有小数部分。
//#include <stdio.h>
//#define FEET_PER_CM 30.48
//#define INCH_PER_CM 2.54
//int main(void)
//{
//	double height = 0;
//	int feet = 0;
//	double inch = 0;
//	printf("Enter a height in centimeters: ");
//	scanf("%lf", &height);
//	while (height > 0)
//	{
//		feet = (int)(height / FEET_PER_CM);
//		inch = (height - feet * FEET_PER_CM) / INCH_PER_CM;
//		printf("%.1f cm = %d feet, %.1f inches\n\n", height, feet, inch);	
//		printf("Enter a height in centimeters (<= 0 to quit): ");
//		scanf("%lf", &height);
//	}
//
//	return 0;
//}


//5.修改5.13
//#include <stdio.h>
//int main(void)
//{
//	int count, sum;
//	int num = 0;
//
//	printf("Enter the number: \n");
//	scanf("%d", &num);
//	while (num > 0)
//	{
//		count = 0;
//		sum = 0;
//		while (count++ < num)
//		{
//			sum += count;
//		}
//		printf("sum = %d\n\n", sum);
		//printf("Enter the number: \n");
//		scanf("%d", &num);
//	}
//	return 0;				
//}


//6.改编程序5，使其能计算整数的平方和
//#include <stdio.h>
//int main(void)
//{
//	int count, sum;
//	int num = 0;
//
//	printf("Enter the number: ");
//	scanf("%d", &num);
//	while (num > 0)
//	{
//		count = 0;
//		sum = 0;
//		while (count++ < num)
//		{
//			sum += count * count;
//		}
//		printf("sum = %d\n\n", sum);
//		printf("Enter the num: \n");
//		scanf("%d", &num);
//
//	}
//	return 0;
//}


//7.设计一个函数，打印double类型的立方值
//#include <stdio.h>
//double cube(double n);
//int main(void)
//{
//	double num = 0;
//	printf("Enter a number: \n");
//	scanf("%lf", &num);
//	printf("cube = %f", cube(num));
//	return 0;
//}
//
//double cube(double n)
//{
//	double cube = n * n * n;
//	return cube;
//}


//8.输入的第一个整数是求模运算符的第二个运算对象，之后输入的都是第一个运算对象
//#include <stdio.h>
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	printf("This program computes moduli\n");
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", &num1);
//	printf("Now enter the first operand: ");
//	scanf("%d", &num2);
//
//	while (num2 > 0)
//	{
//		printf("%d %% %d is %d\n", num2, num1, num2 % num1);
//		printf("Enter next number for first operand (<=0 to quit): ");
//		scanf("%d", &num2);
//	}
//	printf("Done\n");
//
//	return 0;
//}


//9. 输入华氏温度(double),函数Temperatures()(计算摄氏温度和开氏温度)
//摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
//开氏温度 = 摄氏温度 + 273.16
//#include <stdio.h>
//void Temperature(double t);
//int main(void)
//{
//	double temperature = 0;
//	printf("Enter temperature:\n");
//	while (scanf("%lf", &temperature) == 1)
//	{
//		Temperature(temperature);
//	}
//	return 0;
//}
//void Temperature(double t)
//{
//	const double n1 = 5.0 / 9.0;
//	const double n2 = 32.0;
//	const double n3 = 273.16;
//	double t1 = n1 * (t - n2);
//	double t2 = t1 + n3;
//	printf("华氏温度： %.2f\n", t);
//	printf("摄氏温度:  %.2f\n", t1);
//	printf("开氏温度   %.2f\n", t2);
//}
