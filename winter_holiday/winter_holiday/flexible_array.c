#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//�ڴ�й©
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);//str����ʱ����
//	strcpy(str, "hello world");//str��ΪNULL;
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}

//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test()
//{
//	char* str = NULL;
//	//GetMemory(&str);
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int main()
//{
//	char* p = "hehe\n";
//	printf("hehe\n");
//	printf(p);
//	return 0;
//}


//char* GetMemory(void)
//{
//	//char p[] = "hello world";
//	char* p = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//����ջ�ռ��ַ������
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 15;
//	return &a; //���ؾֲ���������ʱ�����ĵ�ַ: a
//}
//int main()
//{
//	int* p = test();
//	//printf("abcd\n");
//	printf("%d\n", *p);
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);//�ڴ�й©
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	if (!str)
//	{
//		perror("malloc");
//		return;
//	}
//	strcpy(str, "hello");//str������0
//	free(str);//δ��ΪNULL
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա
//	//int a[0];//���������Ա
//}type_a;
//
//int main()
//{
//	printf("%zd\n", sizeof(type_a));
//	return 0;
//}


//struct S
//{
//	int n;
//	char arr[];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(char));
//	if (!ps)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 'a';
//		printf("%c\n", ps->arr[i]);
//	}
//	//����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 15 * sizeof(char));
//	if (!ptr)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int i;
//	char* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (!ps)
//	{
//		perror("malloc ps");
//		return 1;
//	}
//	ps->i = 10;
//	ps->arr = (char*)malloc(10 * sizeof(char));
//	if (!(ps->arr))
//	{
//		perror("malloc ps->arr");
//		return 1;
//	}
//	int n = 0;
//	for (n = 0; n < 10; n++)
//	{
//		ps->arr[n] = 'a' + n;
//		printf("%c\n", ps->arr[n]);
//	}
//	char* ptr = (char*)realloc(ps->arr, 15 * sizeof(char));
//	if (!ptr)
//	{
//		perror("recalloc ptr");
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		fclose(pFile);
//	}
//	return 0;
//}