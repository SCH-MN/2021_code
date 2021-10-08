#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//EOF
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组的数组名本来就是地址，多以此处没有取地址符
//	//gets连空格都能读取
//	
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'，将其拿走
//	//只能消耗一个字符
//	
//	//清理缓冲区中额度多个字符
//	int tmp = 0;//字符也可以用整型来存储
//	while ((tmp = getchar()) != '\n')//要注意getchar的应用场景
//	{
//		;//空语句
//	}
//	
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//0-9的补集
//			continue;//只打印数字
//
//		putchr(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		
//		i++;//调整部分
//
//	}
//	return 0;
//}

//for循环

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		/*if (i == 5)
//			break;*/
//		if (i == 5)
//			continue;//跳过5
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//循环体内改变循环变量的例子
//容易出错
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//
//		printf("%d ", i);
//		int j = 0;
//		for (i = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//建议左闭右开区间的写法，这样写效果更好一些
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//判断部分额度省略 - 判断部分恒为真 - 不建议大家省略
//	for (;;)//死循环打印hehe
//	{
//
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}