#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	//char* pc = (char*) & a;
//	//*pc = -1;
//
//	//int i = 0;
//	//char* pc = (char*)&a;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	//*pc = -1;
//	//	//pc++;
//	//	*pc++ = -1;
//	//	printf("%#0x\n", a);
//	//}
//
//	int* pa = &a;
//	char* pc = (char*) & a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//ָ�����͵�����
//1.ָ�����;����˽��н����ò���ʱ��һ���Է��ʼ����ֽڣ�����Ȩ�޵Ĵ�С
//char* ���͵�ָ�룬�����÷���1���ֽ�
//int* ���͵�ָ�룬�����÷���4���ֽ�
//float* ���͵�ָ�룬�����÷���4���ֽ�
//2.ָ�����;���ָ��Ĳ�����+1���������ֽڣ�
//�ַ���char*,����1��
//����int*,����4��

//Ұָ��
//1.ָ��δ��ʼ��
//#include <stdio.h>
//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}


//2.Խ�����
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)// i=10 Խ��
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//3.ָ��ָ��Ŀռ��ͷ�
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	//���ؾֲ���������ʱ�����ĵ�ַ: a
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("asd\n");
//	
//	printf("%d\n", *p);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	int* p = NULL;//NULL:��ָ�룬������ʼ��ָ��
//
//	return 0;
//}

//��׼�涨
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��
//�Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	*vp++ = 0;
//	//}
//
//
//	for (vp = &values[N_VALUES]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//
//	return 0;
//}

//ָ�����������ָ��Ҫָ��ͬһ��ռ�
//����ľ���ֵ������ָ��֮���Ԫ�ظ���
//#include <stdio.h>
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 0 };
//	printf("%lld\n", &arr[0] - &arr[9]);
//	//��-��: �ӡ�int *������char *�������Ͳ�����
//	//printf("%lld\n", &ch[0] - &arr[9]);
//	return 0;
//}


//�������ַ����ĳ���
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*(str + count) != '\0')
//	//{
//	//	count++;
//	//}
//	//return count;
//
//	//char* start = str;
//	//while (*str != '\0')
//	//{
//	//	str++;
//	//}
//	//return (int)(str - start);
//
//	char* start = str;
//	while (*str++ != '\0')
//	{
//		;
//	}
//	return (int)(str - start) - 1;
//
//}
//int main()
//{
//	char arr[] = "asdf";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p++ = i + 1;
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p++);
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(arr + i));
//		//printf("%d ", *(i + arr));
//		
//		//[]�ǲ�������arr �� i ���ǲ�����
//		//printf("%d ", arr[i]);
//		printf("%d ", i[arr]);
//	}
//
//	return 0;
//}