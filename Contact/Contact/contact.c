#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("*****1.add   2.del******\n");
	printf("*****3.sea   4.mod******\n");
	printf("*****5.show  6.sort*****\n");
	printf("*****0.exit       *****\n");
}

//初始化通讯录
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
	//加载
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

//增加联系人
//void add(Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	//增加一个人的信息
//	printf("请输入姓名：\n");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入年龄：\n");
//	scanf("%d", &pc->data[pc->sz].age);
//	printf("请输入性别：\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入地址：\n");
//	scanf("%s", pc->data[pc->sz].addr);
//	printf("请输入电话：\n");
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
			printf("增容成功\n");
		}
	}
}


void add(Contact* pc)
{
	assert(pc);

	check_capacity(pc);
	
	//增加一个人的信息
	printf("请输入姓名：\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：\n");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入地址：\n");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入电话：\n");
	scanf("%s", pc->data[pc->sz].tele);

	pc->sz++;

}

//删除指定联系人
void del(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入要删除人的姓名：\n");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

//显示通讯录中的信息
void show(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("\n%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n",
		"姓名", "年龄", "性别", "地址", "电话");

	for (i = 0; i < pc->sz; i++)
	{
		printf("\n%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].addr,
			pc->data[i].tele);
	}
}

//查找指定联系人
void sea(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("输入要查找的姓名：");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("\n%-20s\t%-4s\t%-5s\t%-20s\t%-12s\n",
		"姓名", "年龄", "性别", "地址", "电话");
	printf("\n%-20s\t%-4d\t%-5s\t%-20s\t%-12s\n",
		pc->data[pos].name, pc->data[pos].age,
		pc->data[pos].sex, pc->data[pos].addr,
		pc->data[pos].tele);
}

//修改指定联系人
void mod(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("输入要修改的姓名：");
	scanf("%s", name);
	int pos = find_by_name(pc, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在\n");
		return;
	}

	printf("请输入姓名：\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄：\n");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pos].sex);
	printf("请输入地址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("请输入电话：\n");
	scanf("%s", pc->data[pos].tele);

	printf("修改完成\n");
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
		printf("保存成功\n");
	}
}

//加载文件
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