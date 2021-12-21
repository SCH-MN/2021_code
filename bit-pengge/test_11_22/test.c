#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体
//struct Book//创建了Book这样一种类型 - 类型就是用来创建变量的
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6是全局的
//int main()
//{
//	//b1，b2，b3是局部变量
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	//b1,b2,b3,b4,b5,b6都是同种类型的变量
//
//	return 0;
//}

//特殊的声明 不完全声明
//匿名结构体类型 - 创建好后只能用一次(指声明全局变量时)
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//
//}s;//并用该类型创建了一个结构体变量
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//
//}* ps;
//int main()
//{
//	ps = &s;//err - 非法的
//	//编译器会报警
//	//这两个结构体即使结构一模一样，在编译器看来，也是两个不同的类型
//	return 0;
//}

//结构体中可以包含另一个结构体的变量当成员
//struct A
//{
//	int i;
//	char c;
//};
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//假设结构体中可以包含自己的结构体变量
//struct N
//{
//	int d;//4
//	struct N n;//无法计算N在内存中所占的空间大小，套娃了
//};
//结构体的自引用 - 不是包含同类型的结构体的变量，而是包含同类型的结构体的指针
//struct Node
//{
//	int data;
//	struct Node* next;//是个指针变量的话，这样就可算了
//};
//结构体中套娃的情况很多
//课件里面也写出来了，多看看

//int main()
//{
//
//	return 0;
//}

//扩展：
//数据结构：数据在内存中存储的结构

//线性数据结构：顺序表，链表
//链表：节点 ->数据域，指针域

//树形：二叉树

//结构体的变量和定义初始化
//struct S
//{
//	char* c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	//struct S s3 = { 'x',20 };//结构体变量的初始化
//	struct B sb = { 3.14,{'w',100},'q' };
//	//.
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}//结构体变量的创建 - 结构体变量的创建和定义是可以同时进行的

//结构体内存大小的计算
//一个结构体到底占多大的内存空间
struct S
{
	int i;//4
	char c;//1
};
struct S2
{
	char c1;//1
	int i;//4
	char c2;//1
};
//结构体内存对齐的问题
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8 ?

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//

	return 0;
}