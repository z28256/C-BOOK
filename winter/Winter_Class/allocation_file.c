#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		p[i] = i + 1;
//	}
//	putchar('\n');
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	putchar('\n');
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//calloc会将内存中的数据初始化为0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		p[i] = i + 1;
//	}
//	putchar('\n');
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	putchar('\n');
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc//申请失败返回NULL,所以不能直接将返回值赋给之前的指针，
//如果直接赋值，之前的空间无法释放（realloc不初始化）
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	putchar('\n');
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//如果realloc第一个指针为NULL,相当于malloc
//	int* p = (int*)realloc(NULL, 40);
//	return 0;
//}


//对NULL指针解引用
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	perror("malloc");//malloc: Not enough space
//	*p = 5;
//	return 0;
//}


//对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		//*(p + i) = i + 1;
//		p[i] = i + 1;//超出范围
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		*p++ = i + 1;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	free(p);
////	p = NULL;
//	free(p);//free(NULL)什么也不发生
//	p = NULL;
//	return 0;
//}


//动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//		return;
//	free(p);
//	p = NULL;
//}


//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//		return NULL;
//	return p;
//}
//
//int main()
//{
//	//test();
//	int* ret = test();
//	free(ret);
//	ret = NULL;
//	return 0;
//}


//int main()
//{
//	while (1)
//		malloc(1);
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (!p)
//		return;
//	//使用
//	if (1)
//		return;
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄漏
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//传值调用，不会更改str
//	strcpy(str, "hello world");//非法访问
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return  0;
//}


//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return  0;
//}


//char* GetMemory(void)
//{
//	//char* p = "hello world";
//	static char p[] = "hello world";
//	//char p[] = "hello world";//返回栈空间地址的问题
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//非法访问,返回局部变量或临时变量的地址: p
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;//返回栈空间地址的问题
//}
//
//int main()
//{
//	int* p = test();//返回局部变量或临时变量的地址: a
//	printf("hello\n");
//	printf("%d\n", *p);
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");//"str"可以是"0"
//	free(str);
//	if (str != NULL)//使用未初始化的内存"str"
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	if (!str)
//		return;
//	strcpy(str, "hello");//"str"可以是"0"
//	free(str);
//	str = NULL;
//	if (str != NULL)//使用未初始化的内存"str"
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。
//结构中的柔性数组成员前面必须至少一个其他成员。(如果没有，无法开辟空间)
//sizeof 返回的这种结构大小不包括柔性数组的内存。
//包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，
//并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。

//struct S
//{
//	int a;
//	char ch[0];//char ch[];//数组大小未知
//};
//
//struct S1
//{
//	int a;
//	char* arr;
//};
//int main()
//{
//	//printf("%zd\n", sizeof(struct S));
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(char));
//	if (!p)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p->ch[i] = 'a' + i;
//		printf("%c ", p->ch[i]);
//	}
//	putchar('\n');
//	
//
//	struct S* ptr = (struct S*)realloc(p, sizeof(struct S) + 20 * sizeof(char));
//	if (!p)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (int i = 10; i < 20; i++)
//	{
//		p->ch[i] = 'a' + i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%c ", p->ch[i]);
//	}
//	putchar('\n');
//
//	free(p);
//	p = NULL;
//	
//	
//	
//	struct S1* p1 = (struct S1*)malloc(sizeof(struct S1));
//	if (!p1)
//	{
//		perror("p1 malloc");
//		return 1;
//	}
//	p1->arr = (char*)malloc(sizeof(char) * 10);
//	if (!(p1->arr))
//	{
//		perror("p1->arr malloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p1->arr[i] = 'a' + i;
//		printf("%c ", p1->arr[i]);
//	}
//	putchar('\n');
//
//
//	char* pt = (char*)realloc(p1->arr, 20 * sizeof(char));
//	if (!pt)
//	{
//		perror("pt realloc");
//		return 1;
//	}
//	else
//	{
//		p1->arr = pt;
//		pt = NULL;
//	}
//	for (int i = 10; i < 20; i++)
//	{
//		p1->arr[i] = 'a' + i;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%c ", p1->arr[i]);
//	}
//	putchar('\n');
//	
//	free(p1->arr);
//	p1->arr = NULL;
//	free(p1);
//	p1 = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("E:\\github\\C-BOOK\\winter\\Winter_Class\\test.txt", "r");
//	if (!pf)
//	{
//		perror("pf");
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//FILE* pf = fopen("text.txt", "w");
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		for (int i = 'a'; i < 'z'; i++)
//		{
//			//fputc(i, pf);
//			putchar(fgetc(pf));
//		}
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	//FILE* pf = fopen("text.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		//多个fputs的字符串相互连接在一起，需要输入'\n'才会换行
//		//fputs("want to do...\n", pf);
//		//fputs("I want to do...", pf);
//		char buf[50] = { 0 };
//		fgets(buf, 50, pf);//"r"时才能使用，r+ , w+ 都不能,fgets一次最多读取一行
//		printf("%s", buf);
//		fgets(buf, 50, pf);
//		printf("%s", buf);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	//struct S s = { "zhangsan", 45, 2.5f };
//	//FILE* pf = fopen("text.txt", "w");
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		//fprintf(pf, "%s %d %.2f\n", s.name, s.age, s.score);
//		fscanf(pf, "%s %d %f\n", s.name, &s.age, &s.score);
//		printf("%s %d %.2f\n", s.name, s.age, s.score);
//
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%s%d%f", s.name, &s.age, &s.score);
//	fprintf(stdout, "%s %d %.2f", s.name, s.age, s.score);
//
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	//struct S s = { "赵", 12, 5.6f };
//	struct S s = { 0 };
//
//	//FILE* pf = fopen("text.txt", "wb");
//	FILE* pf = fopen("text.txt", "rb");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		//fwrite(&s, sizeof(struct S), 1, pf);
//		fread(&s, sizeof(struct S), 1, pf);
//		printf("%s %d %f", s.name, s.age, s.score);
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhang", 45, 2.6f };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %.2f", s.name, s.age, s.score);
//	printf("%s\n", buf);//两位小数
//
//	struct S temp = { 0 };
//	sscanf(buf, "%s%d%f", temp.name, &temp.age, &temp.score);
//	printf("%s %d %f", s.name, s.age, s.score);//6位小数
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		printf("%c\n", fgetc(pf));//a
//		printf("%c\n", fgetc(pf));//b
//		printf("%c\n", fgetc(pf));//c
//		printf("%c\n", fgetc(pf));//d
//		
//		fseek(pf, -1, SEEK_CUR);
//		printf("%c\n", fgetc(pf));//d
//
//		fseek(pf, 1, SEEK_SET);
//		printf("%c\n", fgetc(pf));//b
//
//		fseek(pf, 0, SEEK_SET);
//		printf("%c\n", fgetc(pf));//a
//
//		rewind(pf);
//		printf("%c\n", fgetc(pf));//a
//
//	}
//	return 0;
//}


//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("text.txt", "rb");
//	if (pFile == NULL) perror("Error opening file");
//	else
//	{
//		fseek(pFile, 0, SEEK_END);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	//0010011100010000
//	//0x 00 00 27 10
//	//0x 10 27 00 00//小端
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, sizeof(int), 1, pf);
//	return 0;
//}


//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
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
//	return 0;
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
//	if (ret_code == SIZE) 
//	{
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
//	fp = NULL;
//	return 0;
//}


//#include <Windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠3秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(3000);//3秒
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠3秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(3000);
//
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}