#define _CRT_SECURE_NO_WARNINGS 1
//5.1 shoes1.c  ��Ь��ת����Ӣ��
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;		//const�������ɸ���
//	double shoe = 9.0;
//	double foot = 0.0;
//
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's) foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}


//5.2 shoes2.c  ��������ͬЬ���Ӧ�Ľų�
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe = 3.0;
//	double foot = 0.0;
//
//	printf("Shoe size (men's) foot length\n");
//	while (shoe < 18.5)			//while(++shoe < 18.5) ����shoe++,�����19
//	{							
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}							
//	printf("If the shoes fits, wear it.\n");
//
//	return 0;
//}


//5.3 golf.c  �߶���������Ƿֿ�
//#include <stdio.h>
//int main(void)
//{
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;		//����������и�ֵ
//	printf("cheera tarzan jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
//	
//	return 0;
//}


//5.4 square.c  ����1-20��ƽ��
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


//5.5 wheat.c  ָ������
//#include <stdio.h>
//#define SQUARES 64		//�����еķ�����
//int main(void)
//{
//	const double CROP = 2E16;		//����С�������
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
//		current *= 2.0;		//��һ�������������
//		total += current;	//��������
//		printf("%4d %13.2e %12.2e %12.2e\n",
//			count, current, total, total / CROP);
//	}
//
//	printf("That's all.\n");
//
//	return 0;
//}


//5.6 divide.c  ��ʾ����
//#include <stdio.h>
//int main(void)
//{
//	printf("integer division: 5/4 is %d\n", 5 / 4);
//	printf("integer division: 6/3 is %d\n", 6 / 3);
//	printf("integer division: 7/4 is %d\n", 7 / 4);
//	printf("floating division: 7./4. is %1.2f\n", 7. / 4.);
//	printf("mixed division: 7./4 is %1.2f\n", 7. / 4);
//	printf("%d\n", 12 / 3 * 2);		//��������
//	return 0;
//}


//5.7 rules.c  ���ȼ�����
//#include <stdio.h>
//int main(void)
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//	return 0;
//}


//5.8 sizeof.c  ʹ��sizeof�����
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


//5.9 min_sec.c  ������ת���ɷֺ���
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
//	scanf("%d", &sec);		//��ȡ����
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;	//�ضϷ�����
//		left = sec % SEC_PER_MIN;	//ʣ�µ�����
//		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
//		printf("Enter next value (<= 0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//
//	return 0;
//}


//������ģ������ضϣ�
//��׼�涨����a, b�������������ͨ��a - (a / b) * b  ������a % b
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


//5.10 add_one.c  ������ǰ׺�ͺ�׺
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


//5.11 post_pre.c  ǰ׺�ͺ�׺
//#include <stdio.h>
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post = 0, pre_b = 0;
//	
//	a_post = a++;		//��׺����
//	pre_b = ++b;		//ǰ׺����
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


//�����͵ݼ���������ȼ�ֻ����Բ����
//ÿ�����ʽ����һ��ֵ,���ʽq = 5 * 2��Ϊһ�������ֵ��10,���ʽ5 * 2��ֵΪ10 
//5.13 addemup.c  ���ֳ��������
//#include <stdio.h>
//int main(void)
//{
//	int count, sum;			//����
//	count = 0;				//���ʽ���
//	sum = 0;				//���ʽ���
//	while (count++ < 20)	//�������
//	{
//		sum += count;		//���ʽ���
//	}
//	printf("sum = %d\n", sum);//���ʽ���
//	return 0;				//��ת���
//}


//5.14 convert.c  �Զ�����ת��
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


//5.15 pound.c  ����һ���������ĺ���
//#include <stdio.h>
//void pound(int n);		//����ԭ������
//int main(void)
//{
//	int times = 5;
//	char ch = '!';		//ASCII����33
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
//const int S_PER_M = 60;				//1���ӵ�����
//const int S_PER_H = 3600;			//1Сʱ�ķ�����
//const double M_PER_K = 0.62137;		//1�����Ӣ����
//int main(void)
//{
//	double distk, distm;	//�ܹ��ľ��루���Ӣ�
//	double rate;			//ƽ���ٶȣ�Ӣ��/Сʱ��
//	int min, sec;			//�ܲ���ʱ�����ӣ��룩
//	int time;				//�ܲ���ʱ���룩
//	double mtime;			//��һӢ���ʱ�䣨�룩
//	int mmin, msec;			//��һӢ���ʱ�䣨���ӣ��룩
//	printf("This program convert your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk);		//%lf��ʾ��ȡdouble���͵�ֵ
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//	time = S_PER_M * min + sec;		//��ʱ��ת������
//	distm = M_PER_K * distk;		//�ѹ���ת����Ӣ��
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


//5.11  1.�������ת����Сʱ����  whileѭ�� С��/����0ʱֹͣѭ��
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


//2. ��������������������ӵ�ʮ����������5�����5-15��
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


//3.  �����������������������������18�����2��4�죩
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


//4.  ������ߣ�cm��,�����׺�Ӣ����ʾ��ֵ��������С�����֡�
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


//5.�޸�5.13
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


//6.�ı����5��ʹ���ܼ���������ƽ����
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


//7.���һ����������ӡdouble���͵�����ֵ
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


//8.����ĵ�һ����������ģ������ĵڶ����������֮������Ķ��ǵ�һ���������
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


//9. ���뻪���¶�(double),����Temperatures()(���������¶ȺͿ����¶�)
//�����¶� = 5.0 / 9.0 * (�����¶� - 32.0)
//�����¶� = �����¶� + 273.16
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
//	printf("�����¶ȣ� %.2f\n", t);
//	printf("�����¶�:  %.2f\n", t1);
//	printf("�����¶�   %.2f\n", t2);
//}
