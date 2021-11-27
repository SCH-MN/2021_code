#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组参数、指针参数

//一级指针传参
//void print(int* ptr,int sz)//再用一级指针接收参数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p)//以后如果看到类似的，那就应该传一个字符的地址
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);//p是一个一级指针,一级指针传参
//
//	char ch = 'w';
//	char* p1 = &ch;
//
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}//当一个函数的参数部分为一级指针的时候，函数能接受什么参数？

//二级指针传参
//void test(int** p2)//用二级指针进行接收
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//能否把二级指针进行传参呢？
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = { 0 };//指针数组
//	test(arr);//类型符合就可以传参//传存放一级指针的数组
//
//	printf("%d\n", a);
//
//	return 0;
//}//当函数的参数为二级指针的时候，可以接收什么参数？

//函数指针 - 指向函数的指针 - 存放函数地址的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//    //函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//	//
//	//pf就是一个函数指针变量
//
//	int (*pf)(int, int) = &Add;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);//这两种表达方式是一样的
//
//	return 0;
//}

//练习
//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*pt)(char*) = &test;//正确的格式
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int main()
{
    //函数指针 - 存放函数地址的指针
	//&函数名 - 取到的就是函数的地址
	//
	//pf就是一个函数指针变量

	//int (*pf)(int, int) = &Add;
	int (*pf)(int, int) = Add;//功能相同//Add == pf

	int ret = (*pf)(3, 5);//调用该函数//1
	int ret = Add(3, 5);//原始的调用方法//2
	int ret = pf(3, 5);//*其实是个摆设//*只是为了增加理解//3

	//int ret = *pf(3, 5);//这样就变成了对返回值进行解引用//加*一定要把*pf括起来

	printf("%d\n", ret);

	//printf("%p\n", &Add);
	//printf("%p\n", Add);//这两种表达方式是一样的

	return 0;
}