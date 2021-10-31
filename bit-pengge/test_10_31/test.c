#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//实用调试技巧
//什么是bug
//找bug的过程 - 调试
//拒绝迷信式调试
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();//如果想观察test内部的细节就要按F11 - 逐语句
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//F5 - 启动调试
//F9 - 设置断点
//F10 - 逐过程
//F11 - 逐语句 - 更加细致
// \\\\\\\\
//Ctrl+F5

//调试时如何查看当前信息

//调用堆栈
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//条件断点
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;//断点设置条件，当满足条件时，程序停止
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//一些调试的实例
//实例一
//实现代码：求阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//5
//	//1*2*..*n
//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;//最终调试出的结果
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//
//	return 0;
//}

//实例二
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//越界
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码运行的结果是什么？
//	//死循环 -  
//	return 0;
//}

//《C陷阱和缺陷》可以看看
//《明解C语言》
//《C和指针》
//《比特C课件》haha
//《C语言深度解剖》 - 有些错误，记得验证一下

//C primer plus太厚了，容易放弃

//谭浩强的C语言 - 通俗易懂！
//但是 - 代码写的很差（风格）
//只看语法，不模仿代码


//预防发生错误
//通过编码的技巧，减少错误
//模拟实现strcpy
//strcpy - 字符串拷贝
#include<string.h>

//写的不好，但是能用
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//版本2
void my_strcpy(char* dest, char* src)
{
	while (*src!='\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;//拷贝'\0'
}

//版本3
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//即copy了\0,又使得循环停止
	{
		;//'\0'的ASCII值为0假
	}
}//和源码已经非常接近了

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);

	//strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}