#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组通过下标来访问//从0开始
//
//	printf("%d\n", arr[4]);//打印第5个元素//[]就是下标引用操作符
//	//[]的操作数是2个：arr，4
//	// 
//	//3+5;两个操作数
//	return 0;
//}

//函数调用操作符
//int Add(int x, int y)//函数的定义
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);//此处的（）不能删掉//（）- 函数调用操作符
//
//	test();//及时不需要传入参数，（）也不能省
//	//操作数：（）内的参数+函数名
//
//	return 0;
//}

//结构成员访问的操作符
//.
//->

//结构体
//int float char short
//double long
//
//书：书名，书号，出版社，作者，定价
//人：名字，年龄，性别
//

struct Book//自定义类型 - 自己创造的类型
{
	//描述Book所需要的详细信息
	//结构体成员（变量）
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	//结构体变量名.成员名
	struct Book b = {"C语言","C20210509",55};
	struct Book* pb = &b;


	printf("书名：%s\n", pb->name);//-> 指向
	printf("书号：%s\n", pb->id);
	printf("价格：%d\n", pb->price);

	//printf("书名：%s\n", (*pb).name);//此处就使用了 .操作符
	//printf("书号：%s\n", (*pb).id);//解引用
	//printf("价格：%d\n", (*pb).price);

	//printf("书名：%s\n", b.name);//此处就使用了 .操作符
	//printf("书号：%s\n", b.id);
	//printf("价格：%d\n", b.price);

	return 0;
}