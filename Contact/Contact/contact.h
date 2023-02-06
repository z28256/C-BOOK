#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 13
#define DEFAULT_SZ 2
#define INC_SZ 2


void menu();
enum option
{
	Exit,
	Add,
	Del,
	Sea,
	Mod,
	Show,
	Sort
};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
} PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;


typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;


//初始化通讯录
void init_contact(Contact* pc);
//销毁通讯录
void destory(Contact* pc);
//增加联系人
void add(Contact* pc);
//删除指定联系人
void del(Contact* pc);
//显示通讯录中的信息
void show(const Contact* pc);
//查找指定联系人
void sea(const Contact* pc);
//修改指定联系人
void mod(Contact* pc);

int find_by_name(const Contact* pc, char* name);
//排序函数
void sort(Contact* pc);
//保存
void save(Contact* pc);
//加载
void load(Contact* pc);
