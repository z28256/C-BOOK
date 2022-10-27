#define _CRT_SECURE_NO_WARNINGS 1
//8.1 echo.c  重复输入
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	while ((ch = getchar()) != '#')
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//8.2 echo_eof.c  重复输入，直到文件结尾
//#include <stdio.h>
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//1.重定向输入，文件输入，屏幕输出，< 是重定向运算符
//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe<word.txt
//	wordcc
//E : \github\C - BOOK\book_1\x64\Debug>book_1.exe < E:\ahacode\word.txt
//	wordcc


//2.重定向输出，键盘输入，文件输出，> 是重定向运算符
//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe > E:\ahacode\myword.txt
//You should have no problem recalling.
//QWEQRTYU
//456
//^ Z

//如果文件不存在，会创建新文件
//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe > write.txt
//biqioBLVRQ
//8946848
//^ Z
//
//E : \github\C - BOOK\book_1\x64\Debug > book_1.exe < write.txt
//	biqioBLVRQ
//	8946848


//3.组合重定向，制作write.txt的副本，并命名为savewords
//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe<write.txt>savewords.txt
//
//E : \github\C - BOOK\book_1\x64\Debug > book_1.exe > savewords.txt < write.txt
//重定向运算符不能读取多个文件的输入，也不能把输出定向到多个文件


//7.7 wordcnt.c  统计字符数、单词数、行数
//#include <stdio.h>
//#include <stdbool.h>		//为isspace()函数提供原型
//#include <ctype.h>			//为bool、true、false提供定义
//int main(void)
//{
//	int c = 0;
//	char prev = 0;					//读入的前一个字符
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;				//不完整的行数
//	bool inword = false;
//
//	printf("Enter text to be analyzed :\n");
//	prev = '\n';					//用于识别完整的行
//	while ((c = getchar()) != EOF)
//	{
//		n_chars++;
//		if (c == '\n')
//		{
//			n_lines++;
//		}
//		if (!isspace(c) && !inword)
//		{
//			inword = true;		//开始一个新的单词
//			n_words++;
//		}
//		if (isspace(c) && inword)
//		{
//			inword = false;		//达到单词的末尾
//		}
//		prev = c;			//保存字符的值
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
// 
//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe < t1.txt
//	Enter text to be analyzed :
//characters = 280, words = 40, lines = 2, partial lines = 1


//8.3 file_eof.c  打开并显示该文件
//#include <stdio.h>
//#include <stdlib.h>		//为了使用exit()
//int main(void)
//{
//	int ch = 0;
//	FILE* fp;
//	char fname[50] = { 0 };		//存储文件名
//	printf("Enter the name of the file: ");
//	scanf("%s", fname);
//	fp = fopen(fname, "r");		//打开待读却文件
//	if (fp == NULL)				//如果失败
//	{
//		printf("Failed to open file. Bye\n");
//		exit(1);				//退出程序
//	}
//	//getc(fp)从打开的文件中获取一个字符
//	while ((ch = getc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//	fclose(fp);			//关闭文件
//	return 0;
//}


//8.4 guess.c  一个拖沓且错误的猜数字游戏(输入no,n o way,都会被认为是n,被截断)
//#include <stdio.h>
//int main(void)
//{
//	int guess = 1;
//	char response = 0;
//	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
//	printf("Respond with a y if my guess is right and with\n");
//	printf("an n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while ((response = getchar()) != 'y')
//	{
//		if (response == 'n')
//		{
//			printf("Well, then, is it %d?\n", ++guess);
//		}
//		else
//		{
//			printf("Sorry, I understand only y or n.\n");
//		}
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//
//	}
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


//8.5 showchar.c  
//#include <stdio.h>
//void display(char cr, int lines, int width);
//int main(void)
//{
//	int ch = 0;
//	int rows = 0;
//	int cols = 0;
//	
//	printf("Enter a characater and two integers:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		//如果读取的不是两个数，退出程序
//		if (scanf("%d %d", &rows, &cols) != 2)		
//		{
//			break;
//		}
//		display(ch, rows, cols);
//		while (getchar() != '\n')		//读取结尾的回车，让下一次程序重新开始
//		{
//			continue;
//		}
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}
//void display(char cr, int lines, int width)
//{
//	int row = 0;
//	int col = 0;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//		{
//			putchar(cr);
//		}
//			putchar('\n');
//	}
//}


//8.7 checking.c  输入验证
//#include <stdio.h>
//#include <stdbool.h>
//
////验证输入是一个整数
//long get_long(void);
//
////验证范围的上下限是否有效
//bool bad_limits(long begin, long end, long low, long high);
//
////计算a-b之间的数字平方和
//double sum_squares(long a, long b);
//
//int main(void)
//{
//	const MIN = -10000000L;		//范围的上限
//	const MAX = +10000000L;		//范围的下限
//	long start = 0L;			//用户指定的范围最小值
//	long stop = 0L;				//用户指定的范围最大值
//	double answer = 0.0;		
//
//	printf("This program computes the sum of the squares of integers in ");
//	printf("a range.\nThe lower bound should not be less than -10000000 ");
//	printf("and \nthe upper bound should not be more than +10000000.\n");
//	printf("Enter the limits (enter 0 for both limits to quit):\n"
//
//		"lower limit: ");
//	start = get_long();
//	printf("upper limits: ");
//	stop = get_long();
//
//	while (start != 0 || stop != 0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//		{
//			printf("Please try again.\n");
//		}
//		else
//		{
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers from ");
//			printf("%ld to %ld is %g\n", start, stop, answer);
//		}
//
//		printf("Enter the limits (enter 0 for both limits to quit):\n");
//
//		printf("lower limit: ");
//		start = get_long();
//		printf("upper limit: ");
//		stop = get_long();
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//
//long get_long(void)
//{
//	long input = 0L;
//	char ch = 0;
//	while (scanf("%ld", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			putchar(ch);		//处理错误输入
//		}
//		printf(" is not an integer.\n");
//		printf("Please enter an integer value, such as 25, -17, or 3: ");
//	}
//	return input;
//}
//
//
//double sum_squares(long a, long b)
//{
//	double total = 0;
//	long i = 0;
//	for (i = a; i <= b; i++)
//	{
//		total += (double)i * (double)i;
//	}
//	return total;
//}
//
//
//bool bad_limits(long begin, long end, long low, long high)
//{
//	bool not_good = false;
//	if (begin > end)
//	{
//		printf("%ld is not smaller than %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low)
//	{
//		printf("Values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high)
//	{
//		printf("Values must be %ld or less.\n", high);
//		not_good = true;
//	}
//	return not_good;
//}


//8.8 menuette.c  菜单程序
//Enter the letter of your choice:
//a.advice			b.bell
//c.count			q.quit

//#include <stdio.h>
//
//char get_choice(void);
//char get_first(void);
//int get_int(void);
//void count(void);
//
//int main(void)
//{
//	int choice = 0;
//	//void count(void);
//
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//		case 'a':
//			printf("Buy low, sell high.\n");
//			break;
//		case 'b':
//			putchar('\a');
//			break;
//		case 'c':
//			count();
//			break;
//		default:
//			printf("Program error!\n");
//			break;
//		}
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void count(void)
//{
//	int n = 0;
//	int i = 0;
//
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d\n", i);
//	}
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//}
//
//char get_choice(void)
//{
//	int ch = 0;
//	printf("Enter the letter of your choice:\n");
//	printf("a.advice		b.bell\n");
//	printf("c.count			q.quit\n");
//
//	ch = get_first();
//	while ((ch < 'a' || ch > 'c') && ch != 'q')
//	{
//		printf("Please respond with a, b, c, or q.\n");
//		ch = get_first();
//	}
//	return ch;
//}
//
//char get_first(void)
//{
//	int ch = getchar();
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	return ch;
//}
//
//int get_int(void)
//{
//	int input = 0;
//	char ch = 0;
//
//	while (scanf("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			putchar(ch);
//		}
//		printf(" is not an integer.\n");
//		printf("Please enter an integer value, such as 25, -178, or 3: ");
//	}
//
//	return input;
//}


//8.11  1.统计在读到文件结尾之前读取到的字符数
//#include <stdio.h>
//int main(void)
//{
//	int ch = 0;
//	int count = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		count++;
//	}
//	printf("The number of character is %d", count);
//
//	return 0;
//}

//E:\github\C - BOOK\book_1\x64\Debug > book_1.exe < t1.txt
//	The number of character is 280

//2.打印输入的字符及其相应的ASCII十进制值
//#define SPACE 32
//#define CTRL 64
//#define COL 10
//#include <stdio.h>
//int main(void)
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		count++;
//		if (ch >= SPACE)
//		{
//			printf("%c ", ch);
//		}
//		else if (ch == '\n' || ch == '\t')
//		{
//			printf("%s", ch == '\n' ? "\\n" : "\\t");
//		}
//		else
//		{
//			printf("^%c", ch + CTRL);
//		}
//		printf("%-5d", ch);
//		if (ch == '\n')
//		{
//			count = 0;
//		}
//		if (count % 10 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}


//3.打印输入的大写字母和小写字母的个数
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	int low_ct = 0;
//	int up_ct = 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			low_ct++;
//		}
//		if (isupper(ch))
//		{
//			up_ct++;
//		}
//	}
//	printf("lower: %d\n", low_ct);
//	printf("upper: %d\n", up_ct);
//
//	return 0;
//}


//4.报告平均每个单词的字母数（标点符号可用ctype.h的ispunct()）
//#include <stdio.h>
//#include <stdbool.h>
//#include <ctype.h>
//int main(void)
//{
//	int ch = 0;
//	bool inword = false;
//	int word_ct = 0;
//	int alpha_ct = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (!isspace(ch) && !inword)
//		{
//			inword = true;
//			word_ct++;
//		}
//		if (isspace(ch) && inword)
//		{
//			inword = false;
//		}
//		if (inword && !ispunct(ch))
//		{
//			alpha_ct++;
//		}
//	}
//
//	printf("%f\n", (float)alpha_ct / word_ct);
//
//	return 0;
//}


//5.修改8.4的猜数字
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int main(void)
//{
//	int guess = 0;
//	int left = 1;
//	int right = 100;
//	char response = 0;
//	srand((unsigned)time(NULL));
//	int number = rand() % 100 + 1;
//
//	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
//	while (1)
//	{
//		guess = (left + right) / 2;
//		printf("Uh...is your number %d?\n", guess);
//		if (guess > number)
//		{
//			printf("猜大了\n");
//			right = guess - 1;
//		}
//		else if (guess < number)
//		{
//			printf("猜小了\n");
//			left = guess + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	printf("I knew I could do it!\n");
//
//	return 0;
//}


//6.修改8.8中的get_first()函数，让其返回读取到的第一个非空白字符
//#include <stdio.h>
//char get_first(void);
//
//int main(void)
//{
//	 char ch = get_first();
//	putchar(ch);
//	return 0;
//}
//
//char get_first(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) == ' ')
//	{
//		continue;
//	}
//	return ch;
//}


//7.修改第七章的编程练习8,字母代替数字，q代替5
//8.提示用户输入一周工作的小时数，打印工资总额、税金和净收入
//a.供选择的工作[1]8.75/hr[2]9.33/hr[3]10.00/hr[4]11.20/hr[5]quit(switch语句)
//b.加班(超过40小时) = 1.5倍的时间
//c.税率：前300美元为15 % ，续150美元为20 % ，余下的为25 %
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
//	char ch = 0;
//	double basic = 0;
//	double basic_salary = 0;
//	double add_per_hour = 0;
//	printf("Enter your work choice(a,b,c,d)(Enter q to quit): ");
//	scanf("%c", &ch);
//	restart:
//	while (ch != 'q')
//	{
//		switch (ch)
//		{
//		case 'a':
//			basic = BASIC_1;
//			basic_salary = BASIC_SALARY_1;
//			add_per_hour = ADD_PER_HOUR_1;
//			break;
//		case 'b':
//			basic = BASIC_2;
//			basic_salary = BASIC_SALARY_2;
//			add_per_hour = ADD_PER_HOUR_2;
//			break;
//		case 'c':
//			basic = BASIC_3;
//			basic_salary = BASIC_SALARY_3;
//			add_per_hour = ADD_PER_HOUR_3;
//			break;
//		case 'd':
//			basic = BASIC_4;
//			basic_salary = BASIC_SALARY_4;
//			add_per_hour = ADD_PER_HOUR_4;
//			break;
//
//		default:
//			printf("Error!\n");
//			printf("Please enter again: ");
//			scanf("%c", &ch);
//			goto restart;
//			break;
//		}
//
//		printf("Enter your work hours:　");
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
//		printf("Enter your work choice(a,b,c,d)(Enter q to quit): ");
//		scanf("%c", &ch);
//
//	}
//	return 0;
//}


//8.提供一个加减乘除的菜单，输入两个数字，float存储， 输入0，重新输入
//#include <stdio.h>
//float get_float(void);
//char get_choice(void);
//char get_first(void);
//int main(void)
//{
//	char choice = 0;
//	float num1 = 0.0f;
//	float num2 = 0.0f;
//
//	while ((choice = get_choice()) != 'q')
//	{
//		printf("Enter first number:\n");
//		num1 = get_float();
//		printf("Enter second number:\n");
//		num2 = get_float();
//
//		switch (choice)
//		{
//		case 'a':
//			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
//			break;
//		case 's':
//			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
//			break;
//		case 'm':
//			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
//			break;
//		case 'd':
//			if (!num2)
//			{
//				printf("Enter a number other than 0: ");
//				num2 = get_float();
//			}
//			printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
//			break;
//		default:
//			printf("Program error!\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//char get_choice(void)
//{
//	char ch = 0;
//	
//	printf("Enter the operation of your choice:\n");
//	printf("%-36s%s\n", "a.add", "s.subtract");
//	printf("%-36s%s\n", "m.multiply", "d.divide");
//	printf("q.quit\n");
//
//	ch = get_first();
//	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
//	{
//		printf("Please enter a, s, m, d, or q.\n");
//		ch = get_first();
//	}
//
//	return ch;
//}
//
//float get_float(void)
//{
//	float input = 0.0f;
//	char ch = 0;
//
//	while (scanf("%f", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			putchar(ch);
//		}
//		printf(" is not an number.\n");
//		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
//	}
//
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//
//	return input;
//}
//
//char get_first(void)
//{
//	char ch = 0;
//	ch = getchar();
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	return ch;
//}
