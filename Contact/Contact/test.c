#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
int main()
{
	
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	init_contact(&con);
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			add(&con);
			break;
		case Del:
			del(&con);
			break;
		case Sea:
			sea(&con);
			break;
		case Mod:
			mod(&con);
			break;
		case Show:
			show(&con);
			break;
		case Sort:
			sort(&con);
			break;
		case Exit:
			save(&con);
			destory(&con);
			printf("�˳�\n");
			break;

		default:
			break;
		}
		
	} while (input);
	return 0;
}