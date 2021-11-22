#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//编码的三种境界
//1.看代码是代码
//2.看代码是内存
//3.看代码还是代码 - 能像说话一样去编写代码

//指针进阶1

//1.字符指针
//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//	//本质上是把“hello bit”这个字符串的首字符的地址存储在了ps中
//	//这种写法是将 首字符h 的地址放在 指针ps 中
//
//	char* ps = "hello bit";//这是两种情况，但是访问形式可以一样
//	char arr[] = "hello bit";
//
//	*ps = 'w';//引入异常，常量字符串访问冲突
//	arr[0] = 'w';
//
//
//	//printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//	printf("%s\n", arr);//打印字符串，给起始位置的地址就可以打印出来
//
//	return 0;
//}


//一道笔试题 - 来自《剑指offer》以后一定要看一看
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";//指针指向的字符串是常量字符串
//	char *str4 = "hello bit.";//常量字符串是不能被改的，所以在内存中只存放了一份
//
//	*str3 = 'w';//加上const使得语法更加严谨，在写出冲突的句式时会报错提醒
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//
//	return 0;
//}

//2.指针数组
int main()
{
	//指针数组 - 每个元素都是指针
	//数组 - 数组中存放的是指针（地址）
	//int* arr[3];//存放整型指针的数组

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = { &a, &b, &c };//初始化需要中括号
	//int i = 0;
	//for(i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}//这种用法非常挫，不建议以后这样使用指针数组

	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
		
	int* arr[3] = { a,b,c };//指针数组存放了三个数组首元素的地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(arr[i] + j));
			printf("%d ", arr[i][j]);//两种写法是等价的
			//只是模拟的二维数组形式，实际上不是二维数组
		}
		printf("\n");
	}

	return 0;
}

//以浮点数的形式放进去，以整型的形式读取
//int main()
//{
//	float f = 9.0f;
//	int* p = (int*)&f;
//	printf("%d\n", *p);
//
//	return 0;
//}