#define _CRT_SECURE_NO_WARNINGS 1
//1.���һ���������������л�ȡn���ַ����ѽ���洢��һ��������
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
 

//2.�ı�1��n���ַ���ֹͣ�����ڵ�һ���հס����з����Ʊ��ֹͣ
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


//3.��һ�������а�һ�����ʶ���һ�������У��������������е������ַ���
//�ú���Ӧ��������1���ǿհ��ַ�ǰ������пհס�
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


//4.����3�����ܵڶ�������ָ���ɶ�ȡ������ַ���
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
//	*str = ch;//����ĵ�һλԪ��
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
//	*(ar + i) = '\0';//ֻ����ʾ9��
//}


//5.��1�������β�ָ���ַ�������2�������β�ָ���ַ�,�����״γ���λ�á�
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
//	while (count++ < len)//���ܲ���ȫ��Ԫ�أ�str�ڱ仯
//	//while (count++ < strlen(str))//���ܲ���ȫ��Ԫ�أ�str�ڱ仯
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


//6.is_within() �ַ���ָ���ַ�����ָ����Ϊ��������������0�ͷ�0ֵ
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
//			printf("In��\n");
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


//7.strncpy(s1, s2, n)��s2�е�n���ַ�������s1�У��ض�s2,�����б�Ҫ
//�Ļ���ĩβ��ӿ��ַ������s2�ĳ�����n���߶���n��Ŀ���ַ���������
//���ַ���β���ú�������s1����Ϊmystrncpy()
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
//	*--p1 = *p2;//p1��'\0',p2�ĵ�һ���ַ�
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


//8.string_in() �����ַ�����ָ�룬�����һ���ַ��������ڶ����ַ���
//���صڶ����ַ����ڵ�һ���ַ����п�ʼ�ĵ�ַ
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
//			if (!s2[i])//'\0'Ϊ��
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


//9.���ַ����е����ݷ���
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


//10.����һ���ַ�����Ϊ��������ɾ���ַ����еĿո�
//ѭ����ȡ�����У�ֱ���û�����һ�п���
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


//11.����10���ַ������߶���EOFʱֹͣ,5��ѡ��Ĳ˵�����ӡԴ�ַ����б�
//��ASCII�е�˳���ӡ�ַ����������ȵ���˳���ӡ�ַ��������ַ����е�1��
//���ʵĳ��ȴ�ӡ�ַ������˳����˵�����ѭ����ʾ�������û�ѡ���˳�ѡ�
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


//12.��ȡ���룬ֱ������ EOF���������ĵ���������д��ĸ����Сд��ĸ����
//���������������ַ���
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


//13. ������ʾ�����в����Ĳ����ĵ��ʡ�
//�����в�����see you later, �ó���Ӧ��ӡlater you see 
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


//14.���������еĳ��������,��1�������в�����double���͵�����
//��Ϊ�ݵĵ�������2����������������Ϊ�ݵ�ָ����
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


//15.�ַ����ຯ��ʵ��atoi()���������������ַ������Ǵ����֣�����0��
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


//16.��дһ�������ȡ���룬ֱ�������ļ���β��Ȼ����ַ�����ӡ������
//�ó���ʶ���ʵ������������в�����
//-p ��ԭ����ӡ
//-u ������ȫ��ת���ɴ�д
//-l ������ȫ��ת����Сд
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