#define _CRT_SECURE_NO_WARNINGS 1
//6.1 summing.c  根据用户键入的整数求和
// scanf()读取成功返回值是1，失败是0
//#include <stdio.h>
//int main(void)
//{
//	long num = 0L;
//	long sum = 0L;
//	int status = 0;
//
//	printf("Please enter an integer to be summed (q to quit): \n");
//	//status = scanf("%ld", &num);
//	//while (status == 1)
//	while(scanf("%ld", &num) != EOF)	//三次Ctrl + z 后，输出结果
//	{
//		sum += num;
//		printf("Please enter next integer (q to quit): \n");
//		//status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld\n", sum);
//	
//	return 0;
//}


//6.2 when.c  何时退出循环
//#include <stdio.h>
//int main(void)
//{
//	int n = 5;
//	
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n", n);
//	}
//	printf("The loop has finished.\n");
//
//	return 0;
//}


//6.3 while 1.c 注意花括号的使用
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (n < 3)
//		printf("n is %d\n", n);
//		n++;
//	printf("That's all this program does\n");
//	return 0;
//}


//6.4 while2.c程序  注意分号的位置
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d\n", n);		// n = 4
//	printf("That's all this program does.\n");
//	return 0;
//}


//6.5 cmpflt.c 浮点数比较
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response = 0;
//
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//
//	return 0;
//}


//6.6 t_and_f.c  C中真和假的值
//#include <stdio.h>
//int main(void)
//{
//	int true_val = 0;
//	int false_val = 0;
//	true_val = (10 > 2);
//	false_val = (10 == 2);
//	printf("true = %d; false = %d\n", true_val, false_val);
//	return 0;
//}


//6.7 truth.c  哪些值为真
//#include <stdio.h>
//int main(void)
//{
//	int n = 3;
//	while (n)
//	{
//		printf("%2d is true\n", n--);
//	}
//	printf("%2d is false\n", n);
//	n = -3;
//	while (n)
//	{
//		printf("%2d is true\n", n++);
//	}
//	printf("%2d is false\n", n);
//
//	return 0;
//}


//6.8 trouble.c 误用“=”会导致无限循环
//scanf()会从上一次读取失败的地方重新读取，输入q后会一直读取q,然后一直失败
//#include <stdio.h>
//int main(void)
//{
//	long num = 0L;
//	long sum = 0L;
//	int status = 0;
//
//	printf("Please enter an integer to be summed (q to quit):\n");
//	status = scanf("%ld", &num);
//	while (status = 1)		//status = 1 语句的值为1
//	{
//		sum += num;
//		printf("Please enter next integer (q to quit):\n");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld\n", sum);
//
//	return 0;
//}


//6.9 boolean.c  使用_Bool/bool(C99,<stdbool.h>)类型的变量
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	long num = 0L;
//	long sum = 0L;
//	bool input_is_good = 0;
//
//	printf("Please enter an integer to be summed (q to quit): \n");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good)
//	{
//		sum += num;
//		printf("Please enter next integer (q to quit): \n");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld\n", sum);
//
//	return 0;
//}


//优先级：算术 > 关系(>,<, ==) > 赋值(=,*=,+=)
//关系运算符的结合律是从左往右（赋值，从右往左）
//ex != wye == zee 与 (ex != wye) == zee相同


//6.10 sweetie1.c  一个计数循环
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 22;
//	int count = 1;
//	while (count <= NUMBER)
//	{
//		printf("%2d: Be my Valentine!\n", count);
//		count++;
//	}
//	return 0;
//}


//6.11 sweetie2.c  使用for循环的计数循环
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 22;
//	int count = 0;
//	for (count = 1; count <= NUMBER; count++)
//	{
//		printf("%d: Be my Valentine!\n", count);
//	}
//	return 0;
//}


//6.12 for_cube.c  创建立方表
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	printf(" n   n_cubed\n");
//	for (num = 1; num <= 6; num++)
//	{
//		printf("%2d%8d\n", num, num * num * num);
//	}
//	return 0;
//}


//for_down.c  使用递减运算符来递减计数器
//#include <stdio.h>
//int main(void)
//{
//	int secs = 0;
//	for (secs = 5; secs > 0; secs--)
//	{
//		printf("%d seconds!\n", secs);
//	}
//	printf("We have ignition!\n");
//	return 0;
//}


//for_13s.c  可以让计数器递增2、10
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	for (n = 2; n < 60; n += 13)
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}


//for_char.c  可以使用字符代替数字计数
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		printf("The ASCII value for %c is %d\n", ch, ch);
//	}
//	return 0;
//}


//for_geo.c 让递增的量几何增长
//#include <stdio.h>
//int main(void)
//{
//	double debt = 0;
//	for (debt = 100.0; debt < 150.0; debt *= 1.1)
//	{
//		printf("Your debt is now $%.2f.\n", debt);
//	}
//	return 0;
//}


//for_wild.c
//#include <stdio.h>
//int main(void)
//{
//	int x = 0;
//	int y = 55;
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//	{
//		printf("%d%5d\n", x, y);
//	}
//	return 0;
//}


//for_none.c  省略表达式
//#include <stdio.h>
//int main(void)
//{
//	int ans = 2;
//	int n = 0;
//	for (n = 3; ans <= 25;)
//	{
//		ans *= n;
//	}
//	printf("n = %d; ans = %d.\n", n, ans);
//	return 0;
//}


//for_show.c
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	for (printf("Keep entering numbers!\n"); num != 6; )
//	{
//		scanf("%d", &num);
//	}
//	printf("That's the one I want!\n");
//	return 0;
//}


//x *= 3 * y + 12 与 x = x * (3 * y + 12) 相同
// *= 的优先级与 = 相同，比 +, * 都低 
//6.13 postage.c  一类邮资
//#include <stdio.h>
//int main(void)
//{
//	const int FIRST_OZ = 46;
//	const int NEXT_OZ = 20;
//	int ounces = 0;
//	int cost = 0;
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//	{
//		printf("%5d   $%4.2f\n", ounces, cost / 100.0);
//	}
//	return 0;
//}

//逗号表达式从左往右进行，逗号表达式的值为右侧表达式的值
//houseprice = 249, 500; 与 houseprice = 249;500;相同，
// 整个逗号表达式houseprice = 249, 500;的值为500
//houseprice = (249, 500);赋给houseprice的值为500
//#include <stdio.h>
//int main(void)
//{
//	int houseprice = 0;
//	houseprice = 249, 500;
//	printf("%d\n", houseprice);
//	printf("%d\n", (houseprice = 249, 500));
//	houseprice = (249, 500);
//	printf("%d\n", houseprice);
//	return 0;
//}


//6.14 zeno.c  求序列的和
//#include <stdio.h>
//int main(void)
//{
//	int t_ct = 1;
//	double time = 0;
//	double power_of_2 = 1;
//	int limit = 0;
//
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d\n", time, t_ct);
//	}
//
//	return 0;
//}


//6.15 do_while.c  出口条件循环
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered = 0;
//	
//	do
//	{
//		printf("To enter the triskaidekaphbia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}


//6.16 entry.c  while
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered = 0;
//	
//	printf("To enter the triskaidekaphobia theraphy club,\n");
//	printf("please enter the secret code number: ");
//	scanf("%d", &code_entered);
//	while (code_entered != secret_code)
//	{
//		printf("To enter the triskaidekaphobia theraphy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	}
//	printf("Congratulation! You are cured!\n");
//
//	return 0;
//}


//6.17 rows1.c  使用嵌套循环
//#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row = 0;
//	char ch = 0;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6.18 rows2.c  依赖外部循环的嵌套循环
//#include <stdio.h>
//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row = 0;
//	char ch = 0;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6.19 scores.c_in.c 使用循环处理数组
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index = 0;
//	int score[SIZE] = { 0 };
//	int sum = 0;
//	float average = 0.0f;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//	{
//		scanf("%d", &score[index]);
//	}
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//	{
//		printf("%5d", score[index]);
//	}
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//	{
//		sum += score[index];
//	}
//	average = (float)sum / SIZE;
//	printf("Sum of scores = %d, average = %.2f\n", sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}


//6.20 power.c 计算数的整数幂
//#include <stdio.h>
//double power(double n, int p);
//int main(void)
//{
//	double x = 0;
//	double xpow = 0;
//	int exp = 0;
//
//	printf("Enter a number and the positive integer power to which\n");
//	printf("the number will be raised. Enter q to quit.\n");
//
//	while (scanf("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	int i = 0;
//	for (i = 1; i <= p; i++)
//	{
//		pow *= n;
//	}
//	return pow;
//}


//6.16  1.存储并打印26个小写字母
//#include <stdio.h>
//int main(void)
//{
//	char al[26] = { 0 };
//	int i = 0;
//	for (al[i] = 'a'; al[i] < 26 + 'a'; al[i]++)
//	{
//		printf("%c ", al[i]);
//	}
//	return 0;
//}


//#define SIZE 26
//#include <stdio.h>
//int main(void)
//{
//	char ch[SIZE] = { 0 };
//	int index = 0;
//	for (index = 0; index < SIZE; index++)
//	{
//		ch[index] = 'a' + index;
//		printf("%c ", ch[index]);
//	}
//	printf("\n");
//	return 0;
//}


//2. 打印三角形
//#include <stdio.h>
//int main(void)
//{
//	int row = 0;
//	int column = 0;
//
//	for (row = 1; row <= 5; row++)
//	{
//		for (column = 1; column <= row; column++)
//		{
//			printf("$ ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//3. 打印字母
//#include <stdio.h>
//int main(void)
//{
//	char row = 0;
//	char column = 0;
//
//	for (column = 'F'; column >= 'F' - 5; column--)
//	{
//		for (row = 'F'; row >= column; row--)
//		{
//			printf("%c", row);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%c ", 'F' - j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//4.打印字母
//#include <stdio.h>
//#define ROWS 6
//int main(void)
//{
//	char ch = 'A';
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//5.打印字母
//#include <stdio.h>
//int main(void)
//{
//	char ch = 0;
//	int i = 0;
//	int j = 0;
//
//	printf("Enter the alphabet: ");
//	scanf("%c", &ch);
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch + j);
//		}
//		for (; j >= 0; j--)
//		{
//			printf("%c", ch + j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#define ROWS 5
//int main(void)
//{
//	char ch = 'A';
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROWS; i++)
//	{
//		for (j = 0; j < ROWS - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch + j);
//		}
//		for (; j >= 0; j--)
//		{
//			printf("%c", ch + j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6.打印表格，每一行打印一个整数及其平方和立方，输入表格的上下限
//#include <stdio.h>
//int main(void)
//{
//	int max = 0;
//	int min = 0;
//
//	printf("Enter the max number:\n");
//	scanf("%d", &max);
//	printf("Enter the min number:\n");
//	scanf("%d", &min);
//	printf("%7s%7s%7s\n", "number", "square", "cube");
//	for (; min <= max; min++)
//	{
//		printf("%5d\t%5d\t%5d\n", min, min * min, min * min * min);
//	}
//	return 0;
//}


//7.输入字符串，输出其倒序
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char ch[20] = { 0 };
//	int i = 0;
//
//	printf("Enter the string: \n");
//	scanf("%s", ch);
//	for (i = (int)strlen(ch); i >= 0; i--)
//	{
//		printf("%c", ch[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


//句子倒序
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//int main(void)
//{
//	int i = 0;
//	int index = 0;
//	char ch[SIZE] = { 0 };
//
//	printf("Input a word: ");
//	scanf("%c", &ch[index]);
//	while (ch[index] != '\n')
//	{
//		index++;
//		scanf("%c", &ch[index]);
//	}
//	for (index = (int)strlen(ch); index >= 0; index--)
//	{
//		printf("%c", ch[index]);
//	}
//
//	return 0;
//}


//8.循环输入两个浮点数，输出两数之差除以两数乘积的结果
//#include <stdio.h>
//int main(void)
//{
//	double num1 = 0;
//	double num2 = 0;
//	double result = 0;
//
//	printf("Enter two floating numbers: \n");
//	while (scanf("%lf%lf", &num1, &num2) == 2)
//	{
//		printf("Result: %.2f\n", (num1 - num2) / (num1 * num2));
//		printf("Enter two floating numbers: (enter q to quit)\n");
//	}
//
//	return 0;
//}


//9.修改第8题为函数
//#include <stdio.h>
//double Result(double x, double y);
//int main(void)
//{
//	double num1 = 0;
//	double num2 = 0;
//	double result = 0;
//
//	printf("Enter two numbers: \n");
//	while (scanf("%lf%lf", &num1, &num2) == 2)
//	{
//		result = Result(num1, num2);
//		printf("Result: %.2f\n", result);
//		printf("Enter two numbers(enter q to quit): \n");
//	}
//
//	return 0;
//}
//double Result(double x, double y)
//{
//	return (x - y) / (x * y);
//}


//10.输入上下限，输出上下限内所有整数的平方和
//#include <stdio.h>
//int main(void)
//{
//	int lower = 0;
//	int upper = 0;
//	int squares_sum = 0;
//	int i = 0;
//
//	printf("Enter lower and upper integer limits: ");
//	scanf("%d%d", &lower, &upper);
//	while (lower < upper)
//	{
//		squares_sum = 0;
//		for (i = lower; i <= upper; i++)
//		{
//			squares_sum += i * i;
//		}
//		printf("The sums of the squares from %d to %d is %d\n",
//			lower * lower, upper * upper, squares_sum);
//		printf("Enter next set of limits: ");
//		scanf("%d%d", &lower, &upper);
//	}
//
//	return 0;
//}


//11.输入8个整数，倒序打印
//#include <stdio.h>
//int main(void)
//{
//	int arr[8] = { 0 };
//	int index = 0;
//	for (index = 0; index < 8; index++)
//	{
//		scanf("%d", &arr[index]);
//	}
//	for (index = 7; index >= 0; index--)
//	{
//		printf("%d ", arr[index]);
//	}
//	printf("\n");
//	return 0;
//}


//12.无限序列
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ... 发散
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ... 收敛
//#include <stdio.h>
//int main(void)
//{
//	double i = 0;
//	double j = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//
//	scanf("%lf", &i);
//	while (i > 0)
//	{
//		j = i;
//		sum1 = 0;
//		sum2 = 0;
//		for (; i > 0; i--)
//		{
//			sum1 += 1.0 / i;
//		}
//		for (; j > 0; j--)
//		{
//			if ((int)j % 2 == 0)
//			{
//				sum2 += 1.0 / j;
//			}
//		}
//		printf("%f\n", sum1);
//		printf("%f\n", sum1 - 2 * sum2);
//		scanf("%lf", &i);
//	}
//
//	return 0;
//}


//13. 数组8个元素，2的前8次幂，for循环设置数组元素的值，do while显示值
//#include <stdio.h>
//#define SIZE 8
//int main(void)
//{
//	int arr[SIZE] = { 2 };
//	int i = 0;
//	for (i = 0; i < SIZE - 1; i++)
//	{
//		arr[i + 1] = 2 * arr[i];
//	}
//	do
//	{
//		printf("%d\n", arr[i]);
//	} while (i-- > 0);
//
//	return 0;
//}


//14.两个8元素的数组，第二个数组元素是第一个数组前面的元素和
//#include <stdio.h>
//#define SIZE 8
//int main(void)
//{
//	int arr1[SIZE] = { 0 };
//	int arr2[SIZE] = { 0 };
//	int i = 0; 
//
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[0] = arr1[0];
//		if (i > 0)
//		{
//			arr2[i] = arr1[i] + arr2[i - 1];
//		}
//	}
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%5d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%5d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


//15.倒叙打印一行输入
//#include <stdio.h>
//#define SIZE 255
//int main(void)
//{
//	char ch[SIZE] = { 0 };
//	int i = 0;
//	scanf("%c", &ch[i]);
//	while (ch[i] != '\n')
//	{
//		i++;
//		scanf("%c", &ch[i]);
//	}
//	for (; i >= 0; i--)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}


//16.$100 原始投资的10%或者5%的复合利息 
//#include <stdio.h>
//int main(void)
//{
//	double n1 = 100;
//	double n2 = 100;
//	int i = 0;
//
//	while (n1 >= n2)
//	{
//		i++;
//		n1 += 10;
//		n2 *= 1.05;
//	}
//	
//	printf("Year: %d\n", i);
//	printf("n1: %.2f n2: %.2f\n", n1, n2);
//
//	return 0;
//}


//17.$100万，年利率8%,每年的最后一天取出10万，多少年取完
//#include <stdio.h>
//int main(void)
//{
//	double money = 100;
//	int i = 0;
//
//	while (money * 1.08 -10 >= 0)
//	{
//		money = money * 1.08 - 10;
//		i++;
//	}
//	printf("money: %f\n", money);
//	printf("Year = %d\n", i);
//
//	return 0;
//}


//18.起初5个朋友，第N周少N个，剩下的翻倍,直到超过邓巴数150
//#include <stdio.h>
//int main(void)
//{
//	int friends = 5;
//	int i = 0;
//	while (friends <= 150)
//	{
//		i++;
//		friends -= i;
//		friends *= 2;
//	}
//	printf("friens: %d\n", friends);
//	printf("year: %d\n", i);
//
//	return 0;
//}
