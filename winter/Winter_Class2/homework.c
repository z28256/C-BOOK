#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#pragma pack(4)
//struct A
//{
//	int a;//0-3
//	short b;//4-5
//	int c;//8-11
//	char d;//12   16
//};
//struct B
//{
//	int a;//0-3
//	short b;//4-5
//	char c;//6
//	int d;//8-11   12
//};
//
//struct tagTest1
//{
//    short a;//0-1
//    char d;//2
//    long b;//4-7
//    long c;//8-11  12
//};
//struct tagTest2
//{
//    long b;//0-3
//    short c;//4-5
//    char d;//6
//    long a;//8-11   12
//};
//struct tagTest3
//{
//    short c;//0-1
//    long b;//4-7
//    char d;//8
//    long a;//12-15   16
//};
//
//typedef struct {
//    int a;//0-3
//    char b;//4
//    short c;//6-7
//    short d;//8-9   12
//}AA_t;
//
//#pragma pack()
//
//int main()
//{
//	printf("%d %d\n", sizeof(struct A), sizeof(struct B));
//    printf("%d %d %d\n", sizeof(struct tagTest1), sizeof(struct tagTest2),
//        sizeof(struct tagTest3));
//    printf("%d\n", sizeof(AA_t));
//	return 0;
//}


#include <stdlib.h>
//#define A 2
//#define B 3
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;    //3
//}*Env_Alarm_Record;
//
//int main()
//{
//	struct _Record_Struct* pointer = 
//	(struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	printf("%zd\n", sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%zd\n", sizeof(struct _Record_Struct) * 2 + 3);//3 * 2 + 3 = 9
//	return 0;
//}


#include <string.h>//包含memset
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;  //2 byte
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;//00000010 00101001//02 29
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


//文件名中有一些禁止使用的字符，如/\:*?<>|，文件名可以没有后缀，
//文件的后缀名决定了一个文件的默认打开方式，
//文件路径指的是从盘符到该文件所经历的路径中各符号名的集合


//union Un
//{
//	short s[7];//14   2
//	int n;//4         4   16
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//小端
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//
//    s = &a;
//    s->i[0] = 0x39;// 39 38
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);//38 39
//
//    return 0;
//}


//sscanf是从字符串中读取格式化的数据
//sprintf是把格式化的数据写到字符串中


//int main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 255,
//		A1,
//		B1,
//	};
//	enum ENUM_A enumA = Y1;//1
//	enum ENUM_A enumB = B1;//257
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}


//1 1 2 2 3 3 4 4 5

//void find(int* arr, int n, int* ret)
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		temp ^= arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((temp >> i) & 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] >> pos)
//		{
//			ret[0] ^= arr[i];
//		}
//		else
//		{
//			ret[1] ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {  -1, -2, 3, -2, 4, 4, 5, 3, 5, 6 };
//	int sz = sizeof arr / sizeof arr[0];
//	int ret[2] = { 0 };
//	find(arr, sz, ret);
//	printf("%d %d", ret[0], ret[1]);
//	return 0;
//}


#include <assert.h>
#include <ctype.h>

//enum State
//{
//	Valid,
//	Invalid,
//}state = Invalid;
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str) || *str == '+')
//	{
//		str++;
//	}
//	int flag = 0;
//	if (*str == '-')
//	{
//		flag = 1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = *str - '0' +  ret * 10;
//			if (flag)
//				ret = -ret;
//			if (ret > INT_MAX)
//				return INT_MAX;
//			else if (ret < INT_MIN)
//				return INT_MIN;
//		}
//		else
//		{
//			return (int)ret;
//		}
//		str++;
//	}
//	state = Valid;
//	return (int)ret;
//}
//
//int main()
//{
//	//printf("%d\n", atoi("          -123455555555555555555555555"));
//	if (state == Valid)
//		printf("%d\n", my_atoi("          -123455555555555555555555555"));
//	else
//		printf("非法字符串转换：%d\n", my_atoi("-111111111155555555555"));
//	return 0;
//}


