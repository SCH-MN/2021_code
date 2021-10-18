#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[n];//[]里必须是常量//非常常见的一种错误
//	           //C99语法支持//变长数组 - 数组的大小是变量//gcc - 对C99支持的比较好
//	           //VS2019不支持变长数组
//
//	//整型数组初始化
//	//int a = 10;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };//没有指定大小//
//    //相当于int arr2[5] = { 1,2,3,4,5 };
//	
//	//字符型数组初始化//字符串只能存到字符型数组中去
//	char ch1[5] = {'b','i','t'};//0就是'\0'的ASCII值
//	char ch2[] = {'b','i','t'};
//	//相当于char ch2[3] = { 'b','i','t' };
//	char ch3[5] = "bit";//b i t \0 0
//	char ch4[] = "bit";// b i t \0
//
//	char ch5[] = "bit";// b i t \0//\0是打印字符串结束标志
//	char ch6[] = { 'b','i','t' };// b i t//此字符数组的长度是一定的//但是用strlen求长度是，是不确定的
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值//此处是15
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[]下标引用操作符//下标是从0开始的//数组是通过下标来访问的
//	//printf("%d", arr[4]);
//
//	//打印每个数组中的元素
//	int i = 0;
//	printf("%d\n", sizeof(arr));//该数组所占的字节数
//	printf("%d\n", sizeof(arr[0]));//该数组中的元素所占的字节数
//	printf("--------------------");
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//相除就得到数组的长度 - 个数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储

//int main()
//{
//	//printf("%x\n", 0x12);//%x - 按十六进制打印
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);//%p - 是按地址的格式打印 - 十六进制的打印
//								//热知识 - 地址都是用十六进制存储的
//	}
//
//	return 0;
//}
//1、一维数组在内存中是连续存放的 - 要点
//2、随着数组下标的增长，地址是由低到高变化的。

int main()
{
	//printf("%x\n", 0x12);
	//printf("%p\n", 0x12);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//数组名是数组首元素的地址

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}

//整型指针？难道还有字符型指针吗？