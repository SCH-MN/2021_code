#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//联合（共用体） - 共用同一块空间 - 是一种特殊的结构体类型
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
//	//地址全都一样
//
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//判断当前机器大小端
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
	//返回1 就是小端
	//返回0 就是大端
}
int main()
{
	int ret = check_sys();

	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
//找到能用联合体的情况

//联合体的计算
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
//对齐到最大对齐数的整数倍