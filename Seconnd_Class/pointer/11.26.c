#define _CRT_SECURE_NO_WARNINGS 1

//VS2022 X86�����»����ѭ����X64 �����»ᱨ��
//��vc6.0�£�i��arr֮��û�ж���Ŀռ�   i<=10
//��gcc�£�i��arr֮����һ�����Ϳռ�		i<=11

//�ֲ������Ƿ����ڴ��е�ջ����
//ջ����ʹ��ϰ���ǣ�
//��ʹ�øߵ�ַ���Ŀռ�(i)
//��ʹ�õ͵�ַ���Ŀռ�(arr)

//���������±����������ַ���ɵ͵��߱仯��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	for (i = 0; i <= 7; i++)
//	{
//		printf("%d\n", arr[i]);
//		arr[i] = 0;
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//����'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include <assert.h>
//
//void my_strcpy(char* dest, char* src)
//{
//	//if (src == NULL || dest == NULL)
//	//{
//	//	return;
//	//}
//
//	//����
//	//assert�п��Է�һ�����ʽ�����ʽ���Ϊ�٣��ᱨ��Ϊ�棬����
//	//assert��ʵ��release�汾���Ż�����
//	//assert(src != NULL);
//	assert(src && dest);//ͨ�������ж�ָ�����Ч��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//char arr1[] = "xxxxxxx";
//	//char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	char arr3[20] = { 0 };
//	char* p = NULL;
//	my_strcpy(arr3, p);
//	return 0;
//}


//�⺯����strcpy���ص���Ŀ��ռ����ʼ��ַ

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* temp = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return temp;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//
//	//��ʽ����
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	const int num = 10;
//	//num = 20;  num��const���Σ����ܱ��޸�
//
//	int n = 1000;
//
//	//int* const p = &num;
//	//*p = 20;
//	////p = &n;//err
//
//	//const int* p = &num;
//	////*p = 20;//err
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}


//const����ָ�����
//1.const�� * �����,const���ε���ָ��ָ�������,ʹ�䲻��ͨ��ָ���޸�
//����ָ�������������޸�
//2.const�� * ���Ҳ�,const���ε���ָ���������,ʹ�䲻���޸�
//����ָ��ָ������ݿ���ͨ��ָ���޸�

//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = (++i) + (++i) + (++i);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "asdfg";
//	printf("%zd\n", my_strlen(str));
//	return 0;
//}


#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
