#define _CRT_SECURE_NO_WARNINGS 1
//1.设计一个函数，从输入中获取n个字符，把结果存储在一个数组中
//#include <stdio.h>
//#define SIZE 40
//char* gets_n(char* str, int n);
//int main()
//{
//	char arr[SIZE] = { 0 };
//	gets_n(arr, 10);
//	//puts(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//char* gets_n(char* str, int n)
//{
//	int count = 0;
//	while (count < n)
//	{
//		*(str + count++) = getchar();
//	}
//	//*(str + count) = '\0';
//	return str;
//} 
 

//2.改编1，n个字符后停止，或在第一个空白、换行符、制表符停止
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 40
//char* gets_n(char *ar, int n);
//int main()
//{
//	char str[SIZE] = { 0 };
//	gets_n(str, 10);
//	puts(str);
//	return 0;
//}
//char* gets_n(char* ar, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(ar + i) = getchar();
//		if (isspace(*(ar + i)))
//		//if (isspace(*(ar + i)) || *(ar + i) == '\0')
//		{
//			break;
//		}
//	}
//	*(ar + i) = '\0';
//
//	return ar;
//}


//3.从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。
//该函数应该跳过第1个非空白字符前面的所有空白。
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 40	
//char* get_str(char* ar);
//int main()
//{
//	char arr[SIZE] = { 0 };
//	get_str(arr);
//	puts(arr);
//	return 0;
//}
//
//char* get_str(char* ar)
//{
//	char ch = 0;
//	while (isspace(ch = getchar()))
//	{
//		continue;
//	}
//	*ar = ch;
//	while (!(isspace(*ar)))
//	{
//		ar++;
//		*ar = getchar();
//	}
//	return ar;
//}


//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 40
//void get_words(char* ar);
//int main()
//{
//	char str[SIZE] = { 0 };
//	printf("Enter some characters:\n");
//	get_words(str);
//	puts(str);
//	return 0;
//}
//void get_words(char* ar)
//{
//	char ch = 0;
//	while (isspace(ch = getchar()))
//	{
//		continue;
//	}
//	do
//	{
//		*ar++ = ch;
//	} while (!isspace(ch = getchar()));
//	*ar = '\0';
//}


//4.类似3，接受第二个参数指明可读取的最大字符数
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 10
//char* get_n(char* str, int n);
//int main()
//{
//	char ar[SIZE] = { 0 };
//	get_n(ar, 10);
//	puts(ar);
//	return 0;
// }
//char* get_n(char* str, int n)
//{
//	char ch = 0;
//	while (isspace(ch = getchar()))
//	{
//		continue;
//	}
//	*str = ch;//数组的第一位元素
//	int count = 1;
//	while (!isspace(*(str + count) = getchar()) && count < n - 1)
//	{
//		count++;
//	}
//	*(str + count) = '\0';
//	return str;
//}


//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 10
//void get_words(char* ar, int n);
//int main()
//{
//	char str[SIZE] = { 0 };
//	printf("Enter some characters:\n");
//	get_words(str, SIZE);
//	puts(str);
//	return 0;
//}
//void get_words(char* ar, int n)
//{
//	char ch = 0;
//	int i = 0;
//	while (isspace(ch = getchar()))
//	{
//		continue;
//	}
//	do
//	{
//		*(ar + i) = ch;
//		i++;
//	} while (!isspace(ch = getchar()) && i < (n - 1));
//	*(ar + i) = '\0';//只会显示9个
//}


//5.第1个函数形参指定字符串，第2个函数形参指定字符,返回首次出现位置。
//#include <stdio.h>
//#include <string.h>
//#define QUIT "quit"
//#define SIZE 80
//char* str_ch(char* str, char c);
//char* s_gets(char* str, int n);
//int main()
//{
//	char str[SIZE] = { 0 };
//	char ch = 0;
//	char* ret_val;
//
//	printf("Input a string (type quit to quit): \n");
//	s_gets(str, SIZE);
//	while (strcmp(str, QUIT))
//	{
//		printf("Input a character: ");
//		scanf("%c", &ch);
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		ret_val = str_ch(str, ch);
//		if (ret_val != NULL)
//		{
//			printf("Find! The string start with the %c:\n"
//			"%s\n", ch, ret_val);
//		}
//		else
//		{
//			printf("Can't find!\n");
//		}
//		printf("Input a string (type quit to quit):\n");
//		s_gets(str, SIZE);
//	}
//	printf("Bye!\n");
//	return 0;
//}
////char* str_ch(char* str, char c)
////{
////	int flag = 0;
////	int count = 0;
////	int len = (int)strlen(str);
////	while (count < len)
////	{
////		if (*str == c)
////		{
////			return str;
////		}
////		str++;
////		count++;
////	}
////	return NULL;
////}
//
//char* str_ch(char* str, char c)
//{
//	int flag = 0;
//	int count = 0;
//	int len = (int)strlen(str);
//	while (count++ < len)//不能查找全部元素，str在变化
//	//while (count++ < strlen(str))//不能查找全部元素，str在变化
//	{
//		if (*str++ == c)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//	{
//		return str - 1;
//	}
//	else
//	{
//		return NULL;
//	}
//}
//char* s_gets(char* str, int n)
//{
//	char* ret_val = fgets(str, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//6.is_within() 字符和指向字符串的指针作为两个参数，返回0和非0值
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//#define QUIT "quit"
//int is_within(char* str, char ch);
//char* s_gets(char* str, int n);
//int main()
//{
//	char str[SIZE] = { 0 };
//	char ch = 0;
//	s_gets(str, SIZE);
//	while (strcmp(str, QUIT))
//	{
//		scanf("%c", &ch);
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		if (is_within(str, ch))
//		{
//			printf("In！\n");
//		}
//		else
//		{
//			printf("Not in!\n");
//		}
//		s_gets(str, SIZE);
//
//	}
//	return 0;
//}
//int is_within(char* str, char ch)
//{
//	int count = 0;
//	int len = (int)strlen(str);
//	while (count < len)
//	{
//		if (*str == ch)
//		{
//			return 1;
//		}
//		str++;
//		count++;
//	}
//	return 0;
//}
//char* s_gets(char* str, int n)
//{
//	char* ret_val = fgets(str, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//7.strncpy(s1, s2, n)把s2中的n个字符拷贝至s1中，截断s2,或者有必要
//的话在末尾添加空字符，如果s2的长度是n或者多于n，目标字符串不能以
//空字符结尾，该函数返回s1。名为mystrncpy()
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//#define QUIT "quit"
////char* mystrncpy(char* s1, char* s2, int n);
//char* mystrncpy(char* p1, char* p2, int n);
//char* s_gets(char* str, int n);
//int main()
//{
//	char s1[SIZE] = { 0 };
//	char s2[SIZE] = { 0 };
//	int num = 0;
//
//	printf("Input the first string (type quit to quit)\n");
//	while (strcmp(s_gets(s1, SIZE), QUIT))
//	{
//		printf("Input the second string (type quit to quit)\n");
//		s_gets(s2, SIZE);
//		printf("Input the number of char copied from s2: \n");
//		scanf("%d", &num);
//		getchar();
//		//mystrncpy(s1, s2, num);
//		//puts(s1);
//		if (strlen(s2) >= num)
//		{
//			s1[strlen(s1) + num] = '\0';
//		}
//		puts(mystrncpy(s1, s2, num));
//		printf("Input the first string (type quit to quit):\n");
//	}
//	printf("Bye!\n");
//	return 0;
//}
////char* mystrncpy(char* s1, char* s2, int n)
////{
////	int len1 = (int)strlen(s1);
////	int len2 = (int)strlen(s2);
////	int i = 0;
////	for (i = 0; i < n; i++)
////	{
////		*(s1 + len1 + i) = *(s2 + i);
////	}
////	if (len2 < n)
////	{
////		*(s1 + len1 + n) = '\0';
////	}
////	return s1;
////}
//char* mystrncpy(char* p1, char* p2, int n)
//{
//	int i = 1;
//	char* p = p1;
//
//	while (*p1++)
//	{
//		continue;
//	}
//	*--p1 = *p2;//p1的'\0',p2的第一个字符
//	while (i < n && *p2)
//	{
//		*++p1 = *++p2;
//		i++;
//	}
//	return p;
//}
//char* s_gets(char* str, int n)
//{
//	char* ret_val = fgets(str, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//8.string_in() 两个字符串的指针，如果第一个字符串包含第二个字符串
//返回第二个字符串在第一个字符串中开始的地址
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//#define QUIT "quit"
//char* string_in(char* p1, char* p2);
//char* s_gets(char* st, int n);
//int main()
//{
//	char str1[SIZE] = { 0 };
//	char str2[SIZE] = { 0 };
//	char* ret_val;
//
//	printf("Input the first string (type quit to quit): \n");
//	while (strcmp(s_gets(str1, SIZE), QUIT))
//	{
//		printf("Input the second string: \n");
//		s_gets(str2, SIZE);
//		ret_val = string_in(str1, str2);
//		if (ret_val)
//		{
//			printf("Find!\n");
//			puts(ret_val);
//		}
//		else
//		{
//			printf("Can't find!\n");
//		}
//		printf("Input the first string(type quit to quit):\n");
//	}
//	return 0;
//}
//char* string_in(char* s1, char* s2)
//{
//	int i = 0;
//	while (*s1)
//	{
//		i = 0;
//		while (s1[i] == s2[i])
//		{
//			i++;
//			if (!s2[i])//'\0'为假
//			{
//				return s1;
//			}
//		}
//		s1++;
//	}
//	return NULL;
//}
////char* string_in(char* p1, char* p2)
////{
////	char* p;
////	int len2 = (int)strlen(p2);
////	while (*p1 != *p2)
////	{
////		p1++;
////		continue;
////	}
////	p = p1;
////	int len1 = (int)strlen(p1);
////	if (len1 >= len2)
////	{
////		int i = 0;
////		for (i = 1; i < len2; i++)
////		{
////			if (*++p1 != *++p2)
////			{
////				break;
////			}
////		}
////		if (i == len2)
////		{
////			return p;
////		}
////	}
////	return NULL;
////}
//char* s_gets(char* str, int n)
//{
//	char* ret_val = fgets(str, n, stdin);
//	int i = 0;
//	if (ret_val)
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//9.把字符串中的内容反序
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//#define QUIT "quit"
//char* s_gets(char* str, int n);
////char* reverse(char* str);
//void reverse(char* st);
//int main()
//{
//	char str[SIZE] = { 0 };
//	while (strcmp(s_gets(str, SIZE), QUIT))
//	{
//		reverse(str);
//		puts(str);
//	}
//	return 0;
//}
//void reverse(char* st)
//{
//	unsigned int i = 0;
//	char temp = 0;
//
//	size_t length = strlen(st);
//	for (i = 0; i < length / 2; i++)
//	{
//		temp = st[length - i - 1];
//		st[length - i - 1] = st[i];
//		st[i] = temp;
//	}
//	st[length] = '\0';
//}
////char* reverse(char* str)
////{
////	int left = 0;
////	int right = (int)strlen(str) - 1;
////	while (left < right)
////	{
////		char temp = *(str + left);
////		*(str + left) = *(str + right);
////		*(str + right) = temp;
////		left++;
////		right--;
////	}
////	return str;
////}
//char* s_gets(char* str, int n)
//{
//	int i = 0;
//	printf("Input the string(type quit to quit):\n");
//	if (fgets(str, n, stdin))
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//10.接受一个字符串作为参数，并删除字符串中的空格
//循环读取输入行，直到用户输入一行空行
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 40
//char* s_gets(char* st, int n);
//void delete_space(char* st);
//int main()
//{
//	char str[SIZE] = { 0 };
//	while (*s_gets(str, SIZE) != '\n')
//	{
//		delete_space(str);
//	}
//	printf("Bye!\n");
//	return 0;
//}
//void delete_space(char* st)
//{
//	int i = 0;
//	char* p = st;
//	printf("\nThe original string is:\n");
//	puts(st);
//	//while (*st)
//	//{
//	//	if (*st == ' ')
//	//	{
//	//		for (i = 0; st[i] != '\0'; i++)
//	//		{
//	//			st[i] = st[i + 1];
//	//		}
//	//	}
//	//	else
//	//	{
//	//		st++;
//	//	}
//	//}
//	while (1)
//	{
//		if (isspace(*st))
//		{
//			st++;
//			continue;
//		}
//		else
//		{
//			*p++ = *st++;
//			i++;
//		}
//		if (!*st)
//		{
//			break;
//		}
//
//	}
//	printf("Now, the string is:\n");
//	//puts(p - i);
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		printf("%c", *(p - i + j));
//	}
//	printf("\n");
//}
//char* s_gets(char* str, int n)
//{
//	int i = 0;
//	printf("Input the string(blank line to quit):\n");
//	if (fgets(str, n, stdin) != NULL && str[0] != '\n')
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//11.读入10个字符串或者读到EOF时停止,5个选项的菜单：打印源字符串列表、
//以ASCII中的顺序打印字符串、按长度递增顺序打印字符串、按字符串中第1个
//单词的长度打印字符串、退出。菜单可以循环显示，除非用户选择退出选项。
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define LIM 10
//#define SIZE 80
//char* s_gets(char* st, int n);
//char get_choice(void);
//void print_sour(char* st[], int n);
//void print_ascii(char* st[], int n);
//void print_length(char* st[], int n);
//void print_first_word(char* st[], int n);
//int first_word(char* st);
//
//int main()
//{
//	char str[LIM][SIZE] = { 0 };
//	char* ptr[LIM];
//	int row = 0;
//	char choice = 0;
//
//	printf("Input some string before EOF (no more tha 10:)\n");
//	while (row < LIM && s_gets(str[row], SIZE) != NULL)
//	{
//		ptr[row] = str[row];
//		row++;
//	}
//	while ((choice = get_choice()) != 'q')
//	{
//		printf("\n");
//		switch (choice)
//		{
//		case 'a':
//			print_sour(ptr, row);
//			break;
//		case 'b':
//			print_ascii(ptr, row);
//			break;
//		case 'c':
//			print_length(ptr, row);
//			break;
//		case 'd':
//			print_first_word(ptr, row);
//			break;
//		default:
//			printf("Error!\n");
//			break;
//		}
//		printf("\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}
//
//char get_choice()
//{
//	char ch = 0;
//	printf("a.print the sourse string.\n");
//	printf("b.print in order of ASCII.\n");
//	printf("c.print in order of length.\n");
//	printf("d.print in order of the first word's length.\n");
//	printf("q.quit\n");
//	
//	printf("Enter a character (a, b, c, d or q):\n");
//	ch = getchar();
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	while (ch < 'a' || ch > 'd' && ch != 'q')
//	{
//		printf("Enter a character (a, b, c, d or q):\n");
//		ch = getchar();
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//	}
//	return ch;
//}
//
//void print_sour(char* st[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		puts(st[i]);
//	}
//}
//
//void print_ascii(char* st[], int n)
//{
//	int i = 0;
//	int j = 0;
//	char* temp;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(st[i], st[j]) > 0)
//			{
//				temp = st[j];
//				st[j] = st[i];
//				st[i] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(st[i]);
//	}
//}
//
//void print_length(char* st[], int n)
//{
//	int i = 0;
//	int j = 0;
//	char* temp;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strlen(st[i]) > strlen(st[j]))
//			{
//				temp = st[i];
//				st[i] = st[j];
//				st[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(st[i]);
//	}
//}
//void print_first_word(char* st[], int n)
//{
//	int i = 0;
//	int j = 0;
//	char* temp;
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (first_word(st[i]) > first_word(st[j]))
//			{
//				temp = st[i];
//				st[i] = st[j];
//				st[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		puts(st[i]);
//	}
//}
//
//int first_word(char* st)
//{
//	int i = 0;
//	int count = 0;
//
//	while (!isalpha(st[i]))
//	{
//		i++;
//	}
//	while (isalpha(st[i]))
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//char* s_gets(char* st, int n)
//{
//	int i = 0;
//	if (fgets(st, n, stdin) != NULL)
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
//		return st;
//	}
//	else
//	{
//		return NULL;
//	}
//}


//12.读取输入，直至读到 EOF，报告读入的单词数、大写字母数、小写字母数、
//标点符号数和数字字符数
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	int word = 0;
//	int upper = 0;
//	int lower = 0;
//	int punct = 0;
//	int digit = 0;
//	int inword = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (!isspace(ch) && !ispunct(ch) && !inword)
//		{
//			inword = 1;
//			word++;
//		}
//		if (isspace(ch) || ispunct(ch) && inword)
//		{
//			inword = 0;
//		}
//		if (isupper(ch))
//		{
//			upper++;
//		}
//		if (islower(ch))
//		{
//			lower++;
//		}
//		if (ispunct(ch))
//		{
//			punct++;
//		}
//		if (isdigit(ch))
//		{
//			digit++;
//		}
//	}
//	printf("word: %d, upper: %d, lower: %d, punct: %d, digit: %d.\n",
//		word, upper, lower, punct, digit);
//	return 0;
//}


//13. 反序显示命令行参数的参数的单词。
//命令行参数是see you later, 该程序应打印later you see 
//#include <stdio.h>
//int main(int argc, char* argv[])
//{
//	int count = 0;
//	for (count = argc; count > 0; count--)
//	{
//		printf("%s ", argv[count]);
//	}
//	return 0;
//}


//14.命令行运行的程序计算幂,第1个命令行参数是double类型的数，
//作为幂的底数，第2个参数是整数，作为幂的指数。
//#include <stdio.h>
//#include <stdlib.h>
//double mypower(double n, int exp);
//int main(int argc, char* argv[])
//{
//	printf("The result is : %g", 
//		mypower(atof(argv[1]), atoi(argv[2])));
//	return 0;
//}
//double mypower(double n, int exp)
//{
//	double pow = 0.0;
//	if (exp > 0)
//	{
//		for (pow = 1; exp > 0; exp--)
//		{
//			pow *= n;
//		}
//	}
//	else if (exp < 0)
//	{
//		if (!n)
//		{
//			printf("It's not defined!\n");
//		}
//		for (pow = 1; exp < 0; exp++)
//		{
//			pow *= 1 / n;
//		}
//	}
//	else if (!exp)
//	{
//		if (!n)
//		{
//			printf("It's not defined!\n");
//		}
//		pow = 1;
//	}
//	return pow;
//}


//15.字符分类函数实现atoi()函数。如果输入的字符串不是纯数字，返回0。
//#include <stdio.h>
//#include <ctype.h>
//int myatoi(char* str);
//char* s_gets(char* str, int n);
//int main()
//{
//	char str[40];
//	s_gets(str, 40);
//	printf("%d\n", myatoi(str));
//	return 0;
//}
//int myatoi(char* str)
//{
//	int sum = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			sum = 10 * sum + (*str - '0');
//		}
//		else
//		{
//			return 0;
//		}
//		str++;
//	}
//	return sum;
//}
//char* s_gets(char* str, int n)
//{
//	int i = 0;
//	if (fgets(str, n, stdin))
//	{
//		while (*(str + i) != '\n' && *(str + i) != '\0')
//		{
//			i++;
//		}
//		if (*(str + i) == '\n')
//		{
//			*(str + i) = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return str;
//}


//16.编写一个程序读取输入，直至读到文件结尾，然后把字符串打印出来。
//该程序识别和实现下面的命令行参数。
//-p 按原样打印
//-u 把输入全部转换成大写
//-l 把输入全部转换成小写
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define SIZE 80
//#define LIM 10
//int main(int argc, char* argv[])
//{
//	int col = 0;
//	int i = 0;
//	int row = 0;
//	char str[LIM][SIZE] = { 0 };
//
//	while (row < LIM && fgets(str[row], SIZE, stdin) != NULL)
//	{
//		if (argc == 1)
//		{
//			;
//		}
//		else if (!strcmp(argv[1], "-p"))
//		{
//			;
//		}
//		else if (!strcmp(argv[1], "-u"))
//		{
//			for (col = 0; str[row][col] != '\0'; col++)
//			{
//				str[row][col] = toupper(str[row][col]);
//			}
//		}
//		else if (!strcmp(argv[1], "-l"))
//		{
//			for (col = 0; str[row][col] != '\0'; col++)
//			{
//				str[row][col] = tolower(str[row][col]);
//			}
//		}
//		row++;
//	}
//	for (i = 0; i < row; i++)
//	{
//		fputs(str[i], stdout);
//	}
//	return 0;
//}