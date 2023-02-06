#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("*****1.add   2.del******\n");
	printf("*****3.sea   4.mod******\n");
	printf("*****5.show  6.sort*****\n");
	printf("*****0.exit       *****\n");
}

//��ʼ��ͨѶ¼
//void init_contact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}


void init_contact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
	//����
	load(pc);
}


void destory(Contact* pc)
{	
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
	pc = NULL;
}


int find_by_name(const Contact* pc, char* name)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (!strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

//������ϵ��
//void add(Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("������������\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("���������䣺\n");
//	scanf("%d", &pc->data[pc->sz].age);
//	printf("�������Ա�\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("�������ַ��\n");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("������绰��\n");
//	scanf("%s", pc->data[pc->sz].tele);
//
//	pc->sz++;
//
//}


void check_capacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo) * (pc->capacity + INC_SZ));

		if (!ptr)
		{
			perror("check_capacity realloc");
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			ptr = NULL;
			printf("���ݳɹ�\n");
		}
	}
}


void add(Contact* pc)
{
	assert(pc);

	check_capacity(pc);
	
	//����һ���˵���Ϣ
	printf("������������\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("���������䣺\n");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("�������ַ��\n");
	scanf("%s", pc->data[pc->sz].addr);
	printf("������绰��\n");
	scanf("%s", pc->data[pc->sz].tele);

	pc->sz++;

}

//ɾ��ָ����ϵ��
void del(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�������\n");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//��ʾͨѶ¼�е���Ϣ
void show(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("\n%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n",
		"����", "����", "�Ա�", "��ַ", "�绰");

	for (i = 0; i < pc->sz; i++)
	{
		printf("\n%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].addr,
			pc->data[i].tele);
	}
}

//����ָ����ϵ��
void sea(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ���ҵ�������");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("\n%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n",
		"����", "����", "�Ա�", "��ַ", "�绰");
	printf("\n%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
		pc->data[pos].name, pc->data[pos].age,
		pc->data[pos].sex, pc->data[pos].addr,
		pc->data[pos].tele);
}

//�޸�ָ����ϵ��
void mod(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ�޸ĵ�������");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}

	printf("������������\n");
	scanf("%s", pc->data[pos].name);
	printf("���������䣺\n");
	scanf("%d", &pc->data[pos].age);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pos].sex);
	printf("�������ַ��\n");
	scanf("%s", pc->data[pos].addr);
	printf("������绰��\n");
	scanf("%s", pc->data[pos].tele);

	printf("�޸����\n");
}

void sort(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = 0; j < pc->sz - i - 1; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo temp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = temp;

			}
		}
	}
}

void save(Contact* pc)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (!pf)
	{
		perror("save");
	}
	else
	{
		for (int i = 0; i < pc->sz; i++)
		{
			fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
		}
		fclose(pf);
		pf = NULL;
		printf("����ɹ�\n");
	}
}

//�����ļ�
void load(Contact* pc)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (!pf)
	{
		perror("load");
	}
	else
	{
		PeoInfo temp = { 0 };
		int i = 0;
		while (fread(&temp, sizeof(PeoInfo), 1, pf))
		{
			check_capacity(pc);
			pc->data[i++] = temp;
			pc->sz++;
		}
		fclose(pf);
		pf = NULL;
	}
}