#define _CRT_SECURE_NO_WARNINGS 1
//4.1  talkback.c   演示与用户交互
//#include <stdio.h>
//#include <string.h>			//strlen()函数的原型
//#define DENSITY 62.4f		//人体密度（单位：磅/立方英尺）
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];			//name: 可容纳40个字符的数组
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);		//%s: 字符串，数组name前无&
//	printf("%s, what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
//	printf("Also, your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}


//4.2  praise1.c   使用不同类型的字符串
//#include <stdio.h>
//#define PRAISE "You are extraordinary being."
//int main(void)
//{
//	char name[40];
//
//	printf("What's your name?");
//	//scanf()在遇到第一个空白(空格、制表符、换行符)时就不再读取输入
//	//如输入Angela Plains就只读取了Angela，%s scanf()只能读取第一个单词
//	scanf("%s", name);
//	printf("Hello, %s.%s\n", name, PRAISE);
//	
//	return 0;
//}


//4.3 praise2.c
//#include <stdio.h>
//#include <string.h>
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello, %s.%s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",
//			strlen(name), sizeof(name));
//	//strlen(name):输入的字符串长度   可以用%zd或者(%u %ul)（早期的C）
//	//sizeof(name):name数组长度
//	printf("The phrase of praise has %zd letters", strlen(PRAISE));
//	//strlen(PRAISE) = 31
//	printf("and occupies %zd memeory cells.\n", sizeof(PRAISE));
//	//sizeof(PRAISE) = 32 ,比strlen(name)多1，即'\0'
//	return 0;
//}


//4.4 pizza.c   在披萨饼程序中使用已定义的常量
//#include <stdio.h>
//#define PI 3.14159f
//int main(void)
//{
//	float area, circum, radius;
//
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0f * PI * radius;
//	printf("Your basic pizza paramenters are as follows:\n");
//	printf("circumferences = %1.2f, area = %1.2f\n", circum, area);
//
//	return 0;
//}


//4.5 define.c  使用limits.h和float.h头文件中定义的明示变量
//#include <stdio.h>
//#include <limits.h>			//整型限制
//#include <float.h>			//浮点型限制
//int main(void)
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest longlong: %lld\n", LLONG_MAX);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//	return 0;
//}


//4.6 printout.c   使用转换说明
//#include <stdio.h>
//#define PI 3.141593
//int main(void)
//{
//	int number = 7;
//	float pies = 12.75f;
//	int cost = 7800;
//
//	printf("The %d contestants ate %f berry pies.\n", number, pies);
//	printf("The value fo pi is %f.\n", PI);
//	printf("Farewell! thou atr too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);
//
//	return 0;
//}


//4.7 width.c   字段宽度
//#include <stdio.h>
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);		//右对齐
//	printf("*%-10d*\n", PAGES);		//左对齐
//	return 0;
//}


//4.8 floats.c   一些浮点型修饰符的组合
//#include <stdio.h>
//int main(void)
//{
//	const double RENT = 3852.99;
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);//3853.0  四舍五入
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);//3.853E+03  四舍五入
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);//空格用0补齐
//	return 0;
//}


//4.9 flags.c  演示一些格式标记
//#include <stdio.h>
//int main(void)
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	//1f 1F 0x1f
//	printf("**%d**% d**% d**\n", 42, 42, -42);	//% d若为正数有空格，负数没有
//	//**42** 42**-42**
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//	//**    6**  006**00006**  006**
//	return 0;
//}


//4.10 stringf.c   字符串格式
//#include <stdio.h>
//#define BLURB "Authentic imitation!"
//int main(void)
//{
//	printf("[%2s]\n", BLURB);		//[Authentic imitation!]
//	printf("[%24s]\n", BLURB);		//[    Authentic imitation!]
//	printf("[%24.5s]\n", BLURB);	//[                   Authe]
//	printf("[%-24.5s]\n", BLURB);	//[Authe                   ]
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char name[40] = { 0 };
//	float cash = 0.0f;
//
//	printf("NAME: ");
//	scanf("%s", &name);
//	printf("cash: ");
//	scanf("%f", &cash);
//	//小数点也占一位 用 456.23，%07.2f,出现0456.23
//	printf("The %s family just may be $%6.2f richer!\n", name, cash);
//
//	return 0;
//}


//4.11 intconv.c程序  一些不匹配的整型转换
//#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//
//	printf("num as short and unsigned short； %hd %hu\n", num, num);
//	printf("-num as short and unsigned short； %hd %hu\n", mnum, mnum);
//	//%c:一字节，num>256,只读取后一字节,num % 256 = 80
//	printf("num as int and char: %d %c\n", num, num);
//	//%hd:WORDS % 65536 = 82
//	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
//
//	return 0;
//}


//4.12 floatcnv.c  不匹配的浮点型转换
//#include <stdio.h>
//int main(void)
//{
//	float n1 = 3.0f;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//	return 0;
//}


//4.13 prntval.c   printf()的返回值
//#include <stdio.h>
//int main(void)
//{
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);//212是3个字符
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}


//4.14 longstrg.c  打印较长的字符串
//#include <stdio.h>
//int main(void)
//{
//	printf("Here's one way to print a ");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//long string.\n");
//	printf("Here's the newest way to print a "
//		   "long string.\n");
//	return 0;
//}


//4.15 input.c  何时使用&
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//
//	printf("Enter your age, aeests, and favourite pet.\n");
//	scanf("%d %f", &age, &assets);
//	scanf("%s", pet);		//数组前不用加&
//	printf("%d $%.2f %s\n", age, assets, pet);
//
//	return 0;
//}


//4.16 varwid.c  使用变宽输出字段  printf() %*d
//#include <stdio.h>
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is: %*d: \n", width, number);
//	printf("Now enter a width and a precision: \n");
//	scanf("%d%d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//
//	return 0;
//}


//4.17 skip2.c  跳过输入中的前两个整数  scanf() %*d
//#include <stdio.h>
//int main(void)
//{
//	int n;
//
//	printf("Please  enter three integers:\n");
//	scanf("%*d%*d%d", &n);
//	printf("The last integer was %d\n", n);
//
//	return 0;
//}


//4.8  1.输入 名和姓，输出“姓，名”
//#include <stdio.h>
//int main(void)
//{
//	char name1[20], name2[20];
//	printf("Enter your first name: \n");
//	scanf("%s", name1);
//	printf("Enter your last name: \n");
//	scanf("%s", name2);
//	printf("%s,%s\n", name2, name1);
//	return 0;
//}


//2.输入姓名
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char name[20];
//	printf("Enter your name:\n");
//	scanf("%s", name);
//	//a.输出姓名和双引号
//	printf("Name: \"%s\"\n", name);
//	//b.宽度20，右端打印
//	printf("Name: \"%20s\"\n", name);
//	//c.宽度20，左端打印
//	printf("Name: \"%-20s\"\n", name);
//	//d.在比姓名宽度宽3的字段中打印姓名
//	printf("Name: \"%*s\"\n", (int)strlen(name) + 3, name);
//	return 0;
//}


//3.输入浮点数，以小数点计数法和指数计数法打印
//#include <stdio.h>
//int main(void)
//{
//	float f1, f2;
//	printf("Enter the floating-point number: \n");
//	scanf("%f", &f1);
//	scanf("%f", &f2);
//	//a
//	printf("%g\n", f1);
//	printf("%.1e\n", f1);
//	//b
//	printf("%+.3f\n", f2);
//	printf("%.3E\n", f2);
//	return 0;
//}


//4.输入身高和姓名,1m = 100cm
//#include <stdio.h>
//int main(void)
//{
//	char name[40] = { 0 };
//	float height = 0.0f;
//
//	printf("Enter your name: \n");
//	scanf("%s", name);
//	printf("Enter your height: \n");
//	scanf("%f", &height);
//	printf("%s, you are %g m tall.\n", name, height / 100);
//
//	return 0;
//}


//5.输入下载速度(Mb/s),文件大小(MB),1B = 8b,输出时间
//#include <stdio.h>
//int main(void)
//{
//	float speed, size, time;
//
//	printf("Enter the downloading speed: \n");
//	scanf("%f", &speed);
//	printf("Enter the file size: \n");
//	scanf("%f", &size);
//	time = size * 8 / speed;
//	printf("At %.2f megabits per second, a file of %.2f ", speed, size);
//	printf("megabytes downloads in %.2f seconds.\n", time);
//
//	return 0;
//}


//6.输入两个单词，分别在单词的左端和右端打印单词长度
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char word1[40] = { 0 };
//	char word2[40] = { 0 };
//	int len1 = 0;
//	int len2 = 0;
//
//	printf("Enter two words: \n");
//	scanf("%s%s", word1, word2);
//	len1 = (int)strlen(word1);
//	len2 = (int)strlen(word2);
//	printf("%s %s\n", word1, word2);
//	printf("%*d %*d\n", len1, len1, len2, len2);
//	printf("%s %s\n", word1, word2);
//	printf("%-*d %-*d\n", len1, len1, len2, len2);
//
//	return 0;
//}


//7. float double 1.0/3.0 显示小数点后6/12/18位数字 <float.h> FIL_DIG DBL_DIG
//#include <stdio.h>
//#include <float.h>
//int main(void)
//{
//	float num1 = 1.0f / 3.0f;
//	double num2 = 1.0 / 3.0;
//
//	printf("num1: %.6f\n", num1);
//	printf("num1: %.12f\n", num1);
//	printf("num1: %.18f\n", num1);
//	printf("num2: %.6f\n", num2);
//	printf("num2: %.12f\n", num2);
//	printf("num2: %.18f\n", num2);
//	printf("FLT_DIG: %d\n", FLT_DIG);
//	printf("DBL_DIG: %d\n", DBL_DIG);
//
//	return 0;
//}


//8. 1 gallon = 3.785 litre, 1 mile = 1.609 km, mile / gallon - litre / 100 km
//#define GALLON 3.758
//#define MILE 1.609
//#include <stdio.h>
//int main(void)
//{
//	double mile = 0;
//	double gallon = 0;
//
//	printf("Enter your miles: \n");
//	scanf("%lf", &mile);
//	printf("Enter your gallons: \n");
//	scanf("%lf", &gallon);
//	printf("%.1f mile / gallon\n", mile / gallon);
//	printf("%.1f litre / 100 km\n", gallon * GALLON / (mile * MILE) / 100);
//
//	return 0;
//}