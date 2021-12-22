#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//枚举 - 一一列举的意思
//可以被一一列举的事物，有限的

//声明枚举类型
//尽管枚举类型是常量，但是在这个常量诞生的时候还是可以改变值的
//enum Color
//{
//	RED,//0
//    GREEN,//1
//    BLUE//2 - 通过递增的方式往下走，默认增长1
//};
//与结构体的概念出入较大
//int main()
//{
//	//cpp 语法检查更加严格
//	enum Color c = 2;
//	
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//为什么要使用枚举类型？- 谈谈优点

//实现一个计算器
void menu()
{
	printf("***************************************\n");
	printf("*************1.add    2.sub************\n");
	printf("*************3.mul    4.div************\n");
	printf("*************0.exit   *****************\n");
	printf("***************************************\n");
}
//枚举就是一种类型
//整型就是整型
enum Option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case SUB:
			break;
		case MUL:
			break;
		case DIV:
			break;
		case EXIT:
			break;
		}//用符号替换掉数字，增加代码的可读性可维护性，秒啊

	} while (input);
	return 0;
}