#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// ~ 按位取反

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//看来波浪号在上还是在中间不影响其功能
//
//	//按位取反,位：二进制位
//
//	return 0;
//}

//++  --

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//不建议大家去研究 - 浪费时间研究的是错误的代码
//	printf("%d\n", b);
//
//
//	//int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//
//	//
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//	
//	//int b = ++a;//前置++，先++，后使用
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}

//强制类型转换

//int main()
//{
//	//强制类型转换//只有不匹配的时候才会使用//不推荐用，说明一开始就设计的有问题
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//逻辑操作符

//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int c = a || b;
//
//	printf("%d\n", c);
//
//
//	/*int a = 3;
//	int b = 0;
//
//	int c = a && b;
//	printf("%d\n", c);*/
//
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}

//条件操作符（三目操作符）

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//
//	printf("%d\n", max);
//
//
//
//	return 0;
//}

//逗号表达式

//int main()
//{
//	//(2,4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	         //a=5       c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//从左向右以此计算
//	//整个逗号表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//
//	return 0;
//}

//下标引用操作符

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//此处的[]就是下标引用操作符
//	
//	return 0;
//
//}

//函数调用操作符

//int main()
//{
//	//调用函数的时候，函数后面的( )就是函数调用操作符
//	printf("hehe\n");
//	printf("%d", 100);
//
//	return 0;
//}

//C语言提供的关键字
//1、C语言提供的，不能自己创建关键字
//2、关键字不能做变量名，变量名不能是关键字
//

//int main()
//{
//	//int char;//错误示范
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		//auto 在int前，省略掉了
//		//auto 在新的C语言语法中也有其他用法 - 暂时不考虑
//	}
//
//	return 0;
//}

//int main()
//{
//	//
//	//大量频繁被使用的数据，想放在寄存器中，提升效率
//	//现在编译器已经非常聪明了，导致这个用处不是那么大了
//	register int num = 100;//建议num的值存放在寄存器中//只是建议，最终放不放看计算器
//
//	return 0;
//}

//typedef类型重定义，重命名
//typedef unsigned int u_int;
////张三 - 小三（小名）
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 =100;
//
//	return 0;
//}

//static - 静态的
//1、static修饰局部变量
//2、static修饰全局变量
//3、static修饰函数
//void test()
//{
//	static int a = 1;//a是局部变量//static使a在出函数时没有被销毁
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern 声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//define是一个预处理指令
//1.define 定义符号

//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//define定义宏
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	//             4*2+3//只是被替换
//	return 0;
//}

//int main()
//{
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n", &a);//%p 专门用来打印地址的
//	int * pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量
//	
//	//* 说明pa是指针变量
//	//int 说明pa指向的对象是int类型的
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	return 0;
//}

//指针变量能否存放自身的地址
//int main()
//{
//	int* pa = &pa;//放是可以放的，可以琢磨着玩，但是不要这样写
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	*pa = 20;//解引用操作 *pa就是通过pa里面的地址，找到a
//	//   只用操作符就可以找到对象
//	printf("%d\n", a);//可以通过这种方式间接的修改a的值
//	
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//结构体可以让C语言创建新的类型出来
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};//结构体的大括号后还要加 ;


int main()
{
	struct Stu s = {"张三",20,85.5};//结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	
	struct Stu* ps = &s;//结构体指针
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	
	printf("3:%s %d %lf", ps->name, ps->age, ps->score);
	//                   结构体指针->成员变量名
	return 0;
}



