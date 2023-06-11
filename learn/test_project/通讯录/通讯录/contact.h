#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

//�˵�
void menu();

//��������
typedef struct PeoInfo
{
	char name[20];//������#define����
	int age;
	char sex[8];
	char tele[12];
	char addr[30];
}PeoInfo;

////ͨѶ¼����
////1.��̬�汾
//typedef struct Contact
//{
//	struct PeoInfo data[100];//�˵���Ϣ
//	int count;//����
//}Contact;
//
////��ʼ��ͨѶ¼
////1.��̬�汾
//void InitContact(Contact* pc);


//ͨѶ¼����
//2.��̬�汾
typedef struct Contact
{
	struct PeoInfo* data;//�˵���Ϣ
	int count;//����
	int capacity;//��ǰͨѶ¼������
}Contact;

//��ʼ��ͨѶ¼
//2.��̬�汾
int InitContact(Contact* pc);//����
void DestroyContact(Contact* pc);//����
void CheckCapacity(Contact* pc);//����


//ͨѶ¼����
//3.����ͨѶ¼��Ϣ���ļ�
void SaveContact(const Contact* pc);

//3.�����ļ���Ϣ��ͨѶ¼��
void LosdContact(Contact* pc);


//����ͨѶ¼��Ϣ
void AddContact(Contact* pc);

//ɾ��ͨѶ¼��Ϣ
void DelContact(Contact* pc);

//����ͨѶ¼��Ϣ
void SearchContact(const Contact* pc);

//�޸�ͨѶ¼��Ϣ
void ModifyContact(Contact* pc);

//��ӡͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//����ͨѶ¼��Ϣ
//����ʲô����������Ϊ��
void SortContact(Contact* pc);