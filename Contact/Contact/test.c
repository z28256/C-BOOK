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
			printf("�˳�\n");
			break;

		default:
			break;
		}
		
	} while (input);
	return 0;
}