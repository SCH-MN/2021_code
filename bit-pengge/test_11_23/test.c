#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体内存对齐 - 计算结构体内存大小
//明天学完142-146
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	int k;
//	double d;//8
//};
//int main()
//{
//	struct S s = { 0 };//给第一个元素初始化为0，其余元素也默认为0
//	struct S2 s2 = { 0 };
//
//	printf("%d\n", sizeof(s));//12 - 结构体的内存对齐规则
//	printf("%d\n", sizeof(s2));
//	
//	return 0;
//}
//三句话描述规则
//1.结构体的第一个成员
//放在结构体变量在内存中存储的位置的0偏移处开始
//2.从第2个成员往后的所有成员，都放在一个对齐数
//(成员的大小和默认对齐数的较小值)的整数的整数倍的地址处
//3.结构体的总大小是结构体的所有成员的对齐数中最大的那个对齐数的整数倍

//位置偏移量
//这个概念很抽象，不过看视频能看懂 - 视频142 

//练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//}s2;
//int main()
//{
//	printf("%d\n", sizeof(s2));//8
//
//	return 0;
//}

//默认对齐数是8 

//linux平台上没有默认对齐数的概念，以自身的大小为对齐数来对齐的，没有默认的概念

//练习4 - 结构体嵌套
struct S3
{
	double d;
	char c;
	int i;
};
struct S4//求大小
{
	char c1;
	struct S3 s3;
	double d;
}s4;
int main()
{
	printf("%d\n", sizeof(s4));//32

	return 0;
}

//题外话：有对齐数的内存比较整齐
//为什么存在内存对齐/

//参考原因
//1.平台原因
//2.性能原因

//总的来说：结构体的内存对齐是拿空间来换取时间的做法
//是有底层的考虑的

//在设计结构体时，让占用空间小的成员尽量集中在一起