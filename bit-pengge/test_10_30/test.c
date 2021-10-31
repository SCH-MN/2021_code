#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构体初阶
//结构体的定义和初始化
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu//新创建的类型 相当于int
//{
//	//成员变量
//	struct B sb;//结构体的成员，可以是另一个结构体
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1和s2也是结构体变量
////s1，s2是全局变量

//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14} ,"张三",30,"202005034" };//对象
//				 //拿类型创建了对象
//				 
//	//结构体成员的访问
//	//. ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);//只有指针才能使用->
//
//	return 0;
//}


//结构体传参数的两个写法
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu//新创建的类型 相当于int
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//};
//void print1(struct Stu t)//t是形参
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14} ,"张三",30,"202005034" };//对象
//	//写一个函数打印s的内容
//	//结构体传参数的两个写法
//	print1(s);//传值调用 - 传的变量
//	print2(&s);//传址调用 - 传了一个结构体变量的地址
//	//传址调用更好
//	//1.地址更省空间（传值调用需要开辟相同大小的空间），效率更高
//	//2.ps可以改变主函数中的s
//
//	return 0;
//}

//参数压栈
//参数传参也叫压栈操作
int Add(int x, int y)//每一个函数调用都会在内存的栈区上开辟一块空间
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);


	return 0;
}

//扩展：搜索 - 函数栈帧的创建和销毁