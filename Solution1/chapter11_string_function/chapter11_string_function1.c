#define _CRT_SECURE_NO_WARNINGS 1
//11.1 strings1.c
//#include <stdio.h>
//#define MSG "I am a symbolic string constant."
//#define MAXLENGTH 81
//int main()
//{
//	char words[MAXLENGTH] = "I am a string in an array.";
//	const char* pt1 = "Something is pointing at me.";
//
//	puts("Here are some string: ");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//
//	return 0;
//}


//下面两条语句相同
//char greeting[50] = "hello, and"" how are" " you"" today!";
//char greeting1[50] = "hello, and how are you today!";
//在字符串内使用使用双引号，必须在双引号前面加上一个反斜杠
//#include <stdio.h>
//int main()
//{
//	printf("\"Run, Spot, run!\"exclaimed Dick.");
//	return 0;
//}


//字符串常量属于静态存储类别，这说明如果在函数中使用字符串常量，该字
//符串只会被储存一次，在整个程序的生命期内存在，即使函数被调用多次。
//11.2 strptr.c  把字符串看作指针
//#include <stdio.h>
//int main()
//{
//	printf("%s, %p, %c\n", "We", "are", *"space farers");
//	return 0;
//}


//下面两条语句几乎相同，并不完全相同
//指针变量pt1可以使用++，而数组名pt2不可以使用++,只能使用 pt2 + 1
//字符串字面量被视为const数据。由于pt1指向这个const数据，所以应该
//把pt1声明为指向const数据的指针。
//const char* pt1 = "Something is pointing at me.";
//const char pt2[] = "Something is pointing at me.";


//11.3 addresses.c  字符串的地址
//#define MSG "I'm special"
//#include <stdio.h>
//int main()
//{
//	char ar[] = MSG;
//	const char* pt = MSG;
//	printf("address of \"I'm special\": %p \n", "I'm special");
//	printf("address ar: %p\n", ar);
//	printf("address pt: %p\n", pt);
//	printf("address of MSG: %p\n", MSG);
//	printf("address of \"I'm special\": %p \n", "I'm special");
//	return 0;
//}


//VS中不报错，但也不能打印
//#include <stdio.h>
//int main()
//{
//	char* word = "frame";
//	word[1] = 'o';//未定义，可能导致内存访问错误
//
//	char* p1 = "Klingon";
//	p1[0] = 'F';
//	printf("Klingon");
//	printf(":Beware the %ss!\n", "Klingon");
//
//	return 0;
//}


//11.4 arrchar.c  指针数组，字符串数组
//#include <stdio.h>
//#define SIZE 40
//#define LIM 5
//int main()
//{
//	//const char* mytalents[LIM];//可以去掉LIM
//	//mytalents数组是一个内含5个指针的数组，共占用40个字节
//	const char* mytalents[] =
//	{
//		"Adding numbers swiftly",
//		"Multiplying accurately",
//		"Stashing data",
//		"Following instructions to the letter",
//		"Understanding the C language",
//	};
//	char yourtalents[LIM][SIZE] =
//	{
//		"Walking in a straight line",
//		"Sleeping",
//		"Watching television",
//		"Mailing letters",
//		"Reading email"
//	};
//	int i = 0;
//
//	puts("Let's compare talents.");
//	printf("%-36s  %-25s\n", "My Talents", "Your Talents");
//
//	for (i = 0; i < LIM; i++)
//	{
//		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
//	}
//
//	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
//		sizeof(mytalents), sizeof(yourtalents));
//
//	return 0;
//}


//11.5 p_and_s.c  指针和字符串
//#include <stdio.h>
//int main()
//{
//	const char* mesg = "Don't be a fool!";
//	const char* copy;
//	copy = mesg;
//	printf("%s\n", copy);
//	printf("mesg = %s; &mesg = %p; value = %p\n",
//		mesg, &mesg, mesg);
//	printf("copy = %s; &copy = %p; value = %p\n",
//		copy, &copy, copy);
//	return 0;
//}


//11.6  getsputs.c  使用gets()和puts()
//#include <stdio.h>
//#define STLEN 5
//int main()
//{
//	char words[STLEN];
//	puts("Enter a string, please.");
//	gets(words);
//	printf("Your string twice:\n");
//	printf("%s\n", words);
//	puts(words);
//	puts("Done.");
//	return 0;
//}


//11.7  fgets1.c  使用fgets()和fputs()
//#include <stdio.h>
//#define STLEN 14
//int main()
//{
//	char words[STLEN];
//	puts("Enter a string, please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(), then fputs()):\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Enter another string, please.");
//	fgets(words, STLEN, stdin);
//	printf("Your string twice (puts(), then fputs()):\n");
//	puts(words);
//	fputs(words, stdout);
//	puts("Done.");
//	return 0;
//}


//11.8 fgets2.c  使用fgets()和fputs()
//#include <stdio.h>
//#define STLEN 10
//int main()
//{
//	char words[STLEN];
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//	{
//		fputs(words, stdout);
//	}
//	puts("Done.");
//	return 0;
//}


//11.9 fgets3.c  使用fgets()
//#include <stdio.h>
//#define STLEN 10
//int main()
//{
//	char words[STLEN];
//	int i = 0;
//	puts("Enter strings (empty line to quit):");
//	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
//	{
//		i = 0;
//		while (words[i] != '\n' && words[i] != '\0')
//		{
//			i++;
//		}
//		if (words[i] == '\n')
//		{
//			words[i] = '\0';
//		}
//		else   //在words[i] == '\0'时进入,丢弃输入行的其余部分
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//		puts(words);
//	}
//	puts("done");
//	return 0;
//}


//11.10  s_gets()函数
//#include <stdio.h>
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)	//即ret_val == NULL
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')	//st[i] == '\0'
//			{
//				continue;
//			}
//		}
//	}
//}


//11.11 scan_str.c  使用scanf()
//#include <stdio.h>
//int main()
//{
//	char name1[11] = { 0 };
//	char name2[11] = { 0 };
//	int count = 0;
//	printf("Please enter 2 nmes.\n");
//	count = scanf("%5s %10s", name1, name2);
//	printf("I read the %d names %s and %s.\n", count, name1, name2);
//	return 0;
//}


//11.12 put_out.c  使用puts()
//#include <stdio.h>
//#define DEF "I am a #define string."
//int main()
//{
//	char str1[80] = "An array was initialized to me.";
//	const char* str2 = "A pointer was initialized to me";
//	puts("I'm an argument to puts().");
//	puts(DEF);
//	puts(str1);
//	puts(str2);
//	puts(&str1[5]);
//	puts(str2 + 4);
//	return 0;
//}


//11.13 nono.c  不要模仿
//#include <stdio.h>
//int main()
//{
//	char side_a[] = "Side A";
//	char dont[] = { 'W', 'O', 'W', '!' };
//	char side_b[] = "Side B";
//	puts(dont);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char line[81];
//	//while (gets(line))	//与while(gets(line) != NULL)相同
//	//{
//	//	puts(line);
//	//}
//	
//	while (fgets(line, 81, stdin))
//	{
//		fputs(line, stdout);
//	}
//	return 0;
//}


//11.14 put1()函数   打印字符串，不添加\n
//#include <stdio.h>
//void put1(const char* string)
//{
//	//while (*string != '\0')
//	while (*string)  //在*string=='\0'时，条件为假
//	{
//		putchar(*string++);
//	}
//
//	int i = 0;
//	while (string[i] != '\0')
//	{
//		putchar(string[i++]);
//	}
//
//}


//11.15 put2.c  打印一个字符串，统计打印的字符数
//#include <stdio.h>
//int put2(const char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');	//该换行符不被统计
//	return count;
//}


//11.16 put_put.c  用户自定义输出函数
//#include <stdio.h>
//void put1(const char*);
//int put2(const char*);
//int main()
//{
//	put1("If I'd as much money");
//	put1(" as I could spend,\n");
//	printf("I count %d characters.\n",
//	put2("I never would cry old chairs to mend."));
//	return 0;
//}
//void put1(const char* string)
//{
//	while (*string)
//	{
//		putchar(*string++);
//	}
//}
//int put2(const char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//	return count;
//}


//11.17 test_fit.c  使用缩短字符串长度的函数
//#include <stdio.h>
//#include <string.h>
//void fit(char*, unsigned int);
//int main()
//{
//	char mesg[] = "Things should be as simple as possible,"
//		" but not simpler.";
//	puts(mesg);
//	fit(mesg, 38);
//	puts(mesg);
//	puts("Let's look at some more of the string.");
//	puts(mesg + 39);
//	return 0;
//}
//
//void fit(char* string, unsigned int size)
//{
//	if (strlen(string) > size)
//	{
//		string[size] = '\0';
//	}
//}


//11.18 str_cat.c  拼接两个字符串
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//char* s_gets(char* st, int n);
//int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE))
//	{
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//	}
//	else
//	{
//		puts("End of file encountered!");
//	}
//	puts("bye");
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.19  join_chk.c  拼接两个字符串，检查第一个数组的大小
//#include <stdio.h>
//#include <string.h>
//#define SIZE 30
//#define BUGSIZE 13
//char* s_gets(char* st, int n);
//int main()
//{
//	char flower[SIZE] = { 0 };
//	char addon[] = "s smell like old shoes.";
//	char bug[BUGSIZE] = { 0 };
//	int available = 0;
//	puts("What is your favourite flower?");
//	s_gets(flower, SIZE);
//	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
//	{
//		strcat(flower, addon);
//	}
//	puts(flower);
//	puts("What is your favourite bug?");
//	s_gets(bug, BUGSIZE);
//	available = BUGSIZE - (int)strlen(bug) - 1;
//	strncat(bug, addon, available);
//	puts(bug);
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.20 nogo.c  该程序是否能正常运行?
//比较的是地址，一直不会相同
//#include <stdio.h>
//#define ANSWER "Grant"
//#define SIZE 40
//char* s_gets(char* st, int n);
//int main()
//{
//	char try[SIZE] = { 0 };
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	while (try != ANSWER)
//	{
//		puts("No, that's wrong.Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\0' && st[i] != '\n')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.21 compare.c  比较字符串
//strcmp()函数，如果两个字符串参数相同，该函数就返回0
//#include <stdio.h>
//#include <string.h>		//strcmp()函数的原型
//#define ANSWER "Grant"
//#define SIZE 40
//char* s_gets(char* st, int n);
//int main()
//{
//	char try[SIZE] = { 0 };
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	//while (strcmp(try, ANSWER) != 0)
//	while (strcmp(try, ANSWER))
//	{
//		puts("No, that's wrong. Try again.");
//		s_gets(try, SIZE);
//	}
//	puts("That's right!");
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.22 compback.c  strcmp()的返回值
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("strcmp(\"A\", \"A\") is ");
//	printf("%d\n", strcmp("A", "A"));
//	printf("strcmp(\"A\", \"B\") is ");
//	printf("%d\n", strcmp("A", "B"));
//	printf("strcmp(\"B\", \"A\") is ");
//	printf("%d\n", strcmp("B", "A"));
//	printf("strcmp(\"C\", \"A\") is ");
//	printf("%d\n", strcmp("C", "A"));
//	printf("strcmp(\"Z\", \"a\") is ");
//	printf("%d\n", strcmp("Z", "a"));
//	printf("strcmp(\"apples\", \"apple\") is ");
//	printf("%d\n", strcmp("apples", "apple"));
//	return 0;
//}


//11.23 quit_chk.c  某程序的开始部分
//#include <stdio.h>
//#include <string.h>
//#define SIZE 80
//#define LIM 10
//#define STOP "quit"
//char* s_gets(char* st, int n);
//int main()
//{
//	char input[LIM][SIZE] = { 0 };
//	int ct = 0;
//	printf("Enter up to %d lines (type quit to quit):\n", LIM);
//	//while (ct < LIM && s_gets(input[ct], SIZE) != NULL &&
//	//	strcmp(input[ct], STOP) != 0)
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL &&
//		input[ct][0] != '\0')//输入空行表示结束
//	{
//		ct++;
//	}
//	printf("%d strings entered\n", ct);
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (st[i] != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.24 starsrch.c 使用strncmp()
//#include <stdio.h>
//#include <string.h>
//#define LISTSIZE 6
//int main()
//{
//	const char* list[LISTSIZE] =
//	{
//		"astronomy", "astounding",
//		"astrophysics", "ostracize",
//		"asterism", "astrophobia",
//	};
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < LISTSIZE; i++)
//	{
//		if (strncmp(list[i], "astro", 5) == 0)
//		{
//			printf("Found: %s\n", list[i]);
//			count++;
//		}
//	}
//	printf("The list contained %d words begnning"
//		" with astro.\n", count);
//	return 0;
//}


//11.25 copy1.c   演示strcpy()
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//#define LIM 5
//char* s_gets(char* st, int n);
//int main()
//{
//	char qwords[LIM][SIZE] = { 0 };
//	char temp[SIZE] = { 0 };
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE))
//	{
//		//if (temp[0] != 'q')
//		if (strncmp(temp, "q", 1) != 0)
//		{
//			printf("%s doesn't begin with q!\n", temp);
//		}
//		else
//		{
//			strcpy(qwords[i], temp);
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//	{
//		puts(qwords[i]);
//	}
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char target[20] = { 0 };
//	strcmp(target, "Hi ho!");
//	//target = "So long";	//表达式必须是可修改的左值
//	//char* str;	
//	//str未被初始化，"The C of Tranquility" 可能被拷贝到任意的地方
//	//strcpy(str, "The C of Tranquility");
//	return 0;
//}


//11.26 copy2.c  使用strcpy()
//#include <stdio.h>
//#include <string.h>
//#define WORDS "beast"
//#define SIZE 40
//int main()
//{
//	const char* orig = WORDS;
//	char copy[SIZE] = "Be the best that you can be.";
//	char* ps;
//	puts(orig);
//	puts(copy);
//	ps = strcpy(copy + 7, orig);//orig中的\0也被拷贝了
//	puts(copy);
//	puts(ps);	//输出beast, ps 和 copy + 7 的地址相同
//	puts(copy + 7);
//	return 0;
//}


//11.27 copy3.c  使用strncpy()
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40 
//#define TARGSIZE 7
//#define LIM 5
//char* s_gets(char* st, int n);
//int main()
//{
//	char qwords[LIM][TARGSIZE];
//	char temp[SIZE];
//	int i = 0;
//	printf("Enter %d words beginning with q:\n", LIM);
//	while (i < LIM && s_gets(temp, SIZE))
//	{
//		if (temp[0] != 'q')
//		{
//			printf("%s doesn't begin with q!\n", temp);
//		}
//		else
//		{
//			strncpy(qwords[i], temp, TARGSIZE - 1);
//			//如果temp存储的字符串较小，会拷贝'\0'
//			qwords[i][TARGSIZE - 1] = '\0';
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//	{
//		puts(qwords[i]);
//	}
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.28 format.c  格式化字符串
//#include <stdio.h>
//#define MAX 20
//char* s_gets(char* st, int n);
//int main()
//{
//	char first[MAX];
//	char last[MAX];
//	char formal[2 * MAX + 10];
//	double prize = 0.0;
//	puts("Enter your first name:");
//	s_gets(first, MAX);
//	puts("Enter your last name:");
//	s_gets(last, MAX);
//	puts("Enter your prize money:");
//	scanf("%lf", &prize);
//	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
//	puts(formal);
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (*(st + i) != '\n' && *(st + i) != '\0')
//		{
//			i++;
//		}
//		if (*(st + i) == '\n')
//		{
//			*(st + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//s-gets()函数替换
//#include <stdio.h>
//int main()
//{
//	char line[80];
//	char* find;
//	fgets(line, 80, stdin);
//	find = strchr(line, '\n');
//	if (find)
//	{
//		*find = '\0';
//	}
//	return 0;
//}


//11.29 sort_str.c  读入字符串，并排序字符串
//#include <stdio.h>
//#include <string.h>
//#define SIZE 81		//限制字符串长度，包括\0
//#define LIM 20		//可读入的最多行数
//#define HALT ""		//空字符串停止输入
//void stsrt(char* string[], int num);
//char* s_gets(char* st, int n);
//int main()
//{
//	char input[LIM][SIZE];
//	char* ptstr[LIM];//内含数组变量的数组
//	int ct = 0;		//输入计数
//	int k = 0;		//输出计数
//	printf("Input up to %d lines, and I will sort them.\n", LIM);
//	printf("To stop, press the Enter key at a line's start.\n");
//	while (ct < LIM && s_gets(input[ct], SIZE) != NULL
//		&& input[ct][0] != '\0')
//	{
//		ptstr[ct] = input[ct];
//		ct++;
//	}
//	stsrt(ptstr, ct);
//	puts("\nHere's the sorted list:\n");
//	for (k = 0; k < ct; k++)
//	{
//		puts(ptstr[k]);//排序后的指针
//	}
//	return 0;
//}
//
////字符串-指针-排序函数
//void stsrt(char* string[], int num)
//{
//	char* temp;
//	int top = 0;
//	int seek = 0;
//	for (top = 0; top < num - 1; top++)
//	{
//		for (seek = top + 1; seek < num; seek++)
//		{
//			if (strcmp(string[top], string[seek]) > 0)
//			{
//				temp = string[top];
//				string[top] = string[seek];
//				string[seek] = temp;
//			}
//		}
//	}
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//11.30 mod_str.c  修改字符串
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define LIMIT 81
//void ToUpper(char*);
//int PunctCount(const char*);
//int main()
//{
//	char line[LIMIT];
//	char* find;
//	puts("Please enter a line:");
//	fgets(line, LIMIT, stdin);
//	find = strchr(line, '\n');
//	if (find)//地址不为NULL
//	{
//		*find = '\0';
//	}
//	ToUpper(line);
//	puts(line);
//	printf("That line has %d punctuation characters.\n",
//		PunctCount(line));
//	return 0;
//}
//
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//int PunctCount(const char* str)
//{
//	int ct = 0;
//	while (*str)
//	{
//		if (ispunct(*str))//判断是否为标点符号
//		{
//			ct++;
//		}
//		str++;
//	}
//	return ct;
//}


//11.31 repeat.c  带参数的main()
//#include <stdio.h>
//int main(int argc, char** argv)		//**argv与*argv[]等价
////int main(int argc, char* argv[])
//{
//	int count = 0;
//	printf("The command line has %d argument:\n", argc - 1);
//	//从1开始打印
//	for (count = 1; count < argc; count++)
//	{
//		printf("%d: %s\n", count, argv[count]);
//	}
//	printf("\n");
//	return 0;
//}

//E:\github\C - BOOK\Solution1\x64\Debug > chapter11_string_function.exe Resistnce is futile
//The command line has 3 argument:
//1 : Resistnce
//2 : is
//3 : futile

//11.32 hello.c  把命令行参数转换为数字(auti()函数)
//atoi返回int类型 , atof返回double类型, atol返回long类型
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	int i = 0;
//	int times = 0;
//	if (argc < 2 || (times = atoi(argv[1])) < 1)
//	{
//		printf("Usage: %s positive-number\n", argv[0]);
//	}
//	else
//	{
//		for (i = 0; i < times; i++)
//		{
//			puts("Hello, good looking!");
//		}
//	}
//	return 0;
//}

//下面的函数可以识别和报告字符串中的首字符是否是数字
//strtol()把字符串转换成long类型的值
//strtoul()——>unsigned long（只能无符号）
//strtod()——> double(只能十进制, 仅需两个参数)
//long strtol(const char* restrict nptr, 
//char** restrict endptr, int base);
//nptr : 指向待转换字符串的指针
//endptr: 一个指针的地址，该指针被设置为标识输入数字结束字符的地址
//base：表示以什么进制写入数字


//11.33 strcnvt.c  使用strtol()
//#include <stdio.h>
//#include <stdlib.h>
//#define LIM 30
//char* s_gets(char* st, int n);
//int main()
//{
//	char number[LIM] = { 0 };
//	char* end;
//	long value;
//	puts("Enter a number (empty line to quit):");
//	while (s_gets(number, LIM) && number[0] != '\0')
//	{
//		value = strtol(number, &end, 10);
//		printf("base 10 input, base 10 output: %ld, stopped at %s"
//			"(%d)\n", value, end, *end);
//		value = strtol(number, &end, 16);
//		printf("base 16 input, base 10 output: %ld, stopped at %s"
//			"(%d)\n", value, end, *end);
//		puts("Next number:");
//	}
//	puts("Bye!\n");
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val = fgets(st, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//		{
//			i++;
//		}
//		if (st[i] == '\n')
//		{
//			st[i] = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}
