#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个函数，每调用一次这个函数，就会将num的值加1

//void Add(int* p)//地址传进来的时候需要的是指针变量
//{
//	(*p)++;
//}
//
//
//int main()
//{
//
//	int num = 0;
//	Add(&num);//函数内部改变外面的变量 - 传地址进去//数组名实际上也是地址
//	printf("%d\n", num);//1
//	
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//	
//	return 0;
//}

//函数的嵌套调用和链式访问
//拒绝函数嵌套定义//但是函数可以嵌套调用

//嵌套调用

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//链式访问


//#include<string.h>
//
//int main()
//{
//	//int len = strlen("abc");//求字符串长度的函数
//	//printf("d\n", len);
//
//	////链式访问//把一个函数的返回值作为另一个函数的参数
//	//printf("d\n", strlen("abc"));
//
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	////strcpy(arr1, arr2);
//
//	////链式访问
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	//测试
//	//printf("%d", printf("%d", printf("%d", 43)));//打印的是什么
//	//printf 会返回打印在屏幕上的字符个数
//		
//	return 0;
//}

//函数的声明和定义

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 使用之前，告知一声//但是具体存不存在是无关紧要的
//	int Add(int, int);//只需要 函数名 函数参数 参数个数 参数类型 返回类型
//    //一般要满足先声明后使用的原则//放前面就不用声明
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

//写一个计算器
//函数定义的实际应用场景
#include "add.h"
#include "sub.h"
//函数声明一般放在头文件里
//声明头文件，相当于把头文件的代码都替换过来
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);

	printf("%d\n", c);


	return 0;
}

//生成静态库//不想卖源码//做生意
//导入静态库
//静态库和.h如何使用
#pragma comment(lib,"sub.lib")