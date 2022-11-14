#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));//计算指针大小：x64 : 8, x86: 4
//}
//void test2(char arr[])
//{
//	printf("%zd\n", sizeof(arr));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c = %d\n", c);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", arr[4]);	//[] - 下标引用操作符，操作数是：arr, 4
//
//	int len = strlen("asd");//():函数调用操作符，操作数：strlen,"asd"
//
//	return 0;
//}


//内置类型：char, int, long, float, double...
//自定义类型（聚合类型）：结构体，枚举，联合体
//#include <stdio.h>
//struct Book
//{
//	char name[20];
//	char author[30];
//	double price;
//};
//void print(struct Book*);
//int main()
//{
//	struct Book b1 = { "CCC", "c", 12.5 };
//	struct Book b2 = { "BBB", "b", 6.21 };
//
//	printf("%s %s %.2f\n", b1.name, b1.author, b1.price);
//	printf("%s %s %.2f\n", b2.name, b2.author, b2.price);
//
//	print(&b1);
//	return 0;
//}
//void print(struct Book* b1)
//{
//	printf("%s %s %.2f\n", (*b1).name, (*b1).author, (*b1).price);
//	printf("%s %s %.2f\n", b1->name, b1->author, b1->price);
//}


//#include <stdio.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//	double score;
//};
//void set_age1(struct Stu);
//void set_age2(struct Stu*);
//int main()
//{
//	struct Stu stu;
//	struct Stu* pstu = &stu;
//
//	stu.age = 20;
//	set_age1(stu);
//	printf("%d\n", stu.age);
//
//	pstu->age = 20;
//	set_age2(pstu);
//	printf("%d\n", stu.age);
//
//	return 0;
//}
//void set_age1(struct Stu stu)
//{
//	stu.age = 18;
//}
//void set_age2(struct Stu* pstu)
//{
//	pstu->age = 18;
//}


//整型提升（char short 比int类型小的 转换成int）
//有符号补符号位，无符号补0
//#include <stdio.h>
//int main()
//{
//	//char默认为有符号
//	char a = 3;
//	//00000000000000000000000000000011 
//	//截断  00000011 
//	char b = 127;
//	//00000000000000000000000001111111 
//	//截断  01111111
//	char c = a + b;
//	//a : 00000011
//	// 整型提升 00000000000000000000000000000011 
//	//b : 01111111
//	// 整型提升 00000000000000000000000001111111 
//	// 00000000000000000000000010000010 
//	//截断 c : 10000010
//	printf("%d\n", c);
//	//%d 打印十进制整数
//	//c整型提升：补符号位，即补1
//	// 11111111111111111111111110000010  补码
//	// 11111111111111111111111110000001  反码
//	// 10000000000000000000000001111110  原码 -126
//	return 0;
//}

//char : 有符号：-128~127  无符号：0~255

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)//表达式中a整型提升为负数，而0xb6为正数
//	{
//		printf("a");
//	}
//	if (b == 0xb600)//整型提升b
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%zd\n", sizeof(c));
//	printf("%d\n", c);
//	//-c是个表达式,c整型提升,但c的值仍未变化(sizeof内的表达式不计算)
//	printf("%zd\n", sizeof(-c));
//	printf("%d\n", c);
//	printf("%zd\n", sizeof(+c));
//	printf("%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}