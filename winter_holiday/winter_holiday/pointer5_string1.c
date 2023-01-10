#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT  cpp: c+2
//	printf("%s\n", *-- * ++cpp + 3);//cpp:c+1 c+1:c enter//ER
//	printf("%s\n", *cpp[-2] + 3);//c+3:first//ST
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1):*(c+2-1) *(c+1) //EW
//	return 0;
//}


//strlen()
//size_t strlen( const char *string );
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strlen(const char*);
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	//if (strlen(str2) - strlen(str1) > 0)
//	if (my_strlen(str2) - my_strlen(str1) > 0)
//	{
//		printf("str2 > str1\n");
//	}
//	else
//	{
//		printf("str1 >= str2\n");
//	}
//	int ret = my_strlen(str1);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* temp = str;
//	while (*++str)
//	{
//		;
//	}
//	return str - temp;
//}


//strcpy 
//char* strcpy(char * destination, const char * source );
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcpy(char*, const char*);
//int main()
//{
//	char* p = "abcdef";
//	//char p[4] = { 'a', 'b', 'c', 'd' };
//	char arr[20] = { 0 };
//	my_strcpy(arr, p);
//	//strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}


//strcat
//char *strcat(char* strDestination, const char* strSource);
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//char* my_strcat(char*, const char*);
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//char arr2[] = { 'a', 'c' };//err
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
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


//strcmp
//int strcmp(const char* string1,const char* string2);
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2);
//int main()
//{
//	char* s1 = "abc";
//	char* s2 = "\0";
//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", my_strcmp(s1, s2));
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (!*str1)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//	
//}


//strncpy
//char *strncpy(char* strDest,const char* strSource,size_t count);
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

//char* my_strncpy(char* dest, const char* src, int n);
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello";
//	//char arr3[] = "world";
//	//my_strncpy(arr1, arr2, 3);
//	//printf("%s\n", arr1);
//	//my_strncpy(arr1, arr3, 2);
//	//printf("%s\n", arr1);
//	char arr[20] = "xxxxxxxxxxxxxx";
//	//strncpy(arr, "abcd", 4);
//	strncpy(arr, "abcd", 10);
//	printf("%s\n", arr);
//	//strncpy(arr1, arr2, 4);
//	return 0;
//}
//char* my_strncpy(char* dest, const char* src, int n)
//{
//	char* ret = dest;
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}


//char *strncat(char* strDest,const char* strSource,size_t count);
//char *my_strncat(char* dest,const char* src,int n);
//
//int main()
//{
//	char arr[20] = "abc\0xxxxxxxx";
//	strncat(arr, "asdfdgh", 3);
//	printf("%s\n", arr);
//
//	my_strncat(arr, "asdfdgh", 3);
//	printf("%s\n", arr);
//	return 0;
//}
//
//char* my_strncat(char* dest, const char* src, int n)
//{
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}


//int strncmp(const char* string1,const char* string2,size_t count);
//int my_strncmp(const char* str1, const char* str2, int n);
//int main()
//{
//	char* p1 = "bcd";
//	char* p2 = "abcfd";
//	printf("%d\n", my_strncmp(p1, p2, 4));
//	printf("%d\n", strncmp(p1, p2, 4));
//	return 0;
//}
//int my_strncmp(const char* str1, const char* str2, int n)
//{
//	assert(str1 && str2);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (*(str1 + i) == *(str2 + i))
//		{
//			if (i == n - 1)
//			{
//				return 0;
//			}
//			continue;
//		}
//		return *(str1 + i) > *(str2 + i) ? 1 : -1;
//	}
//}


//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}


//char *strstr(const char* str,const char* strSearch);

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2);
//
//int main()
//{
//	char arr1[] = "abbbcdbbcef";
//	char arr2[] = "bbc";
//	printf("%s\n", strstr(arr1, arr2));
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (!*str2)
//	{
//		return (char*)str1;
//	}
//	const char* p1 = NULL;
//	const char* p2 = NULL;
//	const char* ret = str1;
//	while (*ret)
//	{
//		p1 = ret;
//		p2 = str2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//		{
//			return (char*)ret;
//		}
//		ret++;
//	}
//	return NULL;
//}


//int main()
//{
//	char arr[] = "zcvb.sdf/sdf";
//	char* p = "s.";
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	//for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	//{
//	//	printf("%s\n", ret);
//	//}
//	ret = strtok(buf, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}