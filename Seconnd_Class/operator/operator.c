#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));//����ָ���С��x64 : 8, x86: 4
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
//	printf("%d\n", arr[4]);	//[] - �±����ò��������������ǣ�arr, 4
//
//	int len = strlen("asd");//():�������ò���������������strlen,"asd"
//
//	return 0;
//}


//�������ͣ�char, int, long, float, double...
//�Զ������ͣ��ۺ����ͣ����ṹ�壬ö�٣�������
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


//����������char short ��int����С�� ת����int��
//�з��Ų�����λ���޷��Ų�0
//#include <stdio.h>
//int main()
//{
//	//charĬ��Ϊ�з���
//	char a = 3;
//	//00000000000000000000000000000011 
//	//�ض�  00000011 
//	char b = 127;
//	//00000000000000000000000001111111 
//	//�ض�  01111111
//	char c = a + b;
//	//a : 00000011
//	// �������� 00000000000000000000000000000011 
//	//b : 01111111
//	// �������� 00000000000000000000000001111111 
//	// 00000000000000000000000010000010 
//	//�ض� c : 10000010
//	printf("%d\n", c);
//	//%d ��ӡʮ��������
//	//c����������������λ������1
//	// 11111111111111111111111110000010  ����
//	// 11111111111111111111111110000001  ����
//	// 10000000000000000000000001111110  ԭ�� -126
//	return 0;
//}

//char : �з��ţ�-128~127  �޷��ţ�0~255

//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)//���ʽ��a��������Ϊ��������0xb6Ϊ����
//	{
//		printf("a");
//	}
//	if (b == 0xb600)//��������b
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
//	//-c�Ǹ����ʽ,c��������,��c��ֵ��δ�仯(sizeof�ڵı��ʽ������)
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