#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针和数组
//指针+指针？ - 没什么意义

//数组名是什么？
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//数组名是数组首元素的地址
//	printf("%p\n",&arr[0]);//%p - 打印地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//p就是首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//p + i;//下标为i元素的地址
//		//printf("%p <==> %p\n", &arr[i],p + i);
//		*(p + i) = i;//解引用
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]); //p[2] --> *(p+2)
//	//一定要知道代码底层的原理
//
//	//[]是一个操作符 2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);//神推理
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2) --> *(2+arr) -->2[arr]
//	//编译器预算时会转化形式
//
//	//arr[2] <==> *(p+2) <==> *(2+p) <==> *(2+arr) ==2[arr]
//	//2[arr] <==> *(2+arr)
//
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int* *ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址//两颗*的意义不同
//	//*ppa == pa
//	//*pa == a
//	//* *ppa == a
//
//	//可以类推出三级指针
//	int*** pppa = &ppa;
//
//	return 0;
//}

//指针数组 - 数组
// 
//好孩子

int main()
{
	int arr[10];//整型数组 - 存放整型的数组就是整型数组
	char ch[5];//字符数组 - 存放的是字符
	//指针数组 - 存放的是指针
	int* parr[5];//整型指针的数组
	char* pch[5];//字符指针的数组

	return 0;
}//指针数组如何初始化和应用放在后面讲