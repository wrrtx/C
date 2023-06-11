#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

//菜单
void menu();

//类型声明
typedef struct PeoInfo
{
	char name[20];//可以用#define定义
	int age;
	char sex[8];
	char tele[12];
	char addr[30];
}PeoInfo;

////通讯录声明
////1.静态版本
//typedef struct Contact
//{
//	struct PeoInfo data[100];//人的信息
//	int count;//人数
//}Contact;
//
////初始化通讯录
////1.静态版本
//void InitContact(Contact* pc);


//通讯录声明
//2.动态版本
typedef struct Contact
{
	struct PeoInfo* data;//人的信息
	int count;//人数
	int capacity;//当前通讯录的容量
}Contact;

//初始化通讯录
//2.动态版本
int InitContact(Contact* pc);//增加
void DestroyContact(Contact* pc);//销毁
void CheckCapacity(Contact* pc);//增容


//通讯录声明
//3.保存通讯录信息到文件
void SaveContact(const Contact* pc);

//3.加载文件信息到通讯录中
void LosdContact(Contact* pc);


//增加通讯录信息
void AddContact(Contact* pc);

//删除通讯录信息
void DelContact(Contact* pc);

//查找通讯录信息
void SearchContact(const Contact* pc);

//修改通讯录信息
void ModifyContact(Contact* pc);

//打印通讯录信息
void ShowContact(const Contact* pc);

//排序通讯录信息
//按照什么排序？以名字为例
void SortContact(Contact* pc);