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


//�������������ͬ
//char greeting[50] = "hello, and"" how are" " you"" today!";
//char greeting1[50] = "hello, and how are you today!";
//���ַ�����ʹ��ʹ��˫���ţ�������˫����ǰ�����һ����б��
//#include <stdio.h>
//int main()
//{
//	printf("\"Run, Spot, run!\"exclaimed Dick.");
//	return 0;
//}


//�ַ����������ھ�̬�洢�����˵������ں�����ʹ���ַ�������������
//����ֻ�ᱻ����һ�Σ�������������������ڴ��ڣ���ʹ���������ö�Ρ�
//11.2 strptr.c  ���ַ�������ָ��
//#include <stdio.h>
//int main()
//{
//	printf("%s, %p, %c\n", "We", "are", *"space farers");
//	return 0;
//}


//����������伸����ͬ��������ȫ��ͬ
//ָ�����pt1����ʹ��++����������pt2������ʹ��++,ֻ��ʹ�� pt2 + 1
//�ַ�������������Ϊconst���ݡ�����pt1ָ�����const���ݣ�����Ӧ��
//��pt1����Ϊָ��const���ݵ�ָ�롣
//const char* pt1 = "Something is pointing at me.";
//const char pt2[] = "Something is pointing at me.";


//11.3 addresses.c  �ַ����ĵ�ַ
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


//VS�в�������Ҳ���ܴ�ӡ
//#include <stdio.h>
//int main()
//{
//	char* word = "frame";
//	word[1] = 'o';//δ���壬���ܵ����ڴ���ʴ���
//
//	char* p1 = "Klingon";
//	p1[0] = 'F';
//	printf("Klingon");
//	printf(":Beware the %ss!\n", "Klingon");
//
//	return 0;
//}


//11.4 arrchar.c  ָ�����飬�ַ�������
//#include <stdio.h>
//#define SIZE 40
//#define LIM 5
//int main()
//{
//	//const char* mytalents[LIM];//����ȥ��LIM
//	//mytalents������һ���ں�5��ָ������飬��ռ��40���ֽ�
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


//11.5 p_and_s.c  ָ����ַ���
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


//11.6  getsputs.c  ʹ��gets()��puts()
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


//11.7  fgets1.c  ʹ��fgets()��fputs()
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


//11.8 fgets2.c  ʹ��fgets()��fputs()
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


//11.9 fgets3.c  ʹ��fgets()
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
//		else   //��words[i] == '\0'ʱ����,���������е����ಿ��
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


//11.10  s_gets()����
//#include <stdio.h>
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)	//��ret_val == NULL
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


//11.11 scan_str.c  ʹ��scanf()
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


//11.12 put_out.c  ʹ��puts()
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


//11.13 nono.c  ��Ҫģ��
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
//	//while (gets(line))	//��while(gets(line) != NULL)��ͬ
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


//11.14 put1()����   ��ӡ�ַ����������\n
//#include <stdio.h>
//void put1(const char* string)
//{
//	//while (*string != '\0')
//	while (*string)  //��*string=='\0'ʱ������Ϊ��
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


//11.15 put2.c  ��ӡһ���ַ�����ͳ�ƴ�ӡ���ַ���
//#include <stdio.h>
//int put2(const char* string)
//{
//	int count = 0;
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');	//�û��з�����ͳ��
//	return count;
//}


//11.16 put_put.c  �û��Զ����������
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


//11.17 test_fit.c  ʹ�������ַ������ȵĺ���
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


//11.18 str_cat.c  ƴ�������ַ���
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


//11.19  join_chk.c  ƴ�������ַ���������һ������Ĵ�С
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


//11.20 nogo.c  �ó����Ƿ�����������?
//�Ƚϵ��ǵ�ַ��һֱ������ͬ
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


//11.21 compare.c  �Ƚ��ַ���
//strcmp()��������������ַ���������ͬ���ú����ͷ���0
//#include <stdio.h>
//#include <string.h>		//strcmp()������ԭ��
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


//11.22 compback.c  strcmp()�ķ���ֵ
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


//11.23 quit_chk.c  ĳ����Ŀ�ʼ����
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
//		input[ct][0] != '\0')//������б�ʾ����
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


//11.24 starsrch.c ʹ��strncmp()
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


//11.25 copy1.c   ��ʾstrcpy()
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
//	//target = "So long";	//���ʽ�����ǿ��޸ĵ���ֵ
//	//char* str;	
//	//strδ����ʼ����"The C of Tranquility" ���ܱ�����������ĵط�
//	//strcpy(str, "The C of Tranquility");
//	return 0;
//}


//11.26 copy2.c  ʹ��strcpy()
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
//	ps = strcpy(copy + 7, orig);//orig�е�\0Ҳ��������
//	puts(copy);
//	puts(ps);	//���beast, ps �� copy + 7 �ĵ�ַ��ͬ
//	puts(copy + 7);
//	return 0;
//}


//11.27 copy3.c  ʹ��strncpy()
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
//			//���temp�洢���ַ�����С���´��'\0'
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


//11.28 format.c  ��ʽ���ַ���
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


//s-gets()�����滻
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


//11.29 sort_str.c  �����ַ������������ַ���
//#include <stdio.h>
//#include <string.h>
//#define SIZE 81		//�����ַ������ȣ�����\0
//#define LIM 20		//�ɶ�����������
//#define HALT ""		//���ַ���ֹͣ����
//void stsrt(char* string[], int num);
//char* s_gets(char* st, int n);
//int main()
//{
//	char input[LIM][SIZE];
//	char* ptstr[LIM];//�ں��������������
//	int ct = 0;		//�������
//	int k = 0;		//�������
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
//		puts(ptstr[k]);//������ָ��
//	}
//	return 0;
//}
//
////�ַ���-ָ��-������
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


//11.30 mod_str.c  �޸��ַ���
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
//	if (find)//��ַ��ΪNULL
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
//		if (ispunct(*str))//�ж��Ƿ�Ϊ������
//		{
//			ct++;
//		}
//		str++;
//	}
//	return ct;
//}


//11.31 repeat.c  ��������main()
//#include <stdio.h>
//int main(int argc, char** argv)		//**argv��*argv[]�ȼ�
////int main(int argc, char* argv[])
//{
//	int count = 0;
//	printf("The command line has %d argument:\n", argc - 1);
//	//��1��ʼ��ӡ
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

//11.32 hello.c  �������в���ת��Ϊ����(auti()����)
//atoi����int���� , atof����double����, atol����long����
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

//����ĺ�������ʶ��ͱ����ַ����е����ַ��Ƿ�������
//strtol()���ַ���ת����long���͵�ֵ
//strtoul()����>unsigned long��ֻ���޷��ţ�
//strtod()����> double(ֻ��ʮ����, ������������)
//long strtol(const char* restrict nptr, 
//char** restrict endptr, int base);
//nptr : ָ���ת���ַ�����ָ��
//endptr: һ��ָ��ĵ�ַ����ָ�뱻����Ϊ��ʶ�������ֽ����ַ��ĵ�ַ
//base����ʾ��ʲô����д������


//11.33 strcnvt.c  ʹ��strtol()
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
