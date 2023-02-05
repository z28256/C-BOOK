#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>

//size_t strlen(const char* str);

//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hi";
//	if (strlen(str2) - strlen(str1) > 0)//类型转换为unsigned
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf(">=\n");
//	}
//	return 0;
//}


//size_t my_strlen1(const char* str)
//{
//	size_t count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//size_t my_strlen2(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen2(str + 1);
//	return 0;
//}
//
//size_t my_strlen3(const char* str)
//{
//	const char* temp = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - temp - 1;
//}
//
//int main()
//{
//	const char* str = "hello world!";
//	printf("%zd\n", my_strlen1(str));
//	printf("%zd\n", my_strlen2(str));
//	printf("%zd\n", my_strlen3(str));
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "xxxxxxxxx";
//	char str2[20] = "xxxxxxxxx";
//	const char* p = "hello\n";
//	//第一个参数是数组名，不能用指针，因为指针指向的内容不能被更改
//	//第二个参数是可以数组名或指针
//	printf(strcpy(str1, p));
//	printf(my_strcpy(str2, p));
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char str1[] = "xx\0xxxxxxxxxxxx";
//	char str2[] = "xx\0xxxxxxxxxxxx";
//	const char* p = "hello\n";
//	//目标数组空间足够大，从第一个'\0'开始追加，不能追加自己
//	printf(strcat(str1, p));
//	printf(my_strcat(str2, p));
//	//printf(strcat(str1, str1));//死循环
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (!*str1)
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 > *str2 ? 1 : -1;
//}
//
//
//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "ad";
//	printf("%d\n", my_strcmp(p1, p2));
//	printf("%d\n", my_strcmp(p1, p1));
//	printf("%d\n", my_strcmp(p2, p1));
//	printf("%d\n", strcmp(p1, p2));
//	printf("%d\n", strcmp(p1, p1));
//	printf("%d\n", strcmp(p2, p1));
//	return 0;
//}

//int my_strncmp(const char* str1, const char* str2, int n)
//{
//	assert(str1 && str2);
//	for (int i = 0; i < n; i++)
//	{
//		if (*(str1 + i) > *(str2 + i))
//		{
//			return 1;
//		}
//		else if (*(str1 + i) < *(str2 + i))
//		{
//			return -1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcddd";
//	printf("%d\n", strncmp(p1, p2, 4));//0
//	printf("%d\n", strncmp(p1, p2, 5));//1
//	printf("%d\n", my_strncmp(p1, p2, 4));//0
//	printf("%d\n", my_strncmp(p1, p2, 5));//1
//	return 0;
//}


//char* my_strncat(char* dest, const char* src, int n)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n--)
//	{
//		if (!(*dest++ = *src++))
//			return ret;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "xx\0xxxxxxxxxxxx";
//	char str2[] = "xx\0xxxxxxxxxxxx";
//	const char* p = "hello\n";
//	printf(strncat(str1, p, 3));//末尾加上'\0'
//	printf(strncat(str1, p, 10));//末尾加上'\0'
//	printf(my_strncat(str2, p, 3));
//	printf(my_strncat(str2, p, 10));
//	//printf(strncat(str1, str1, 16));//死循环
//	return 0;
//}


//char* my_strncpy(char* dest, const char* src, int n)
//{
//	char* ret = dest;
//	while (n--)
//	{
//		if (*src)
//		{
//			*dest++ = *src++;
//		}
//		else
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char str[20] = "xxxxxxxxxxxx\n";
//	const char* p = "hello";
//	//printf(my_strncpy(str, p, 2));
//	////只拷贝输入的n个字符，当src中的字符小于n时，拷贝'\0'到目标字符串直到n个字符
//	//printf(my_strncpy(str, p, 10));
//
//	printf(strncpy(str, p, 2));
//	printf(strncpy(str, p, 10));
//
//	return 0;
//}


//char * strstr ( const char *str1, const char * str2);

//char* my_strstr(const char* str1, const char* str2)
//{
//    assert(str1 && str2);
//    const char* pc = str1;
//    const char* s1 = NULL;
//    const char* s2 = NULL;
//    if (!*str2)
//        return (char*)str1;
//    while (1)
//    {
//        s1 = pc;
//        s2 = str2;
//        while (*s1 == *s2 && *s2)
//        {
//            s1++;
//            s2++;
//        }
//
//        if (!*s2)
//            return (char*)pc;
//
//        if (!*s1)
//            return NULL;
//        pc++;
//    }
//}
//
//
//int main()
//{
//    const char* p1 = "abbbcdef";
//    const char* p2 = "bbc";
//
//    printf(strstr(p1, p2));
//    printf(my_strstr(p1, p2));
//    return 0;
//}


//char * strtok ( char * str, const char * sep )
//int main()
//{
//	char str[] = "1234567890";
//	const char* sep = "937";
//	for (char* p = strtok(str, sep); p; p = strtok(NULL, sep))
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}


//errno  strerror
#include <errno.h>
//int main()
//{
//	FILE* fp = fopen("temp.txt", "r");
//	if (!fp)
//	{
//		printf("%s\n", strerror(errno));
//		perror("fp");
//		return 1;
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


#include <ctype.h>

//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", tolower('A'));
//	return 0;
//}


//int main()
//{
//	char str[] = "hello world";
//	
//	//int len = (int)strlen(str);
//	//for (int i = 0; i < len ; i++)
//	//{
//	//	printf("%c", toupper(str[i]));
//	//}
//
//	int i = 0;
//	while (str[i])
//	{
//		if (islower(str[i]))
//			str[i] = toupper(str[i]);
//		printf("%c", str[i]);
//		i++;
//	}
//	return 0;
//}


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}


//int main()
//{
//	int num1[5] = { 1, 2, 3, 4, 5 };
//	int num2[5] = { 0 };
//	my_memcpy(num2, num1, 20);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", num2[i]);
//	}
//	my_memmove(num1 + 2, num1, 12);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", num1[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 1, 2, 4 };
//	printf("%d\n", memcmp(arr1, arr2, 8));
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world";
//	memset(arr + 2, 'x', 6);
//	printf("%s\n", arr);
//	return 0;
//}


//匿名结构体类型(只能使用一次)
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
//
//int main()
//{
//	p = &x;		//“=”: 从“*”到“*”的类型不兼容(非法)
//	return 0;
//}


//结构体的自引用(指针)
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;//此时不能在结构体内部使用Node*


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//结构体内存对齐

//struct S1
//{
//	char c1;//0
//	int i;//4567
//	char c2;//8    12
//};
//
//struct S2
//{
//	char c1;//0
//	char c2;//1
//	int i;//4567   8
//};
//
//struct S3
//{
//	double d;//0-7
//	char c;//8
//	int i;//12-15   16
//};
//
//struct S4
//{
//	char c1;//0
//	struct S3 s3;//8-23
//	double d;//24-31   32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}


//修改默认对齐数
#include <stddef.h>

//#pragma pack(2)
//
//struct S1
//{
//	char c1;//0
//	int i;//2345
//	char c2;//6  8
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//位段
//struct S
//{
//	int a : 4;
//	int b : 3;
//	int c : 10;
//	int d : 30;
//};
//
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct s));
//	struct s s = { 10, 12, 3, 4 };
//	//00001010
//	//00000010//3bit
//	//01100010//4bit
//	//01100010 00000011 00000100
//	//0x62 03 04(内存存储的内容)
//	return 0;
//}


//struct S
//{
//	int a;//0-3
//	char c[5];//4-8
//	double d;//16-23
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//24
//	return 0;
//}


//typedef enum sex
//{
//	female,
//	male = -5,
//	secret,
//}sex;
//
//int main()
//{
//	sex v1 = female;//直接赋值0/-5/-4（不会报错,但不推荐）
//	sex v = -7;//-7不在sex的取值范围内，但不报错(cpp中会报错,0/-5/-4也都会报错)
//	sex v2 = secret;
//	printf("%d\n", v1);//0
//	printf("%d\n", v2);//-4
//	printf("%d\n", v);//-7
//	printf("%d\n", sizeof(sex));//4
//	return 0;
//}


//成员都使用同一块地址
//union MyUnion
//{
//	char c;
//	int i;
//};

//int main()
//{
//	union MyUnion un1;
//	printf("%p\n", &un1);
//	printf("%p\n", &un1.c);
//	printf("%p\n", &un1.i);
//	return 0;
//}

//int main()
//{
//	union MyUnion un = { .i = 1 };
//	if (un.c)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//内存对齐
//union UN
//{
//	char c[5];//1/8 1  0-4
//	int i;//4/8 4
//	//5->8
//};
//
//union UN2
//{
//	short sh[7];//2/8-2  2*7  0-13  14->16
//	int i;//4/8 4
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(union UN));//8
//	printf("%zd\n", sizeof(union UN2));//16
//	return 0;
//}