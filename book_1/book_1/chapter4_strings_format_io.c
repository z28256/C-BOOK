#define _CRT_SECURE_NO_WARNINGS 1
//4.1  talkback.c   ��ʾ���û�����
//#include <stdio.h>
//#include <string.h>			//strlen()������ԭ��
//#define DENSITY 62.4f		//�����ܶȣ���λ����/����Ӣ�ߣ�
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];			//name: ������40���ַ�������
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);		//%s: �ַ���������nameǰ��&
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


//4.2  praise1.c   ʹ�ò�ͬ���͵��ַ���
//#include <stdio.h>
//#define PRAISE "You are extraordinary being."
//int main(void)
//{
//	char name[40];
//
//	printf("What's your name?");
//	//scanf()��������һ���հ�(�ո��Ʊ�������з�)ʱ�Ͳ��ٶ�ȡ����
//	//������Angela Plains��ֻ��ȡ��Angela��%s scanf()ֻ�ܶ�ȡ��һ������
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
//	//strlen(name):������ַ�������   ������%zd����(%u %ul)�����ڵ�C��
//	//sizeof(name):name���鳤��
//	printf("The phrase of praise has %zd letters", strlen(PRAISE));
//	//strlen(PRAISE) = 31
//	printf("and occupies %zd memeory cells.\n", sizeof(PRAISE));
//	//sizeof(PRAISE) = 32 ,��strlen(name)��1����'\0'
//	return 0;
//}


//4.4 pizza.c   ��������������ʹ���Ѷ���ĳ���
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


//4.5 define.c  ʹ��limits.h��float.hͷ�ļ��ж������ʾ����
//#include <stdio.h>
//#include <limits.h>			//��������
//#include <float.h>			//����������
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


//4.6 printout.c   ʹ��ת��˵��
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


//4.7 width.c   �ֶο��
//#include <stdio.h>
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);		//�Ҷ���
//	printf("*%-10d*\n", PAGES);		//�����
//	return 0;
//}


//4.8 floats.c   һЩ���������η������
//#include <stdio.h>
//int main(void)
//{
//	const double RENT = 3852.99;
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);//3853.0  ��������
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);//3.853E+03  ��������
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);//�ո���0����
//	return 0;
//}


//4.9 flags.c  ��ʾһЩ��ʽ���
//#include <stdio.h>
//int main(void)
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	//1f 1F 0x1f
//	printf("**%d**% d**% d**\n", 42, 42, -42);	//% d��Ϊ�����пո񣬸���û��
//	//**42** 42**-42**
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
//	//**    6**  006**00006**  006**
//	return 0;
//}


//4.10 stringf.c   �ַ�����ʽ
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
//	//С����Ҳռһλ �� 456.23��%07.2f,����0456.23
//	printf("The %s family just may be $%6.2f richer!\n", name, cash);
//
//	return 0;
//}


//4.11 intconv.c����  һЩ��ƥ�������ת��
//#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//
//	printf("num as short and unsigned short�� %hd %hu\n", num, num);
//	printf("-num as short and unsigned short�� %hd %hu\n", mnum, mnum);
//	//%c:һ�ֽڣ�num>256,ֻ��ȡ��һ�ֽ�,num % 256 = 80
//	printf("num as int and char: %d %c\n", num, num);
//	//%hd:WORDS % 65536 = 82
//	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
//
//	return 0;
//}


//4.12 floatcnv.c  ��ƥ��ĸ�����ת��
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


//4.13 prntval.c   printf()�ķ���ֵ
//#include <stdio.h>
//int main(void)
//{
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);//212��3���ַ�
//	printf("The printf() function printed %d characters.\n", rv);
//	return 0;
//}


//4.14 longstrg.c  ��ӡ�ϳ����ַ���
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


//4.15 input.c  ��ʱʹ��&
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//
//	printf("Enter your age, aeests, and favourite pet.\n");
//	scanf("%d %f", &age, &assets);
//	scanf("%s", pet);		//����ǰ���ü�&
//	printf("%d $%.2f %s\n", age, assets, pet);
//
//	return 0;
//}


//4.16 varwid.c  ʹ�ñ������ֶ�  printf() %*d
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


//4.17 skip2.c  ���������е�ǰ��������  scanf() %*d
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


//4.8  1.���� �����գ�������գ�����
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


//2.��������
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char name[20];
//	printf("Enter your name:\n");
//	scanf("%s", name);
//	//a.���������˫����
//	printf("Name: \"%s\"\n", name);
//	//b.���20���Ҷ˴�ӡ
//	printf("Name: \"%20s\"\n", name);
//	//c.���20����˴�ӡ
//	printf("Name: \"%-20s\"\n", name);
//	//d.�ڱ�������ȿ�3���ֶ��д�ӡ����
//	printf("Name: \"%*s\"\n", (int)strlen(name) + 3, name);
//	return 0;
//}


//3.���븡��������С�����������ָ����������ӡ
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


//4.������ߺ�����,1m = 100cm
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


//5.���������ٶ�(Mb/s),�ļ���С(MB),1B = 8b,���ʱ��
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


//6.�����������ʣ��ֱ��ڵ��ʵ���˺��Ҷ˴�ӡ���ʳ���
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


//7. float double 1.0/3.0 ��ʾС�����6/12/18λ���� <float.h> FIL_DIG DBL_DIG
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