#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* res)
//{
//	assert(dest && res);
//	char* temp = dest;
//	while (*dest++ = *res++)
//	{
//		;
//	}
//	return temp;
//}
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
//	char* p = "hello";
//	char str[20] = { 0 };
//	printf("%s\n", my_strcpy(str, p));
//	printf("%zd\n", my_strlen(p));
//	return 0;
//}

//������ż����ǰ��
//#include <stdio.h>
//void swap(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2)
//		{
//			left++;
//		}
//		while (!(arr[right] % 2))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 4, 5, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//���������������е����У����������кϲ�Ϊһ���������в������
//#include <stdio.h>
//int main()
//{
//	int arr1[3] = { 1, 5, 9 };
//	int arr2[5] = { 7, 99, 155, 666, 999 };
//
//	//int arr[8] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	arr[i] = arr1[i];
//	//}
//	//for (i = 0; i < 5; i++)
//	//{
//	//	arr[i + 3] = arr2[i];
//	//}
//	//for (i = 0; i < 8; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 8 - i - 1; j++)
//	//	{
//	//		if (arr[j] > arr[j + 1])
//	//		{
//	//			int temp = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = temp;
//	//		}
//	//	}
//	//}
//	//for (i = 0; i < 8; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	int i = 0;
//	int j = 0;
//	while (i < 3 && j < 5)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == 3 && j < 5)
//	{
//		for (; j < 5; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < 3; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


//����һ���������У��ж��Ƿ����������У�����ָ�����е�����
//��С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 6, 5, 4 };
//	int i = 0;
//	int flag = 0;
//	for (i = 1; i < 5 - 1; i++)
//	{
//		if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i] ||
//			arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	printf("%s\n", flag ? "unsorted" : "sorted");
//	return 0;
//}


//#include <stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] =
//	{
//		{9801, "zhang", 20},
//		{9802, "wang", 19},
//		{9803, "zhao", 18},
//	};
//	fun(students + 1);
//	return 0;
//}


//1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//#include <stdio.h>
//int main()
//{
//	double money = 20 - 0.5;
//	int bottle = money / 0.5;
//	printf("%d\n", bottle);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//
//	//total = money;
//	//empty = money;
//	//while (empty > 1)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[3][3] = {0};
//	int i = 0;
//	int j = 0;
//	int count = 0;
//
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			//if (i > j && !arr[i][j])
//			//{
//			//	count++;
//			//}
//			if (i > j)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//
//	//if (count == (3 * 3 - 3) / 2)
//	//{
//	//	printf("YES\n");
//	//}
//
//	if (!sum)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//����n��m�еľ���,���������Ƿ����
//#include <stdio.h>
//int main()
//{
//	int arr1[2 * 2] = { 0 };
//	int arr2[2 * 2] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 2 * 2; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < 2 * 2; i++)
//	{
//		scanf("%d", &arr2[i]);
//		if (arr1[i] == arr2[i])
//		{
//			count++;
//		}
//	}
//	if (count == 2 * 2)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;//���Ŵ洢 44332211
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(arr + i));
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//�ַ�������
//#include <stdio.h>
//#include <string.h>
//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
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
//	//char str[] = "hello world";
//	char str[100];
//	scanf("%[^\n]", str);
//	//gets(str);
//	reverse(str);
//	printf("%s\n", str);
//	return 0;
//}


//��ӡˮ�ɻ���
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		int temp = i;
//		int count = 1;
//		int sum = 0;
//		while (temp / 10)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += (int)pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}


//Sn = a + aa + aaa + aaaa + aaaaa
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	int k = a;
//	while (n--)
//	{
//		sum += k;
//		k = k * 10 + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//int i;//ȫ�ֱ���Ĭ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//����ת�� -1 ��ת��Ϊunsigned -1�Ķ�����ȫ��1
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
//#include <stdio.h>
//int main()
//{
//	int arr[2 * 3] = { 0 };
//	int i = 0; 
//	int sum = 0;
//	for (i = 0; i < 2 * 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i] > 0 ? arr[i] : 0;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����ת��
//#include <stdio.h>
//void transform(int n)
//{
//	//if (n / 6)
//	//{
//	//	transform(n / 6);
//	//}
//	//printf("%d", n % 6);
//	if (n)
//	{
//		transform(n / 6);
//		printf("%d", n % 6);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	transform(n);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//����ת��
//#include <stdio.h>
//int main()
//{
//	int arr[2][3] =
//	{
//		{ 1, 2, 3 },
//		{ 4, 5, 6 }
//	};
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������ɾ��ָ������
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 1, 4, 3, 4, 5 };
//	int del = 0;
//	scanf("%d", &del);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c = a = 6
//	b = ++c, c++, ++a, a++;//b = 7, a = 8, c = 8
//	b += a++ + c;//b=7+8+8, a=9
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//������������
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 9;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	
//	return 0;
//}


//ͳ�ƶ�������1�ĸ���
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	if (n < 0)
//	{
//		n = ~n;
//		while (n)
//		{
//			if (n % 2)
//			{
//				count++;
//			}
//			n /= 2;
//		}
//		count = 32 - count;
//	}
//	else
//	{
//		while (n)
//		{
//			if (n % 2)
//			{
//				count++;
//			}
//			n /= 2;
//		}
//	}
//	
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int count_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= n - 1;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_one(n);
//	printf("%d\n", count);
//	return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	printf("������");
//	for (i = 0; i <= 30; i += 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż����");
//	for (i = 1; i <= 31; i += 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}


//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d%d", &n1, &n2);
//	int n = n1 ^ n2;
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//��Ҫ��n��̨��,ÿ�ο���ѡ����һ�׻��������ף�һ���ж������߷���
//#include <stdio.h>
//int kind(int n)
//{
//	int n1 = 1;
//	int n2 = 2;
//	int num = 0;
//	if (n >= 3)
//	{
//		num = kind(n - 1) + kind(n - 2);
//	}
//	else
//	{
//		num = n == 1 ? n1 : n2;
//	}
//	return num;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = kind(n);
//	printf("%d\n", num);
//	//int a = 1;
//	//int b = 2;
//	//int c = a + b;
//	//int i = 0;
//	//for (i = 3; i < n; i++)
//	//{
//	//	a = b;
//	//	b = c;
//	//	c = a + b;
//	//}
//	//if (n >= 3)
//	//{
//	//	printf("%d\n", c);
//	//}
//	//else
//	//{
//	//	printf("%d\n", n == 1 ? a : b);
//	//}
//
//	return 0;
//}


//ð������
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 9, 99, 48, 55, 69, 45, 12, 1, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%zd\n", sizeof(arr));
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char x[] = "abcd";
//	char y[] = { 'a', 'b', 'c', 'd' };
//	printf("%zd %zd\n", sizeof(x), sizeof(y));
//	printf("%zd %zd\n", strlen(x), strlen(y));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//void init(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(arr + i) = 0;
//	}
//}
//void print(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void reverse(int* arr, int n)
//{
//	int i = 0;
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//����쳲�������
//#include <stdio.h>
//int Fib(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int ret = 0;
//	if (n > 2)
//	{
//		ret = Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		ret = 1;
//	}
//	return ret;
//}
//int Fib(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int result = Fib(n);
//	printf("%d\n", result);
//	//int n1 = 1;
//	//int n2 = 1;
//	//int result = n1 + n2;
//	//int i = 0;
//	//for (i = 3; i < n; i++)
//	//{
//	//	n1 = n2;
//	//	n2 = result;
//	//	result = n1 + n2;
//	//}
//	//if (n >= 3)
//	//{
//	//	printf("%d\n", result);
//	//}
//	//else
//	//{
//	//	printf("%d\n", n == 1 ? n1 : n2);
//	//}
//	return 0;
//}


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
////void reverse_string(char* str)
////{
////	int left = 0;
////	int right = my_strlen(str) - 1;
////	while (left < right)
////	{
////		char temp = str[left];
////		str[left] = str[right];
////		str[right] = temp;
////		left++;
////		right--;
////	}
////}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char temp = *str;
//	*str = *(str + len - 1);
//
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = temp;
//}
//
//int main()
//{
//	char str[] = "hello";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//#include <stdio.h>

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int fac(int n)
//{
//	int ret = 1;
//	if (n > 1)
//	{
//		ret = n * fac(n - 1);
//	}
//	else
//	{
//		return ret;
//	}
//}

//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fac(n));
//	return 0;
//}


//�ݹ�ʵ��n��k�η�
//#include <stdio.h>
//int my_power(int n, int k)
//{
//	if (k < 1)
//	{
//		return 1;
//	}
//	return n * my_power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_power(n, k));
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//#include <stdio.h>
////int DigitSum(int n)
////{
////	if (n > 0)
////	{
////		return n % 10 + DigitSum(n / 10);
////	}
////	else
////	{
////		return 0;
////	}
////}
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}


//strlen()��ģ��(�ݹ�ͷǵݹ�)
#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int count = 0;
//int my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		count++;
//		return my_strlen(++str);
//		//return my_strlen(++str) + 1;
//		//return my_strlen(str + 1) + 1;
//	}
//	//else
//	//{
//	//	return 0;
//	//}
//	return count;
//}
//int main()
//{
//	char str[] = "hello";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include <stdio.h>
//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//
//		printf("%d ", n % 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//}

//void print(int n)
//{
//	if (n / 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//�˷��ھ���
//#include <stdio.h>
//void Print_Mul(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d x %-2d = %-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_Mul(n);
//	return 0;
//}


//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include <stdio.h>
//#include <stdbool.h>
//bool is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i * i <= n; i++)
//	{
//		if (!(n % i))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//С��������Ӵ�����ͷ��Ŧ����������Ľ��
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", (1 + n) * n / 2);
//	return 0;
//}

//ǰ����n����,���ݿ��Գ���12�ˣ���2���ӣ���2����
//���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n / 12 * 4 + 2);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		//sum += flag * (1 / (double)i);
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//��9�ĸ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//���ֲ���
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 2, 3, 5, 9, 45, 99, 456 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		if (arr[(left + right) / 2] < k)
//		{
//			left = (left + right) / 2;
//			left++;
//		}
//		else if (arr[(left + right) / 2] > k)
//		{
//			right = (left + right) / 2;
//			right--;
//		}
//		else
//		{
//			printf("�±�Ϊ%d\n", (left + right) / 2);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("Error!\n");
//	}
//	return 0;
//}


//���������������������������Լ��
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d%d", &n1, &n2);
//	
//	//int temp = n1 % n2;
//	//while (temp)
//	//{
//	//	n1 = n2;
//	//	n2 = temp;
//	//	temp = n1 % n2;
//	//}
//
//	int gcd = 0;
//	while (gcd = n1 % n2)
//	{
//		n1 = n2;
//		n2 = gcd;
//	}
//	printf("%d\n", n2);
//	return 0;
//}


