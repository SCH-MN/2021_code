#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//goto语句可以没有？？？

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;//去flag那里//死循环了
//	return 0;
//}//goto 语句会使代码乱跳//不建议大家使用

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！
//
//shutdown -s -t 60
//shutdown -a
//

#include<string.h>
#include<stdlib.h>
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system() - 执行系统命令
//
//	char input[20] = { 0 };//存放输入的信息//数组名本来就是个地址
//	system("shutdown -s -t 60");//system - stdlib.h
//	
//again:
//	printf("请注意，你的电脑就在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);//数组名本来就是个地址
//
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用 == ，应该使用strcmp() - string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("你才是猪,再给你一次机会\n");
//		goto again;
//	}
//
//	return 0;
//}

//用while循环，代替goto语句
int main()
{
	//关机
	//C语言提供了一个函数：system() - 执行系统命令

	char input[20] = { 0 };//存放输入的信息//数组名本来就是个地址
	system("shutdown -s -t 60");//system - stdlib.h

	while (1)
	{
		printf("请注意，你的电脑就在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);//数组名本来就是个地址

		if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用 == ，应该使用strcmp() - string compare
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("你才是猪,再给你一次机会\n");
		}
	}
	return 0;
}

//只有多层嵌套循环，容易死循环的时候
//用goto语句来处理错误情况

//goto 语句只能在一个函数内跳转，不能跨函数

//void test()
//{
//flag:
//	printf("test\n");
//}
//
//int main()
//{
//	goto flag;//跨函数是不行的//只有多层嵌套想跳出来时，才建议使用
//	return 0;                 //平时一般能代替就代替，能不用就不用
//}