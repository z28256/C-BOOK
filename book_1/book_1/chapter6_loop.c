#define _CRT_SECURE_NO_WARNINGS 1
//6.1 summing.c  �����û�������������
// scanf()��ȡ�ɹ�����ֵ��1��ʧ����0
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
//	while(scanf("%ld", &num) != EOF)	//����Ctrl + z ��������
//	{
//		sum += num;
//		printf("Please enter next integer (q to quit): \n");
//		//status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld\n", sum);
//	
//	return 0;
//}


//6.2 when.c  ��ʱ�˳�ѭ��
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


//6.3 while 1.c ע�⻨���ŵ�ʹ��
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


//6.4 while2.c����  ע��ֺŵ�λ��
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d\n", n);		// n = 4
//	printf("That's all this program does.\n");
//	return 0;
//}


//6.5 cmpflt.c �������Ƚ�
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


//6.6 t_and_f.c  C����ͼٵ�ֵ
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


//6.7 truth.c  ��ЩֵΪ��
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


//6.8 trouble.c ���á�=���ᵼ������ѭ��
//scanf()�����һ�ζ�ȡʧ�ܵĵط����¶�ȡ������q���һֱ��ȡq,Ȼ��һֱʧ��
//#include <stdio.h>
//int main(void)
//{
//	long num = 0L;
//	long sum = 0L;
//	int status = 0;
//
//	printf("Please enter an integer to be summed (q to quit):\n");
//	status = scanf("%ld", &num);
//	while (status = 1)		//status = 1 ����ֵΪ1
//	{
//		sum += num;
//		printf("Please enter next integer (q to quit):\n");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld\n", sum);
//
//	return 0;
//}


//6.9 boolean.c  ʹ��_Bool/bool(C99,<stdbool.h>)���͵ı���
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


//���ȼ������� > ��ϵ(>,<, ==) > ��ֵ(=,*=,+=)
//��ϵ������Ľ�����Ǵ������ң���ֵ����������
//ex != wye == zee �� (ex != wye) == zee��ͬ


//6.10 sweetie1.c  һ������ѭ��
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


//6.11 sweetie2.c  ʹ��forѭ���ļ���ѭ��
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


//6.12 for_cube.c  ����������
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


//for_down.c  ʹ�õݼ���������ݼ�������
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


//for_13s.c  �����ü���������2��10
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


//for_char.c  ����ʹ���ַ��������ּ���
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


//for_geo.c �õ���������������
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


//for_none.c  ʡ�Ա��ʽ
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


//x *= 3 * y + 12 �� x = x * (3 * y + 12) ��ͬ
// *= �����ȼ��� = ��ͬ���� +, * ���� 
//6.13 postage.c  һ������
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

//���ű��ʽ�������ҽ��У����ű��ʽ��ֵΪ�Ҳ���ʽ��ֵ
//houseprice = 249, 500; �� houseprice = 249;500;��ͬ��
// �������ű��ʽhouseprice = 249, 500;��ֵΪ500
//houseprice = (249, 500);����houseprice��ֵΪ500
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


//6.14 zeno.c  �����еĺ�
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


//6.15 do_while.c  ��������ѭ��
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


//6.17 rows1.c  ʹ��Ƕ��ѭ��
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


//6.18 rows2.c  �����ⲿѭ����Ƕ��ѭ��
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


//6.19 scores.c_in.c ʹ��ѭ����������
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


//6.20 power.c ��������������
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


