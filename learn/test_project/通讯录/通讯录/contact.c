#include "contact.h"

//菜单
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

//通讯录初始化
////1.静态版本
//void InitContact(Contact* pc)
//{
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//	//memset(pc, 0, sizeof(Contact));
//	return;
//}

//增加通讯录信息
////1.静态版本
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("通讯录已满，不可再增加\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入号码:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("增加成功!\n");
//	return;
//}

//查找位置
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

//删除通讯录信息
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录中没有内容!\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入需要删除的人:>");
	scanf("%s", name);
	//1.查找
	int ret = FindByName(pc, name);
	if (-1 == ret)
	{
		printf("通讯录中没有此人!\n");
		return;
	}
	//2.删除
	for (int i = ret; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功!\n");
	return;
}

//查找通讯录信息
void SearchContact(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空!\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入需要查找的人:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("通讯录中查无此人!\n");
	else
	{
		printf("找到了，位置在第 %d 行\n", ret + 1);
		printf("%-20s\t%-5s\t%-8s\t%-12s\t%-30s\n",
			"姓名",
			"年龄",
			"性别",
			"电话",
			"地址");
		printf("%-20s\t%-5d\t%-8s\t%-12s\t%-30s\n",
			pc->data[ret].name,
			pc->data[ret].age,
			pc->data[ret].sex,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
	return;
}

//修改通讯录信息
void ModifyContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空!\n");
		return;
	}
	char name[20] = { 0 };
	printf("请输入需要修改的人:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("通讯录中查无此人!\n");
	else
	{
		printf("请输入修改后的名字:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入修改后的年龄:>");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入修改后的性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入修改后的号码:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入修改后的地址:>");
		scanf("%s", pc->data[ret].addr);

		printf("修改成功!\n");
	}
	return;
}

//打印通讯录信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录中没有内容!\n");
		return;
	}
	int i = 0;
	printf("%-5s\t%-20s\t%-5s\t%-8s\t%-12s\t%-30s\n",
		"序号",
		"姓名",
		"年龄",
		"性别",
		"电话",
		"地址");
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

//排序通讯录信息
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
	printf("排序成功!\n");
	return;
}