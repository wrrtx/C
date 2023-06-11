#include "contact.h"

//�˵�
void menu()
{
	printf("******************************************\n");
	printf("******     1.Add          2.Del     ******\n");
	printf("******     3.Search       4.Modify  ******\n");
	printf("******     5.Show         6.Sort    ******\n");
	printf("******     0.Exit                   ******\n");
	printf("******************************************\n");
	return;
}

//ͨѶ¼��ʼ��
////1.��̬�汾
//void InitContact(Contact* pc)
//{
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//	//memset(pc, 0, sizeof(Contact));
//	return;
//}

//����ͨѶ¼��Ϣ
////1.��̬�汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("ͨѶ¼����������������\n");
//		return;
//	}
//	printf("����������:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("���������:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("���ӳɹ�!\n");
//	return;
//}

//����λ��
static int FindByName(const Contact* p,const char name[])
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

//ɾ��ͨѶ¼��Ϣ
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼��û������!\n");
		return;
	}
	char name[20] = { 0 };
	printf("��������Ҫɾ������:>");
	scanf("%s", name);
	//1.����
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("ͨѶ¼��û�д���!\n");
		return;
	}
	//2.ɾ��
	for (int i = ret; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�!\n");
	return;
}

//����ͨѶ¼��Ϣ
void SearchContact(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
		return;
	}
	char name[20] = { 0 };
	printf("��������Ҫ���ҵ���:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("ͨѶ¼�в��޴���!\n");
	else
	{
		printf("�ҵ��ˣ�λ���ڵ� %d ��\n", ret + 1);
		printf("%-20s\t%-5s\t%-8s\t%-12s\t%-30s\n",
			"����",
			"����",
			"�Ա�",
			"�绰",
			"��ַ");
		printf("%-20s\t%-5d\t%-8s\t%-12s\t%-30s\n",
			pc->data[ret].name,
			pc->data[ret].age,
			pc->data[ret].sex,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
	return;
}

//�޸�ͨѶ¼��Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
		return;
	}
	char name[20] = { 0 };
	printf("��������Ҫ�޸ĵ���:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("ͨѶ¼�в��޴���!\n");
	else
	{
		printf("�������޸ĺ������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������޸ĺ������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("�������޸ĺ���Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("�������޸ĺ�ĺ���:>");
		scanf("%s", pc->data[ret].tele);
		printf("�������޸ĺ�ĵ�ַ:>");
		scanf("%s", pc->data[ret].addr);

		printf("�޸ĳɹ�!\n");
	}
	return;
}

//��ӡͨѶ¼��Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼��û������!\n");
		return;
	}
	int i = 0;
	printf("%-5s\t%-20s\t%-5s\t%-8s\t%-12s\t%-30s\n",
		"���",
		"����",
		"����",
		"�Ա�",
		"�绰",
		"��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-5d\t%-20s\t%-5d\t%-8s\t%-12s\t%-30s\n",
			i + 1,
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
	return;
}

//����ͨѶ¼��Ϣ
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�!\n");
	return;
}