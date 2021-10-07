#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//什么叫语句，用；隔开的就是一条语句
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//空语句
//	return 0;
//}

//int main()
//{
//	int age = 160;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	//双分支的情况//if else默认只能控制一句话
//	/*if (age >= 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");*/
////	}//一个大括号，叫一个代码块，若果不带就默认控制一条语句
//	
//	/*if (age >= 18)
//		printf("成年\n");*/
//	return 0;
//}

//悬空else
//int main() {
//	int a = 0; 
//	int b = 2; 
//	if (a == 1) //故此处if不满足，直接结束
//		if (b == 2) 
//			printf("hehe\n");
//	    else 
//			printf("haha\n"); //else 和它离得最近的if匹配
//	return 0;
//}//要练就一种好的代码风格

//代码风格 - 
//高质量C/C++编程

//int test()
//{
//	if (1)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	//if (num = 5)//这样就变成了复制语句，永远为真
//	if(5 = num)//这样书写，出错的时候回不能运行，无法编译//比较的时候将常量放在左边
//	   printf("hehe\n");
//	
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 15;
//	if (1 == num % 2)//好的代码风格
//		printf("奇数\n");
//	return 0;
//}

////输入一个数字
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//}

//输出一到一百之间的奇数
//int main()
//{
	//int i = 0;
	//for (i = 1; i <= 100; i++)
	
	//C++
	//C99支持了这样写
	//for (int i = 1;i <= 100;i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		printf("%d ",i);
	//	}
	//}

	//从1开始每次+2，直接输出奇数，省去判断
//	for (int i = 1; i <= 100; i+=2)
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch语句

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//1-5工作日
//6-7休息日

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//break 是否添加要根据需求
//	default://默认选项,在范围之外的选项//default 也可以放在开头，但是习惯上放在后面
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

int main() {
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用 
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}