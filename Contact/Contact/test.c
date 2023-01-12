#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
int main()
{
	
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	init_contact(&con);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add(&con);
			break;
		case 2:
			del(&con);
			break;
		case 3:
			sea(&con);
			break;
		case 4:
			mod(&con);
			break;
		case 5:
			show(&con);
			break;
		case 6:
			sort(&con);
			break;
		case 0:
			printf("退出\n");
			break;

		default:
			break;
		}
		
	} while (input);
	return 0;
}