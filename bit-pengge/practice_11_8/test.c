#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-11_6-指针（初阶）等_作业

//第1题 单选题
//下列这段代码的输出结果
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;//猜测：9变成12？
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}//本题考查的指针的运算

//第3题 单选题
//下面程序的输出结果？
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = 
//	{ {9801,"shang",20},
//	  {9802,"wang",19},
//	  {9803,"zhao",18} 
//	};
//	fun(students + 1);
//
//	return 0;
//}//打印wang

//第8题 单选题
//下面程序要求输出结构体中成员a的数据，以下不能填入横线处的内容是（）
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n",___ );//横线处不可以填入什么? B
//
//	return 0;
//}
//A. a.a ok
//B. *p.a err 因为.的优先级更高，语法上没错误，但是操作结果是有问题的
//C, p->a ok
//D. (*p).a ok

//第9题 编程题
//字符串逆序
//题目：写一个函数，可以逆序一个字符串的内容
//初级测试的时候写过一个更复杂的
//#include<assert.h>
//#include<string.h>
//void reverse(char* str)
//{
//	//加一个断言
//	//assert(str != NULL);
//	assert(str);//同等功能//记得调用相应库
//
//	int len = strlen(str);//记得调用相应库
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	//char* arr[] = "abcdef";//这种写法是错误的
//
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//只要是数组，就可以用sizeof
//适当的位置加const，不是所有的位置都加

//第10题 编程题
//打印菱形
//题目：用C语言在屏幕上输出以下图案
//写出来的代码要有普适性，可以打印8行10行13行之类的
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//假设为7
//	//分开打印
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");//根据行号判断，该行打印几个空格
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for(i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//第11题 编程题
//喝汽水问题
//题目：喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以多少汽水（编程实现）
int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);
	
	//方法二 - 发现规律后
	if (money > 0)
		total = 2 * money - 1;
	
	//方法一
	//int total = money;//统计喝了多少瓶
	//int empty = money;
	////开始置换 - 前提empty大于等于2
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}

	printf("%d\n", total);

	return 0;
}