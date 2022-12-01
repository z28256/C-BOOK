#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%[^\n]", arr);
//	reverse(arr, arr + strlen(arr) - 1);
//
//	char* i = arr;
//	while (*i)
//	{
//		char* temp = i;
//		while (*i != ' ' && *i != '\0')
//		{
//			i++;
//		}
//		reverse(temp, i - 1);
//		if (*i)
//		{
//			i++;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	scanf("%d%d", &n1, &n2);
//
//	//1.
//	//int t1 = n1;
//	//int t2 = n2;
//	//int temp = 0;
//	//while (temp = n1 % n2)
//	//{
//	//	n1 = n2;
//	//	n2 = temp;
//	//}
//	//printf("%d\n", t1 * t2 / n2);
//
//	//2.
//	//int i = 1;
//	//int ret = n1;
//	//while (ret % n2 || ret % n1)
//	//{
//	//	ret = n1;
//	//	ret *= i;
//	//	i++;
//	//}
//	//printf("%d\n", ret);
//
//	return 0;
//}


//f2 = f1 + f0 + 1 = 2 + 1 = 3
//f3 = f2 + f1 + 1 = 3 + 1 + 1 = 5
//f4=f3+f2+1=5+3+1=9
//f5=f4+f3+1=9+5+1=15
//f6=f5+f4+1=15+9+1=25
//f7=f6+f5+1=41
//f8=f7+f6+1=41+25+1=67

//#include <stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//	return 0;
//}