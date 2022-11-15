#define _CRT_SECURE_NO_WARNINGS 1
//13.1  count.c  使用标准I/O
//#include <stdio.h>
//#include <stdlib.h>	//exit()函数
//int main(int argc, char* argv[])
//{
//	int ch = 0;
//	FILE* fp;
//	unsigned long count = 0;
//	if (argc != 2)
//	{
//		printf("Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//	if ((fp = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can't open %s \n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//	while ((ch = getc(fp)) != EOF)
//	{
//		putc(ch, stdout);  //等价于putchar(ch);
//		count++;
//	}
//	fclose(fp);
//	printf("File %s has %lu characters\n", argv[1], count);
//	return 0;
//}


//为了避免读取到空文件，应使用入口条件循环进行文件输入

//设计范例 #1
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	int ch = 0;
//	FILE* fp;
//	fp = fopen("wacky.txt", "r");
//	ch = getc(fp);
//	while (ch != EOF)
//	{
//		putchar(ch);
//		ch = getc(fp);
//	}
//	return 0;
//}

//设计范例 #2
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	int ch = 0;
//	FILE* fp;
//	fp = fopen("wacky.txt", "r");
//	while ((ch = getc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//13.2  reducto.c  把文件压缩成原来的1/3
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define LEN 40
//
//int main(int argc, char* argv[])
//{
//	FILE* in;
//	FILE* out;
//	int ch = 0;
//	char name[LEN] = { 0 };
//	int count = 0;
//
//	if (argc < 2)
//	{
//		fprintf(stderr, "Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((in = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "I couldn't open the file\"%s\"\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	strncpy(name, argv[1], LEN - 5);
//	name[LEN - 5] = '\0';
//	strcat(name, ".red");
//	if ((out = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Can't creat output file.\n");
//		exit(3);
//	}
//
//	while ((ch = getc(in)) != EOF)
//	{
//		if (count++ % 3 == 0)
//		{
//			putc(ch, out);
//		}
//	}
//
//	if (fclose(in) != 0 || fclose(out) != 0)
//	{
//		fprintf(stderr, "Error in closing files\n");
//	}
//
//	return 0;
//}


//13.3 addaword.c  使用fprintf() fscanf() rewind()
//#include <stdio.h> 
//#include <stdlib.h> 
//#include <string.h>
//#define MAX 41
//int main()
//{
//	FILE* fp;
//	char words[MAX] = { 0 };
//
//	if ((fp = fopen("wordy", "a+")) == NULL)
//	{
//		fprintf(stdout, "Can't open \"wordy\" file.\n");
//		exit(EXIT_FAILURE);
//	}
//
//	puts("Enter words to add to the file; press the #");
//	puts("key at the beginning of a line to terminate.");
//	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
//	{
//		fprintf(fp, "%s\n", words);
//	}
//
//	puts("File contents: ");
//	rewind(fp);
//	while (fscanf(fp, "%s", words) == 1)
//	{
//		puts(words);
//	}
//	puts("Done!");
//
//	if (fclose(fp) != 0)
//	{
//		fprintf(stderr, "Error closing file\n");
//	}
//
//	return 0;
//}


//13.4 reverse.c  倒序显示文件的内容
//#include <stdio.h>
//#include <stdlib.h>
//#define CNTL_Z '\032'
//#define SLEN 81
//int main()
//{
//	char file[SLEN] = { 0 };
//	char ch = 0;
//	long count = 0;
//	long last = 0;
//	FILE* fp;
//
//	puts("Enter the name of the file to be processed: ");
//	scanf("%80s", file);
//	if ((fp = fopen(file, "rb")) == NULL)
//	{
//		printf("reverse can't open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//	fseek(fp, 0L, SEEK_END);
//	last = ftell(fp);
//	for (count = 1L; count <= last; count++)
//	{
//		fseek(fp, -count, SEEK_END);
//		ch = getc(fp);
//		if (ch != CNTL_Z && ch != '\r')
//		{
//			putchar(ch);
//		}
//	}
//
//	putchar('\n');
//	fclose(fp);
//	return 0;
//}


//13.5 append.c  把文件附加到另一个文件末尾
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define BUFSIZE 4096
//#define SLEN 81
//void append(FILE* source, FILE* dest);
//char* s_gets(char* st, int n);
//
//int main()
//{
//	FILE* fa;
//	FILE* fs;
//
//	int files = 0;
//	char file_app[SLEN] = { 0 };
//	char file_src[SLEN] = { 0 };
//	int ch = 0;
//	puts("Enter name of destination file: ");
//	s_gets(file_app, SLEN);
//	if ((fa = fopen(file_app, "a+")) == NULL)
//	{
//		fprintf(stderr, "Can't open %s\n", file_app);
//		exit(EXIT_FAILURE);
//	}
//	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
//	{
//		fputs("Can't creat output buffer\n", stderr);
//		exit(EXIT_FAILURE);
//	}
//	puts("Enter name of first source file (empty line to quit): ");
//	while (s_gets(file_src, SLEN) && file_src[0] != '\0')
//	{
//		if (strcmp(file_src, file_app) == 0)
//		{
//			fputs("Can't append file to itself\n", stderr);
//		}
//		else if ((fs = fopen(file_src, "r")) == NULL)
//		{
//			fprintf(stderr, "Can't open %s\n", file_src);
//		}
//		else
//		{
//			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
//			{
//				fputs("Can't create input buffer\n", stderr);
//				continue;
//			}
//			append(fs, fa);
//			if (ferror(fs) != 0)
//			{
//				fprintf(stderr, "Error in reading file %s.\n",
//					file_src);
//			}
//			if (ferror(fa) != 0)
//			{
//				fprintf(stderr, "Error in writing file %s\n",
//					file_app);
//			}
//			fclose(fs);
//			files++;
//			printf("File %s appended.\n", file_src);
//			puts("Next file (empty line to quit): ");
//		}
//	}
//	printf("Done appending %d files appended.\n", files);
//	rewind(fa);
//	printf("%s contents: \n", file_app);
//	while ((ch = getc(fa)) != EOF)
//	{
//		putchar(ch);
//	}
//	puts("Done displaying.");
//	fclose(fa);
//	return 0;
//}
//void append(FILE* source, FILE* dest)
//{
//	size_t bytes = 0;
//	static char temp[BUFSIZE];
//	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
//	{
//		fwrite(temp, sizeof(char), bytes, dest);
//	}
//}
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//		{
//			*find = '\0';
//		}
//		else
//		{
//			while (getchar() != '\n')
//			{
//				continue;
//			}
//		}
//	}
//	return ret_val;
//}


//13.6  randbin.c  用二进制I/O进行随机访问
//#include <stdio.h>
//#include <stdlib.h>
//#define ARSIZE 1000
//int main()
//{
//	double numbers[ARSIZE] = { 0.0 };
//	double value = 0.0;
//	const char* file = "numbers.dat";
//	int i = 0;
//	long pos = 0;
//	FILE* iofile;
//	for (i = 0; i < ARSIZE; i++)
//	{
//		numbers[i] = 100.0 * i + 1.0 / (i + 1);
//	}
//	if ((iofile = fopen(file, "wb")) == NULL)
//	{
//		fprintf(stderr, "Could not open %s for output.\n", file);
//		exit(EXIT_FAILURE);
//	}
//	fwrite(numbers, sizeof(double), ARSIZE, iofile);
//	fclose(iofile);
//	if ((iofile = fopen(file, "rb")) == NULL)
//	{
//		fprintf(stderr, "Could not open %s for random access.\n",
//			file);
//		exit(EXIT_FAILURE);
//	}
//	printf("Enter an index in the rqnge 0-%d.\n", ARSIZE - 1);
//	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
//	{
//		pos = (long)i * sizeof(double);
//		fseek(iofile, pos, SEEK_SET);
//		fread(&value, sizeof(double), 1, iofile);
//		printf("The value there is %f.\n", value);
//		printf("Next index (out of range to quit):\n");
//	}
//	fclose(iofile);
//	puts("Bye!");
//	return 0;
//}