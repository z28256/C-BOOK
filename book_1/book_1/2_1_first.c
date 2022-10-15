// #include <stdio.h>      //C预处理器指令
// int main(void)
// {
//     int num;            //声明
//     num = 1;            //赋值
//     printf("I am a simple");
//     printf("computer.\n");      //  \n：换行符  转义序列
//     printf("My favourite number is %d because it is first.\n", num);
//     return 0;
// }


//2.2 fathm_ft.c把2音寻（测水深的单位）转换成英尺
// #include <stdio.h>
// int main(void)
// {
//     int feet, fathoms;

//     fathoms = 2;
//     feet = 6 * fathoms;
//     printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//     printf("Yes, I said %d feet!\n", 6 * fathoms);

//     return 0;
// }


//2.3 two_func.c  一个文件包含两个函数
// #include <stdio.h>
// void butler(void);      //函数原型
// int main(void)
// {
//     printf("I will summon the butler function.\n");
//     butler();           //函数调用
//     printf("Yes. Bring me some tea and writeable DVDs.\n");
//     return 0;
// }
// void butler(void)       //函数定义
// {
//     printf("You rang, sir?\n");
// }


//2.3 stillbad.c 修复了语法错误的程序
// #include <stdio.h>
// int main(void)
// {
//     int n, n2, n3;

//     n = 5;
//     n2 = n * n;
//     n3 = n2 * n;
//     printf("n is %d, n squared = %d, n cubed = %d\n", n, n2, n3);

//     return 0;
// }


//2.12 1 name
// #include <stdio.h>
// int main(void)
// {
//     printf("Gustav Mahler\n");
//     printf("Gustav\nMahler\n");
//     printf("Gustav Mahler\n");
//     printf("\n");
//     return 0;
// }


//2.name and address
// #include <stdio.h>
// int main()
// {
//     printf("Name: app\n");
//     printf("Address: Earth\n");
//     return 0;
// }


//3. years->days
// #include<stdio.h>
// int main(void)
// {
//     int days,years;
//     years = 20;
//     days = years * 365;
//     printf("%d years = %d days\n", years, days);
//     return 0;
// }


//4.printf() jolly() deny()
// #include <stdio.h>
// void jolly(void);
// void deny(void);
// int main(void)
// {
//     jolly();
//     jolly();
//     jolly();
//     deny();
//     return 0;
// }
// void jolly(void)
// {
//     printf("For he's a jolly good fellow!\n");
// }
// void deny(void)
// {
//     printf("Which nobody can deny!\n");
// }


//5.printf() br() ic()
// #include <stdio.h>
// void br(void);
// void ic(void);
// int main()
// {
//     br();
//     printf(", ");
//     ic();
//     printf("\n");
//     ic();
//     printf(",");
//     printf("\n");
//     br();
//     printf("\n");
//     return 0;
// }
// void br(void)
// {
//     printf("Brazil, Russia");
// }
// void ic(void)
// {
//     printf("India, China");
// }


//6.tose  tose * 2  tose * tose
// #include <stdio.h>
// int main(void)
// {
//     int tose, two_tose, tose_square;

//     tose = 10;
//     two_tose = tose * 2;
//     tose_square = tose * tose;
//     printf("tose = %d\n", tose);
//     printf("2 * tose = %d\n", two_tose);
//     printf("tose * tose = %d\n", tose_square);

//     return 0;
// }


//7.smile
// #include <stdio.h>
// void smile(void);
// int main(void)
// {
//     smile();
//     smile();
//     smile();
//     printf("\n");
//     smile();
//     smile();
//     printf("\n");
//     smile();
//     return 0;
// }
// void smile(void)
// {
//     printf("Smile!");
// }


//8.函数调用
// #include <stdio.h>
// void one_three(void);
// void two(void);
// int main(void)
// {
//     printf("starting now: \n");
//     one_three();
//     printf("done!\n");
//     return 0;
// }
// void one_three(void)
// {
//     printf("one\n");
//     two();
//     printf("three\n");
// }
// void two(void)
// {
//     printf("two\n");
// }