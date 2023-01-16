#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("d:/a.txt", "w");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		char i = 0;
//		for (i = 'a'; i <= 'z'; i++)
//		{
//			fputc(i, fp);
//		}
//		fclose(fp);
//		fp = NULL;
//	}
//	
//	return 0;
//}


//int main()
//{
//	FILE* fp = fopen("d:/a.txt", "r");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <= 'z' - 'a'; i++)
//		{
//			printf("%c ", fgetc(fp));
//		}
//		fclose(fp);
//		fp = NULL;
//	}
//
//	return 0;
//}


//int main()
//{
//	FILE* fp = fopen("d:/a.txt", "w");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fputs("123456\n", fp);
//		fputs("456789\n", fp);
//		fclose(fp);
//		fp = NULL;
//	}
//	
//	return 0;
//}


//int main()
//{
//	FILE* fp = fopen("d:/a.txt", "r");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		char arr[20];
//		fgets(arr, 20, fp);
//		printf("%s", arr);
//		fgets(arr, 20, fp);
//		printf("%s", arr);
//		fclose(fp);
//		fp = NULL;
//	}
//
//	return 0;
//}


struct S 
{
	char name[20];
	int age;
	float score;
};

//int main()
//{
//	struct S s = { "张三", 45, 89.3f };
//	FILE* fp = fopen("d:/b.txt", "w");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fprintf(fp, "%s %d %.2f\n", s.name, s.age, s.score);
//		fclose(fp);
//		fp = NULL;
//	}
//	return 0;
//}

//int main()
//{
//	struct S s = { "张三", 45, 89.3f };
//	FILE* fp = fopen("d:/a.txt", "r");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		struct S temp = { 0 };
//		fscanf(fp, "%s %d %f\n", temp.name, &(temp.age), &(temp.score));
//		printf("%s %d %f\n", temp.name, temp.age, temp.score);
//		fclose(fp);
//		fp = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	//fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.score));
//	//fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//
//	char str[20] = { 0 };
//	fgets(str, 5, stdin);
//	fputs(str, stdout);//在最后加了个'\0'
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("d:/b.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { "张三", 45, 12.5 };
//	FILE* fp = fopen("d:/b.txt", "wb");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fwrite(&s, sizeof(s), 1, fp);
//		fclose(fp);
//		fp = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	struct S s = { "张三", 45, 12.6f };
//	char buf[20] = { 0 };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);
//
//	struct S temp = { 0 };
//	sscanf(buf, "%s %d %f", temp.name, &(temp.age), &(temp.score));
//	printf("%s %d %f", temp.name, temp.age, temp.score);
//
//	return 0;
//}


//int main()
//{
//	FILE* fp = fopen("d:/a.txt", "r");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		int ch = fgetc(fp);
//		printf("%c\n", ch);
//		ch = fgetc(fp);
//		printf("%c\n", ch);
//		ch = fgetc(fp);
//		printf("%c\n", ch);
//
//		//fseek(fp, -2, SEEK_CUR);
//		
//		fseek(fp, 1, SEEK_SET);
//		ch = fgetc(fp);
//		printf("%c\n", ch);
//		printf("%d\n", ftell(fp));
//		rewind(fp);
//		ch = fgetc(fp);
//		printf("%c\n", ch);
//		fclose(fp);
//		fp = NULL;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	//00100111 00010000
//	//27 10
//	//1027 0000 小端
//	FILE* fp = fopen("D:/a.txt", "wb");
//	if (!fp)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		fwrite(&a, sizeof(int), 1, fp);
//		fclose(fp);
//		fp = NULL;
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("d:/a.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//	fp = NULL;
//}


//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}


//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}


