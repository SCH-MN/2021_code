#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//两段 有趣的代码
//代码1
//int main()
//{
//	(*( void(*)() )0)(/*无参，不用传参*/);//调用这个函数
//	//将0强制转换成函数指针类型
//	//在*后加p变成函数指针变量 - 不加就是函数指针类型
//
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1.void(*)() - 函数指针类型
//	//2.(void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3.*(void(*)())0 - 对0地址进行了解引用操作
//	//4.(*(void(*)())0)() - 调用0地址处的函数
//
//	//锻炼读代码的能力
//	//推荐书《C陷阱和缺陷》
//	return;
//}

//代码2
//1/
void (*signal(int, void(*)(int)))(int);
//函数指针类型套娃

typedef void(*pfun_t)(int);//对void(*)(int )的函数指针类型重命名为pfun_t
//typedef unsigned int uint;

//2. 两种写法完全等价
pfun_t signal(int, pfun_t);

//1.signal和()先结合，说明signal是函数名
//2.signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
// 该函数指针，指向一个参数int，返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针
// 该函数指针，指向一个参数为int，返回类型是void的函数
// signal是一个函数的声明

//int main()
//{
//	//要学会分析问题的方法
//
//	return 0;
//}

//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*
//整型指针数组中 int* arr[5];
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)//Sub就是减法
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int,int) = Add;//pf就是指向函数的一个指针
//	int (*pf2)(int, int) = Add;
//	int (*pfArr[2])(int, int) = (Add, Sub);//pfArr就是函数指针数组
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)//Sub就是减法
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)//Sub就是减法
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****** 1. add   2. sub *******\n");
//	printf("****** 3. mul   4. div *******\n");
//	printf("********** 0.exit ************\n");
//	printf("******************************\n");
//}
//
//int main()
//{
//	//函数指针数组的应用
//	//计算器 - 计算整型变量的加、减、乘、除
//	//a&b a^b a|b a>>b a<<b a<b
//
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0; 
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}//用函数指针数组，可以简化代码
//避免增加一个功能就要增加一个case

//改
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)//Sub就是减法
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)//Sub就是减法
{
	return x / y;
}

void menu()
{
	printf("******************************\n");
	printf("****** 1. add   2. sub *******\n");
	printf("****** 3. mul   4. div *******\n");
	printf("********** 0.exit ************\n");
	printf("******************************\n");
}

int main()
{
	//函数指针数组的应用
	//计算器 - 计算整型变量的加、减、乘、除
	//a&b a^b a|b a>>b a<<b a<b

	int input = 0;
	do
	{
		menu();

		//pfArr就是函数指针数组
		//转移表 - 《C和指针》
		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };//函数指针数组
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");

		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作数:>");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}
	} while (input);//当input为0时，判断为假，循环终止，故不需要特地加break;
	return 0;
}