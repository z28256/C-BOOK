#define _CRT_SECURE_NO_WARNINGS 1
//3.1 platinum.c  your weight in platinum���׽�
//#include <stdio.h>
//int main(void)
//{
//	float weight;		//����
//	float value;		//��������İ׽��ֵ
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	//��ȡ�û�����
//	scanf("%f", &weight);		
//	value = 1700.0f * weight * 14.5833f;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum price drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}


//3.2 print1.c   ��ʾprintf()��һЩ����
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten);		//������©
//	return 0;
//}


//3.3bases.c  ��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100
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


//toobig.c   ����ϵͳ��������intֵ
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


//3.4 print2.c  ����print()������
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
//	printf("big = %ld and not %hd\n", big, big);		     //%hd:ֻ�鿴��16λ
//	printf("verybig = %lld and not %ld\n", verybig, verybig);//%ld:ֻ��ʾ��32λ    
//
//	return 0;
//}


//ֻ�����E,��Ϊcharֻռһ���ֽ�,32λ��ֻ�����8λ��Ч
//#include <stdio.h>
//int main(void)
//{
//    char grade = 'FATE';
//    printf("grade = %c\n", grade);
//    return 0;
//}

//�Ǵ�ӡ�ַ�
//#include <stdio.h>
//int main(void)
//{
//	//1.ASCII��
//	char beep = 7;		//�����ַ���ASCIIֵ��7��
//	//2.ת������
//	char nerf = '\n';
//	printf("Gramps sez, \"a \\is a backslash.\"\n");
//	char beep2 = '\007';	//�������˽��ƣ�
//	char Ctrl_P = '\x10';	//Ctrl + P�ַ���ASCIIʮ�����Ʊ�����10  
//	char Ctrl_P2 = '\x010';
//	return 0;
//}
	

//3.5 charcode.c   ��ʾ�ַ��Ĵ�����
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	return 0;
//}


//3.6 altnames.c  ����ֲ����������
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


//3.7 showf_pt.c   �����ַ�ʽ��ʾfloat���͵�ֵ
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


//floaterr.c   ��ʾ�������
//#include <stdio.h>
//int main(void)
//{
//	float a, b;
//	b = 2.0e20f + 1.0f;
//	a = b - 2.0e20f;
//	printf("%f \n", a);
//	return 0;
//}


//3.8 typesize.c   ��ӡ���ʹ�С
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


//3.9 badcount.c   ������������
//#include <stdio.h>
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);		//����̫��
//	printf("%d %d %d\n", n);	//����̫��
//	printf("%d %d\n", f, g);	//ֵ�����Ͳ�ƥ��
//
//	return 0;
//}


//3.10 escape.c   ʹ��ת������
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


//4.������->С������ʽ/ָ����ʽ/ʮ������
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


//5.����->������һ�꣺3.156e7��
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


//6.һ��ˮ���ӵ�������3.0e-23g,һ����ˮ950g
//������->ˮ������
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


//7. 1Ӣ�磺2.54����
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