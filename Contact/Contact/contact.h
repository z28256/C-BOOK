#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 13
void menu();
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
} PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;
//初始化通讯录
void init_contact(Contact* pc);
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