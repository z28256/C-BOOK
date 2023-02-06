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


//��ʼ��ͨѶ¼
void init_contact(Contact* pc);
//����ͨѶ¼
void destory(Contact* pc);
//������ϵ��
void add(Contact* pc);
//ɾ��ָ����ϵ��
void del(Contact* pc);
//��ʾͨѶ¼�е���Ϣ
void show(const Contact* pc);
//����ָ����ϵ��
void sea(const Contact* pc);
//�޸�ָ����ϵ��
void mod(Contact* pc);

int find_by_name(const Contact* pc, char* name);
//������
void sort(Contact* pc);
//����
void save(Contact* pc);
//����
void load(Contact* pc);
