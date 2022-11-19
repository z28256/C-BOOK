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

//指针类型的意义
//1.指针类型决定了进行解引用操作时，一次性访问几个字节，访问权限的大小
//char* 类型的指针，解引用访问1个字节
//int* 类型的指针，解引用访问4个字节
//float* 类型的指针，解引用访问4个字节
//2.指针类型决定指针的步长（+1跳过几个字节）
//字符型char*,跳过1个
//整型int*,跳过4个

//野指针
//1.指针未初始化
//#include <stdio.h>
//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}


//2.越界访问
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)// i=10 越界
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	//返回局部变量或临时变量的地址: a
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
//	int* p = NULL;//NULL:空指针，用来初始化指针
//
//	return 0;
//}

//标准规定
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针
//比较，但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
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

//指针相减，两个指针要指向同一块空间
//相减的绝对值是两个指针之间的元素个数
//#include <stdio.h>
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 0 };
//	printf("%lld\n", &arr[0] - &arr[9]);
//	//“-”: 从“int *”到“char *”的类型不兼容
//	//printf("%lld\n", &ch[0] - &arr[9]);
//	return 0;
//}


//函数求字符串的长度
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
//		//[]是操作符，arr 和 i 都是操作数
//		//printf("%d ", arr[i]);
//		printf("%d ", i[arr]);
//	}
//
//	return 0;
//}