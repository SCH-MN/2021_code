#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ϣ������壩 - ����ͬһ��ռ� - ��һ������Ľṹ������
//struct enum
//union Un
//{
//	char c;//1
//	int i;//4
//};
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//��ַȫ��һ��
//
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//�жϵ�ǰ������С��
check_sys()
{
	int a = 1;
	if ((*(char*)&a) == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int check_sys()
{
	union u
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	//����1 ����С��
	//����0 ���Ǵ��
}
int main()
{
	int ret = check_sys();

	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
//�ҵ���������������

//������ļ���
//union Un
//{
//	char a[5];//1
//	//int i;//4
//	char c;//1
//};//5
union Un
{
	short a[5];//2 10
	int a;//4
};//12
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}
//���뵽����������������