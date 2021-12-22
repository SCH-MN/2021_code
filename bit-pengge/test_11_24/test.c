#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//修改默认对齐数
//VS平台上有默认对齐数8

//把默认对齐数改为2
//#pragma pack(2)//改后为8
//struct s
//{
//	char c1;//0
//	//1-3浪费的字节
//	int i;//4-7
//	char c2;//8
//	//9-11浪费的字节
//};//共12
#pragma pack()//括号里什么都不写，表示再改回来 * 把默认对齐数取消掉？
//若改成1，则实际上就没有内存对齐了
//int main()
//{
//	printf("%d\n", sizeof(struct s));
//
//	return 0;
//}
//应用场景：结构在对齐方式不合适的时候，我们可以自己更改默认对齐数

//百度笔试题：
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
//#include<stddef.h>
//struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s, c1));//0
//	printf("%d\n", offsetof(struct s, i));//4
//	printf("%d\n", offsetof(struct s, c2));//8
//
//	//offsetof接收类型和成员名，返回偏移量
//	return 0;
//}

//结构体传参 - 探讨哪一种传参方式更好
//传递值 - 空间开销很大，改变形参不会影响实参
//传递地址 - 节省空间，效率提高 √如果不想改变可以加const

//以后如果遇到结构体传参，传地址更好 - 既能实现功能，效率更高
//int main()
//{
//	//代码之前写过，这里省了
//
//	return 0;
//}

//位段
//结构体实现位段的能力
//位段的声明和结构体类似，但是有所不同

//47 32+15
//struct A
//{
//	//4个字节 - 32bit
//	int _a : 2;//_a 成员占2个bit位
//	int _b : 5;//_b 成员占5个bit位
//	int _c : 10;//_c 成员占10个bit位
//	//15
//	//4个字节 - 32bit
//	int _d : 30;//_d 成员占30个bit位//最大是32个bit，不能超过设置的范围
//};
//16位 - int - 2byte - 16bit 
//32位 - int - 4byte - 32bit
//int main()
//{
//	printf("%d\n", sizeof(struct A));//?
//	return 0;
//}
//位段是不夸平台的，注重可移植的程序应该避免使用位段

//例子：
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 6;
};
int main()
{
	struct S s = { 0 };//16进制下为62 03 04
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4; 

	return 0;
}

//大小端字节序和内存内部的顺序不是一回事
//位段更节省空间，但是有跨平台的问题