#define _CRT_SECURE_NO_WARNINGS 1
//7.1 colddays.c  0��C���µ�����ռ�������İٷֱ�
//#include <stdio.h>
//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature = 0.0f;
//	int cold_days = 0;
//	int all_days = 0;
//
//	printf("Enter the list of daily low temperature.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//		{
//			cold_days++;
//		}
//	}
//	if (all_days != 0)
//	{
//		printf("%d days total: %.1f%% were below freezing.\n",
//			all_days, 100.0 * (float)cold_days / all_days);
//	}
//	else
//	{
//		printf("No data entered!\n");
//	}
//
//	return 0;
//}


//7.2 ctype.c  �������룬�ո񲻱�
//#include <stdio.h>
//#define SPACE ' '
//int main(void)
//{
//	char ch = 0;
//	//ch = getchar();				//��ȡһ���ַ�
//
//	while ((ch = getchar()) != '\n')
//	//while (ch != '\n')
//	{
//		if (ch == SPACE)
//		{
//			putchar(ch);		// ' '����
//		}
//		else
//		{
//			putchar(ch + 1);	//�����һ���ַ�
//		}
//		//ch = getchar();			//��ȡ��һ���ַ�
//	}
//	putchar(ch);				//��ӡ���з�
//
//	return 0;
//}


//7.3 cypher2.c  �滻����Ĵ��룬����ĸ�ַ����ֲ���
//#include <stdio.h>
//#include <ctype.h>				//����isalpha()�ĺ���ԭ��
//int main(void)
//{
//	char ch = 0; 
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))		//�ж�ch�Ƿ����ַ�	
//		{
//			putchar(ch + 1);
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	putchar(ch);				//���з�
//
//	return 0;
//}


//7.4 electric.c  ������
//#include <stdio.h>
//#define RATE1 0.13230      //�״�ʹ��360kwh�ķ���
//#define RATE2 0.15040      //����ʹ��108kwh�ķ���
//#define RATE3 0.30025      //����ʹ��252kwh�ķ���
//#define RATE4 0.34025      //ʹ�ó���720kwh�ķ���
//#define BREAK1 360.0       //���ʵĵ�һ���ֽ��
//#define BREAK2 468.0       //���ʵĵڶ����ֽ��
//#define BREAK3 720.0       //���ʵĵ������ֽ��
//#define BASE1 (RATE1 * BREAK1)								//ʹ��360kwh�ķ���
//#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))			//ʹ��468kwh�ķ���
//#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))	//ʹ��720kwh�ķ���
//int main(void)
//{
//	double kwh = 0;
//	double bill = 0;
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);
//	if (kwh <= BREAK1)
//	{
//		bill = RATE1 * kwh;
//	}
//	else if (kwh <= BREAK2)
//	{
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	}
//	else if (kwh <= BREAK3)
//	{
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	}
//	else
//	{
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	}
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}


//else ����������ifƥ��
//#include <stdio.h>
//int main(void)
//{
//	int number = 0;
//	scanf("%d", &number);
//	if (number > 6)
//	if (number < 12)
//		printf("You're close!\n");
//	else
//		printf("Sorry, you lose a turn!\n");
//	return 0;
//}


//7.5 divisors.c  ʹ��Ƕ��if�����ʾһ������Լ��
//�ó�����1��������
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	unsigned long num = 0;
//	unsigned long div = 0;
//	bool isPrime = false;
//
//	printf("Please enter an integer for analysis: \n");
//	printf("(Enter q to quit.)\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; div * div <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if (div * div != num)
//				{
//					printf("%lu is divisible by %lu and %lu.\n",
//						num, div, num / div);
//				}
//				else
//				{
//					printf("%lu is divisible by %lu.\n",
//						num, div);
//				}
//				isPrime = false;
//			}
//		}
//		if (isPrime)
//		{
//			printf("%lu is prime.\n", num);
//		}
//		printf("Please enter another integer for analysis: \n");
//		printf("(Enter q to quit.)\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}


//7.6 chcount.c ʹ���߼��������
//�߼�����������ȼ��ȹ�ϵ������ͣ����ü�Բ����
//#include <stdio.h>
//#define PERIOD '.'
//int main(void)
//{
//	char ch = 0;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//		{
//			charcount++;
//		}
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//
//	return 0;
//}


// !�����ȼ��ܸߣ��ȳ˷�������ߣ��͵����������ͬ��ֻ��Բ���ŵ����ȼ���
//&&�����ȼ���||�����ȼ��ߣ����ȹ�ϵ��������ȼ��ͣ��ȸ�ֵ����������ȼ���
//�߼����ʽ����ֵ˳���Ǵ������ҽ���


//7.7 wordcnt.c  ͳ���ַ�����������������
//#include <stdio.h>
//#include <stdbool.h>		//Ϊisspace()�����ṩԭ��
//#include <ctype.h>			//Ϊbool��true��false�ṩ����
//#define STOP '|'
//int main(void)
//{
//	char c = 0;
//	char prev = 0;					//�����ǰһ���ַ�
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;				//������������
//	bool inword = false;
//
//	printf("Enter text to be analyzed ( | to be terminate):\n");
//	prev = '\n';					//����ʶ����������
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//		{
//			n_lines++;
//		}
//		if (!isspace(c) && !inword)
//		{
//			inword = true;		//��ʼһ���µĵ���
//			n_words++;
//		}
//		if (isspace(c) && inword)
//		{
//			inword = false;		//�ﵽ���ʵ�ĩβ
//		}
//		prev = c;			//�����ַ���ֵ
//	}
//
//	if (prev != '\n')
//	{
//		p_lines = 1;
//	}
//	printf("characters = %ld, words = %d, lines = %d, partial lines = %d\n",
//		n_chars, n_words, n_lines, p_lines);
//
//	return 0;
//}


//7.8 paint.c  ʹ�����������
//#include <stdio.h>
//#define COVERAGE 350		//ÿ�������ˢ�����
//int main(void)
//{
//	int sq_feet = 0;
//	int cans = 0;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
//		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//
//	return 0;
//}


//7.9 skippart.c  ʹ��continue��������ѭ��
//#include <stdio.h>
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//	float score = 0.0f;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX; 
//	float max = MIN;
//
//	printf("Enter the first score (q to quit):\n");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score < MIN || score > MAX)
//		{
//			printf("%0.1f is an invalid value.Try again:\n", score);
//			continue;
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit):\n");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	}
//	else
//	{
//		printf("No valid scores were entered.\n");
//	}
//
//	return 0;
//}


//continue��ѭ���д��Ŀ�ʼ
//��whileѭ���У�ִ��continue����һ������ֵ�ı��ʽ��ѭ����������
//#include <stdio.h>
//int main(void)
//{
//	int count = 0;
//	char ch = 0;
//	while (count < 10)
//	{
//		ch = getchar();
//		if (ch == '\n')
//		{
//			continue;
//		}
//		putchar(ch);
//		count++;
//	}
//
//	return 0;
//}


//forѭ����ִ��continue�����һ���ǶԸ��±��ʽ��ֵ��Ȼ���Ƕ�ѭ�����ʽ��ֵ
//#include <stdio.h>
//int main(void)
//{
//	int count = 0;
//	char ch = 0;
//
//	for (count = 0; count < 10; count++)
//	{
//		ch = getchar();
//		if (ch == '\n')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//7.10 break.c  ʹ��break�˳�ѭ��
//#include <stdio.h>
//int main(void)
//{
//	float length = 0.0f;
//	float width = 0.0f;
//	
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//		{
//			break;
//		}
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f;\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//
//	return 0;
//}


//Ƕ���ڲ�ѭ����breakֻ���ó����������ĵ�ǰѭ��
//#include <stdio.h>
//int main(void)
//{
//	int p = 0;
//	int q = 0;
//
//	printf("p:");
//	scanf("%d", &p);
//	while (p > 0)
//	{
//		printf("q:");
//		scanf("%d", &q);
//		while (q > 0)
//		{
//			printf("p*q:%d\n", p * q);
//			if (q > 100)
//			{
//				break;			//�����ڲ�ѭ��
//			}
//			printf("q:");
//			scanf("%d", &q);
//		}
//		if (p > 100)
//		{
//			break;			//�������ѭ��
//		}
//		printf("p:");
//		scanf("%d", &p);
//	}
//
//	return 0;
//}


//7.11 animals.c  ʹ��switch���
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch = 0;
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter;type # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//		{
//			continue;			//��������ĵ�һ���ַ�����Enter�����
//		}
//		if (islower(ch))
//		{
//			switch (ch)
//			{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild piig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//				break;
//			}
//		}
//		else
//		{
//			printf("I recognize only lowercase letters.\n");
//		}
//		//while (getchar() != '\n')
//		//{
//		//	continue;			//���������е����ಿ�֣��ó���ֻ��ȡ��һ���ַ�
//		//}
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//
//	return 0;
//}


//7.12 vowels.c  ʹ�ö��ر�ǩ
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch = 0;
//	int a_ct = 0;
//	int e_ct = 0;
//	int i_ct = 0;
//	int o_ct = 0;
//	int u_ct = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (toupper(ch))
//		{
//		//case 'a':
//		case 'A':
//			a_ct++;
//			break;
//		//case 'e':
//		case 'E':
//			e_ct++;
//			break;
//		//case 'i':
//		case 'I':
//			i_ct++;
//			break;
//		//case 'o':
//		case 'O':
//			o_ct++;
//			break;
//		//case 'u':
//		case 'U':
//			u_ct++;
//			break;
//		default:
//			break;
//		}
//	}
//	printf("number of vowels: A E I O U\n");
//	printf("\t\t%3d%2d%2d%2d%2d\n", a_ct, e_ct, i_ct, o_ct, u_ct);
//
//	return 0;
//}


//7.12  1.��ȡ���룬#ֹͣ������ո��������з��������������ַ�������
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch = 0;
//	int space = 0;
//	int line = 0;
//	int other = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			space++;
//		}
//		else if (ch == '\n')
//		{
//			line++;
//		}
//		else
//		{
//			other++;
//		}
//	}
//	printf("space = %d,line = %d, other = %d\n", space, line, other);
//
//	return 0;
//}


//2. ��ȡ���룬#����������ַ���ASCII��(ʮ����)��һ�д�ӡ8���ַ�
//ʹ���ַ�������%��ÿ8��ѭ������ʱ��ӡһ�����з�
//#include <stdio.h>
//int main(void)
//{
//	int count = 0;
//	char ch = 0;
//
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		count++;
//		if (count % 8)
//		{
//			printf("%3c:%3d", ch, ch);
//		}
//		else
//		{
//			printf("%3c:%3d", ch, ch);
//			putchar('\n');
//		}
//	}
//	putchar('\n');
//
//	return 0;
//}


//#include <stdio.h>
//#define CHAR_PER_LINE 8
//int main(void)
//{
//	char ch = 0;
//	int n_char = 1;
//
//	printf("Enter some characters(# to quit):\n");
//	while ((ch = getchar()) != '#')
//	{
//		printf("%3c(%3d)", ch, ch);
//		if (n_char++ % CHAR_PER_LINE == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//	return 0;
//}


//3.��ȡ������0ֹͣ�����ż��/����������ż��/����ƽ��ֵ��ż��������0
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int odd = 0;
//	int even = 0;
//	float odd_sum = 0;
//	float even_sum = 0;
//
//	while (scanf("%d", &n) != 0)
//	{
//		if (0 == n)
//		{
//			break;
//		}
//
//		if (n % 2)
//		{
//			odd++;
//			odd_sum += n;
//		}
//		else
//		{
//			even++;
//			even_sum += n;
//		}
//	}
//	printf("odd number:%d,odd average:%.2f\n", odd, odd_sum / odd);
//	printf("even number:%d,even average:%.2f\n", even, even_sum / even);
//
//	return 0;
//}


//4.if else ��ȡ���룬# ֹͣ, '!' �滻 '.', '!!'�滻'!'�������滻����
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if ('.' == ch)
//		{
//			putchar('!');
//			count++;
//		}
//		else if ('!' == ch)
//		{
//			printf("!!");
//			count++;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	printf("count: %d\n", count);
//	return 0;
//}


//5. ��switch��д4
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case '!':
//			printf("!!");
//			count++;
//			break;
//		case '.':
//			putchar('!');
//			count++;
//			break;
//		default:
//			putchar(ch);
//			break;
//		}
//	}
//	printf("count: %d\n", count);
//
//	return 0;
//}


//6.��ȡ���룬#ֹͣ, ����ei���ֵĴ���
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	int count = 0;
//	char pre = 0;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (pre == 'e' && ch == 'i')
//		{
//			count++;
//		}
//		pre = ch;
//	}
//	printf("The number of ei: %d\n", count);
//
//	return 0;
//}


//7.��ʾ�û�����һ�ܹ�����Сʱ������ӡ�����ܶ˰��;�����
//a.�������� = 1000��Ԫ/Сʱ
//b.�Ӱ�(����40Сʱ) = 1.5����ʱ��
//c.˰�ʣ�ǰ300��ԪΪ15%����150��ԪΪ20%�����µ�Ϊ25%
//#define BASIC 1000
//#define BASIC_HOURS 40
//#define BASIC_SALARY 1000 * BASIC_HOURS
//#define ADD_PER_HOUR 1.5 * 1000
//#define TAX_RATE_1 0.15
//#define TAX_RATE_2 0.2
//#define TAX_RATE_3 0.25
//#define TAX_1 300
//#define TAX_2 TAX_1 + 150
//#define SALARY_TAX_1 0.15 * TAX_1
//#define SALARY_TAX_2 SALARY_TAX_1 + 0.2 * 150
//#include <stdio.h>
//int main(void)
//{
//	double work_hours = 0;
//	double salary = 0;
//	double net_income = 0;
//	double tax = 0;
//
//	printf("Enter your work hours every week: ");
//	while (scanf("%lf", &work_hours) == 1)
//	{
//		if (work_hours <= BASIC_HOURS)
//		{
//			salary = BASIC * work_hours;
//		}
//		else 
//		{
//			salary = BASIC_SALARY + ADD_PER_HOUR * (work_hours - BASIC_HOURS);
//		}
//
//		if (salary <= TAX_1)
//		{
//			tax = salary * TAX_RATE_1;
//
//		}
//		else if (salary <= TAX_2)
//		{
//			tax = SALARY_TAX_1 + (salary - TAX_1) * TAX_RATE_2;
//		}
//		else
//		{
//			tax = SALARY_TAX_2 + (salary - TAX_2) * TAX_RATE_3;
//		}
//
//		net_income = salary - tax;
//		printf("salary: %.2f\ntax: %.2f\nnet_income: %.2f\n",
//			salary, tax, net_income);
//	}
//
//	return 0;
//}


//8.��ʾ�û�����һ�ܹ�����Сʱ������ӡ�����ܶ˰��;�����
//a.��ѡ��Ĺ���[1]8.75/hr[2]9.33/hr[3]10.00/hr[4]11.20/hr[5]quit(switch���)
//b.�Ӱ�(����40Сʱ) = 1.5����ʱ��
//c.˰�ʣ�ǰ300��ԪΪ15 % ����150��ԪΪ20 % �����µ�Ϊ25 %
//#define BASIC_1 8.75
//#define BASIC_2 9.33
//#define BASIC_3 10.00
//#define BASIC_4 11.20
//#define BASIC_HOURS 40
//#define BASIC_SALARY_1 BASIC_1 * BASIC_HOURS
//#define BASIC_SALARY_2 BASIC_2 * BASIC_HOURS
//#define BASIC_SALARY_3 BASIC_3 * BASIC_HOURS
//#define BASIC_SALARY_4 BASIC_4 * BASIC_HOURS
//#define ADD_PER_HOUR_1 1.5 * BASIC_1
//#define ADD_PER_HOUR_2 1.5 * BASIC_2
//#define ADD_PER_HOUR_3 1.5 * BASIC_3
//#define ADD_PER_HOUR_4 1.5 * BASIC_4
//#define TAX_RATE_1 0.15
//#define TAX_RATE_2 0.2
//#define TAX_RATE_3 0.25
//#define TAX_1 300
//#define TAX_2 TAX_1 + 150
//#define SALARY_TAX_1 0.15 * TAX_1
//#define SALARY_TAX_2 SALARY_TAX_1 + 0.2 * 150
//#include <stdio.h>
//int main(void)
//{
//	double work_hours = 0;
//	double salary = 0;
//	double net_income = 0;
//	double tax = 0;
//	int ch = 0;
//	double basic = 0;
//	double basic_salary = 0;
//	double add_per_hour = 0;
//	printf("Enter your work choice(1,2,3,4)(Enter 5 to quit): ");
//	scanf("%d", &ch);
//	restart:
//	while (ch != 5)
//	{
//		switch (ch)
//		{
//		case 1:
//			basic = BASIC_1;
//			basic_salary = BASIC_SALARY_1;
//			add_per_hour = ADD_PER_HOUR_1;
//			break;
//		case 2:
//			basic = BASIC_2;
//			basic_salary = BASIC_SALARY_2;
//			add_per_hour = ADD_PER_HOUR_2;
//			break;
//		case 3:
//			basic = BASIC_3;
//			basic_salary = BASIC_SALARY_3;
//			add_per_hour = ADD_PER_HOUR_3;
//			break;
//		case 4:
//			basic = BASIC_4;
//			basic_salary = BASIC_SALARY_4;
//			add_per_hour = ADD_PER_HOUR_4;
//			break;
//
//		default:
//			printf("Error!\n");
//			printf("Please enter again: ");
//			scanf("%d", &ch);
//			goto restart;
//			break;
//		}
//
//		printf("Enter your work hours:��");
//		scanf("%lf", &work_hours);
//		if (work_hours <= BASIC_HOURS)
//		{
//			salary = basic * work_hours;
//		}
//		else
//		{
//			salary = basic_salary + add_per_hour * (work_hours - BASIC_HOURS);
//		}
//
//		if (salary <= TAX_1)
//		{
//			tax = salary * TAX_RATE_1;
//
//		}
//		else if (salary <= TAX_2)
//		{
//			tax = SALARY_TAX_1 + (salary - TAX_1) * TAX_RATE_2;
//		}
//		else
//		{
//			tax = SALARY_TAX_2 + (salary - TAX_2) * TAX_RATE_3;
//		}
//
//		net_income = salary - tax;
//		printf("salary: %.2f\ntax: %.2f\nnet_income: %.2f\n",
//			salary, tax, net_income);
//
//		printf("Enter your work choice(1,2,3,4)(Enter 5 to quit): ");
//		scanf("%d", &ch);
//
//	}
//	return 0;
//}


//9.ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ���������
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	int num = 8;
//	int i = 0;
//	int j = 0;
//	bool flag = false;
//	printf("Enter the number: ");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num <= 0)
//		{
//			printf("Please enter again: ");
//			continue;
//		}
//		for (j = 2; j <= num; j++)
//		{
//			for (i = 2; i * i <= j; i++)
//			{
//				flag = false;
//				if (j % i == 0)
//				{
//					flag = true;
//					break;
//				}
//			}
//			if (!flag)
//			{
//				printf("%d\n", j);
//			}
//		}
//		printf("Enter the next number: ");
//	}
//	return 0;
//}


//10.ָ�����ɵ�˰�ѵ������Ӧ��˰����
//#define TAX_RATE_1 0.15
//#define TAX_RATE_2 0.28
//#define SINGLE_1 17850
//#define SINGLE_TAX SINGLE_1 * TAX_RATE_1
//#define OWNER_1 23900
//#define OWNER_TAX OWNER_1 * TAX_RATE_1
//#define MARRIED_1 29750
//#define MARRIED_TAX MARRIED_1 * TAX_RATE_1
//#define DIVORCED_1 14875
//#define DIVORCED_TAX DIVORCED_1 * TAX_RATE_1
//#include <stdio.h>
//int main(void)
//{
//	int kind = 0;
//	double salary = 0.0;
//	double tax = 0.0;
//	double tax_point = 0.0;
//	double kind_tax_1 = 0.0;
//
//	printf("Enter your kind of taxpayer: (1/2/3/4): ");
//	restart:
//	while (scanf("%d", &kind) == 1)
//	{
//		switch (kind)
//		{
//		case 1:
//			tax_point = SINGLE_1;
//			kind_tax_1 = SINGLE_TAX;
//			break;
//		case 2:
//			tax_point = OWNER_1;
//			kind_tax_1 = OWNER_TAX;
//			break;
//		case 3:
//			tax_point = MARRIED_1;
//			kind_tax_1 = MARRIED_TAX;
//			break;
//		case 4:
//			tax_point = DIVORCED_1;
//			kind_tax_1 = DIVORCED_TAX;
//			break;
//		default:
//			printf("Please enter again: ");
//			goto restart;
//			break;
//		}
//
//		printf("Enter your salary: ");
//		scanf("%lf", &salary);
//		if (salary <= tax_point)
//		{
//			tax = salary * TAX_RATE_1;
//		}
//		else
//		{
//			tax = kind_tax_1 + (salary - tax_point) * TAX_RATE_2;
//		}
//		printf("tax: %.2f\n", tax);
//		printf("Enter next kind of taxpayer: ");
//	}
//	return 0;
//}


//11.
//#define PER_POUND_A 2.05
//#define PER_POUND_B 1.15
//#define PER_POUND_C 1.09
//#define COST_1 6.5
//#define POUND_1 5
//#define COST_2 14
//#define POUND_2 20
//#define ADD_COST 0.5
//
//#include<stdio.h>
//int main(void)
//{
//	char ch = 0;
//	double pound = 0.0;
//	double sumpound = 0.0;
//	double cost = 0.0;
//	double per_pound = 0.0;
//	double discount = 0.0;
//	printf("Enter the kind of food: ");
//	while ((ch = getchar()) != 'q')
//	{
//		if (ch != 'a' && ch != 'b' && ch != 'c')
//		{
//			continue;
//		}
//		switch (ch)
//		{
//		case 'a':
//			per_pound = PER_POUND_A;
//			printf("Per_pound: %.2f\n", PER_POUND_A);
//			break;
//		case 'b':
//			per_pound = PER_POUND_B;
//			printf("Per_pound: %.2f\n", PER_POUND_B);
//			break;
//		case 'c':
//			per_pound = PER_POUND_C;
//			printf("Per_pound: %.2f\n", PER_POUND_C);
//			break;
//		default:
//			break;
//		}
//		printf("Enter your pound: ");
//		while (scanf("%lf", &pound) == 1)
//		{
//			if (ch == 'a')
//			{
//				cost += PER_POUND_A * pound;
//			}
//			else if (ch == 'b')
//			{
//				cost += PER_POUND_B * pound;
//			}
//			else if (ch == 'c')
//			{
//				cost += PER_POUND_C * pound;
//			}
//			if (cost >= 100.0)
//			{
//				discount = cost * 0.05;
//				cost = cost - discount;
//			}
//			if (pound <= POUND_1)
//			{
//				cost += COST_1;
//			}
//			else if (pound <= POUND_2)
//			{
//				cost += COST_2;
//			}
//			else
//			{
//				cost = cost + COST_2 + ADD_COST * (pound - POUND_2);
//			}
//			break;
//		}
//		sumpound += pound;
//
//		printf("Enter the kind of food: ");
//	}
//	printf("Pound:%.2f\nCost:%.2f\nDiscount:%.2f\n", sumpound, cost, discount);
//
//	return 0;
//}