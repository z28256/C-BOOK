#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����

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


//calloc�Ὣ�ڴ��е����ݳ�ʼ��Ϊ0
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


//realloc//����ʧ�ܷ���NULL,���Բ���ֱ�ӽ�����ֵ����֮ǰ��ָ�룬
//���ֱ�Ӹ�ֵ��֮ǰ�Ŀռ��޷��ͷţ�realloc����ʼ����
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
//	//���realloc��һ��ָ��ΪNULL,�൱��malloc
//	int* p = (int*)realloc(NULL, 40);
//	return 0;
//}


//��NULLָ�������
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	perror("malloc");//malloc: Not enough space
//	*p = 5;
//	return 0;
//}


//�Զ�̬���ٿռ��Խ�����
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
//		p[i] = i + 1;//������Χ
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
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


//��ͬһ�鶯̬�ڴ����ͷ�

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
//	free(p);//free(NULL)ʲôҲ������
//	p = NULL;
//	return 0;
//}


//��̬�����ڴ������ͷţ��ڴ�й©��
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
//	//ʹ��
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
//	p = (char*)malloc(100);//�ڴ�й©
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//��ֵ���ã��������str
//	strcpy(str, "hello world");//�Ƿ�����
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
//	//char p[] = "hello world";//����ջ�ռ��ַ������
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//�Ƿ�����,���ؾֲ���������ʱ�����ĵ�ַ: p
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
//	return &a;//����ջ�ռ��ַ������
//}
//
//int main()
//{
//	int* p = test();//���ؾֲ���������ʱ�����ĵ�ַ: a
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
//	strcpy(str, "hello");//"str"������"0"
//	free(str);
//	if (str != NULL)//ʹ��δ��ʼ�����ڴ�"str"
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
//	strcpy(str, "hello");//"str"������"0"
//	free(str);
//	str = NULL;
//	if (str != NULL)//ʹ��δ��ʼ�����ڴ�"str"
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


//C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��
//�ṹ�е����������Աǰ���������һ��������Ա��(���û�У��޷����ٿռ�)
//sizeof ���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬
//���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С��

//struct S
//{
//	int a;
//	char ch[0];//char ch[];//�����Сδ֪
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
//		printf("���ļ��ɹ�\n");
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
//		//���fputs���ַ����໥������һ����Ҫ����'\n'�Żỻ��
//		//fputs("want to do...\n", pf);
//		//fputs("I want to do...", pf);
//		char buf[50] = { 0 };
//		fgets(buf, 50, pf);//"r"ʱ����ʹ�ã�r+ , w+ ������,fgetsһ������ȡһ��
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
//	//struct S s = { "��", 12, 5.6f };
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
//	printf("%s\n", buf);//��λС��
//
//	struct S temp = { 0 };
//	sscanf(buf, "%s%d%f", temp.name, &temp.age, &temp.score);
//	printf("%s %d %f", s.name, s.age, s.score);//6λС��
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
//	//0x 10 27 00 00//С��
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, sizeof(int), 1, pf);
//	return 0;
//}


//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
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
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
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
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��3��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(3000);//3��
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��3��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(3000);
//
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}