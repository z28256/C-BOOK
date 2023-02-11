#define _CRT_SECURE_NO_WARNINGS 1
//É¾³ý¹«¹²×Ö·û
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char str1[100] = { 0 };
//    char str2[100] = { 0 };
//
//    gets(str1);
//    gets(str2);
//    for (char* ret = strtok(str1, str2); ret; ret = strtok(NULL, str2))
//    {
//        printf("%s", ret);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str1[14] = { 0 };
//    char str2[14] = { 0 };
//    scanf("%s", str1);
//    int len = strlen(str1);
//    for (int i = 1; i <= len; i++)
//    {
//        printf("%c", str1[i - 1]);
//        if (!((len - i) % 3) && i != len)
//            putchar(',');
//    }
//    return 0;
//}


//#include <stdio.h>
//void add_pun(int n)
//{
//
//    if (n / 1000)
//    {
//        add_pun(n / 1000);
//        printf(",%d", n % 1000);
//    }
//    else
//    {
//        printf("%d", n);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    add_pun(n);
//    return 0;
//}