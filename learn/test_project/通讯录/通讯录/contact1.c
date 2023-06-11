#include "contact.h"

//ͨѶ¼��ʼ��
//2.��̬�汾
int InitContact(Contact* pc)
{
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(3, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = 3;
	//�����ļ���Ϣ��ͨѶ¼��
	LosdContact(pc);
	return 0;
}

void DestroyContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

//����ͨѶ¼��Ϣ
//2.��̬�汾
void CheckCapacity(Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("���ݳɹ�!\n");
		}
	}
}

void AddContact(Contact* pc)
{
	assert(pc);
	//����
	CheckCapacity(pc);

	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("���������:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�!\n");
	return;
}