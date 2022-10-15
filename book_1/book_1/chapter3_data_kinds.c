#define _CRT_SECURE_NO_WARNINGS 1
//3.1 platinum.c  your weight in platinum（白金）
//#include <stdio.h>
//int main(void)
//{
//	float weight;		//体重
//	float value;		//相等重量的白金价值
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	//获取用户输入
//	scanf("%f", &weight);		
//	value = 1700.0f * weight * 14.5833f;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum price drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}


//3.2 print1.c   演示printf()的一些特性
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten);		//参数遗漏
//	return 0;
//}


//3.3bases.c  以十进制、八进制、十六进制打印十进制书100
//#include <stdio.h>
//int main(void)
//{
//	int x = 100;
//
//	printf("dec = %d; dec = %o; dec = %x\n", x, x, x);
//	printf("dec = %#d; dec = %#o; dec = %#x\n", x, x, x);
//
//	return 0;
//}


//toobig.c   超出系统允许的最大int值
//#include <stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//
//	return 0;
//}


//3.4 print2.c  更多print()的特性
//#include <stdio.h>
//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and not %d\n", end, end);
//	
//	printf("big = %ld and not %hd\n", big, big);		     //%hd:只查看后16位
//	printf("verybig = %lld and not %ld\n", verybig, verybig);//%ld:只显示后32位    
//
//	return 0;
//}


//只会输出E,因为char只占一个字节,32位中只有最后8位有效
//#include <stdio.h>
//int main(void)
//{
//    char grade = 'FATE';
//    printf("grade = %c\n", grade);
//    return 0;
//}

//非打印字符
//#include <stdio.h>
//int main(void)
//{
//	//1.ASCII码
//	char beep = 7;		//蜂鸣字符的ASCII值是7；
//	//2.转义序列
//	char nerf = '\n';
//	printf("Gramps sez, \"a \\is a backslash.\"\n");
//	char beep2 = '\007';	//蜂鸣（八进制）
//	char Ctrl_P = '\x10';	//Ctrl + P字符的ASCII十六进制编码是10  
//	char Ctrl_P2 = '\x010';
//	return 0;
//}
	

//3.5 charcode.c   显示字符的代码编号
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	return 0;
//}


//3.6 altnames.c  可移植整数类型名
//#include <stdio.h>
//#include <inttypes.h>
//int main(void)
//{
//	int32_t me32;
//	me32 = 45933945;
//	
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next, let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);
//	printf("me32 = %" "d" "\n", me32);
//
//	return 0;
//}


//3.7 showf_pt.c   以两种方式显示float类型的值
//#include <stdio.h>
//int main(void)
//{
//	float aboat = 32000.0f;
//	double abet = 2.14e9;
//	long double dip = 5.23e-5;
//
//	printf("%f can be written %e\n.", aboat, aboat);
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//	return 0;
//}


//floaterr.c   演示舍入错误
//#include <stdio.h>
//int main(void)
//{
//	float a, b;
//	b = 2.0e20f + 1.0f;
//	a = b - 2.0e20f;
//	printf("%f \n", a);
//	return 0;
//}


//3.8 typesize.c   打印类型大小
//#include <stdio.h>
//int main(void)
//{
//	printf("Type int has a size of %zd bytes.\n", sizeof(int));
//	printf("Type char has a size of %zd bytes.\n", sizeof(char));
//	printf("Type long has a size of %zd bytes.\n", sizeof(long));
//	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
//	printf("Type double has a size of %zd bytes.\n", sizeof(double));
//	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
//	return 0;
//}


//3.9 badcount.c   参数错误的情况
//#include <stdio.h>
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);		//参数太多
//	printf("%d %d %d\n", n);	//参数太少
//	printf("%d %d\n", f, g);	//值的类型不匹配
//
//	return 0;
//}


//3.10 escape.c   使用转义序列
//#include <stdio.h>
//int main(void)
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//	printf("\rGee!\n1111");
//
//	return 0;
//}


//3.11 
// 2. Enter ASCII 66 -> B
//#include <stdio.h>
//int main(void)
//{
//	int ch;
//
//	printf("Enter number 66: ");
//	scanf("%d", &ch);
//	printf("ch:%c\n", ch);
//
//	return 0;
//}


//3. \a + printf()
//#include <stdio.h>
//int main(void)
//{
//	printf("\aStarted by the sudden sound, Sally shouted,");
//	printf("\"By the Great Pumpkin, what was that!\"\n");
//	return 0;
//}


//4.浮点数->小数点形式/指数形式/十六进制
//#include <stdio.h>
//int main(void)
//{
//	float f;
//
//	printf("Enter a floating-point values: ");
//	scanf("%f", &f);
//	printf("fixed-point notation: %f\n", f);
//	printf("exponential notation: %e\n", f);
//	printf("p notation: %a\n", f);
//
//	return 0;
//}


//5.年龄->秒数（一年：3.156e7）
//#include <stdio.h>
//int main(void)
//{
//	double age, seconds;
//	
//	printf("Enter your age: ");
//	scanf("%lf", &age);
//	seconds = age * 3.156e7;
//	printf("age: %.f => seconds: %.f\n", age, seconds);
//
//	return 0;
//}


//6.一个水分子的质量：3.0e-23g,一夸脱水950g
//夸脱数->水分子数
//#include <stdio.h>
//int main(void)
//{
//	double num_water, num_k;
//	printf("Enter the number of water_k: ");
//	scanf("%lf", &num_k);
//	num_water = num_k * 950 / 3.0e-23;
//	printf("num_water = %f\n", num_water);
//	return 0;
//}


//7. 1英寸：2.54厘米
//#include <stdio.h>
//int main(void)
//{
//	int height_inch;
//	float height_cm;
//	printf("Enter your height in inch: ");
//	scanf("%d", &height_inch);
//	height_cm = 2.54f * height_inch;
//	printf("Height: %f cm", height_cm);
//	return 0;
//}


//8. 1 pint : 2 cups : 16 ounces : 32tablespoons : 96 teaspoons
//#include <stdio.h>
//int main(void)
//{
//	float pint, cup, ounce, tablespoon, teaspoon;
//
//	printf("Enter the number of cups: ");
//	scanf("%f", &cup);
//	pint = cup / 2;
//	ounce = cup * 8;
//	tablespoon = ounce * 2;
//	teaspoon = tablespoon * 3;
//	printf("The number of pint: %f\n", pint);
//	printf("The number of ounce: %f\n", ounce);
//	printf("The number of tablespoon: %f\n", tablespoon);
//	printf("The number of teaspoon: %f\n", teaspoon);
//
//	return 0;
//}