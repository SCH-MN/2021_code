#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指向函数指针数组的指针

//函数指针的数组 - 数组
//取出函数指针数组的地址

//整型数组
//int arr[5];
//int (*p1)[5] - &arr;

//整形指针的数组
//int* arr[5]
//int* (*p2)[5] - &arr;
//p2是指向【整型指针数组】的指针

//函数指针数组
//&函数指针数组
//
//int(*p)(int, int);//函数指针
//int(*p2[4])(int, int);//函数指针的数组
//int(* (*p3)[4])(int, int) = &p2;//取出的是函数指针数组的地址
//p3就是一个指向【函数指针的数组】的指针 - 就是无穷的套娃

//int main()
//{
//	int arr[10];
//	//数组元素类型 - int
//	//arr数组的类型是 int[10]
//	return 0;
//}

//回调函数
//

//之前写过的计算器(switch语句版) - 根据本节知识进行修改
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
//int Calc(int (*pf)(int, int))//接收的其实就是函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入2个操作数>:");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}//回调函数 - 通过指针去调用函数
////这样可以简化代码，减少冗余
////回调函数需要用到函数指针
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
//			ret = Calc(Add);//写一个函数
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
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
//}

//qsort函数 - 快速排序的实现

//联想 - 冒泡排序
//void bubble_sort(int arr[], int sz)//冒泡排序算法//这样写出来的函数不够通用
//{
//	int i = 0;
//	//冒泡排序的的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int  arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);//排序前先打印出来瞅瞅
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//假设写一个冒泡排序函数，让你排序字符串
//bubble_sort_str();
//strcmp

//使用qsort
#include <stdlib.h>
//void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
//	       size_t num,//排序数据元素的个数
//	       size_t size,//排序数据中的一个元素的大小单位是字节
//	       int (*compar)(const void*, const void*)//比较待排序数据中的2个元素的函数
//           );//4个参数

//
//qsort - 库函数 - 的作者
//
//int cmp_int(const void* e1, const void* e2)//骚啊，这个函数中的一部分还需要自己按照格式写一个，非常考验脑子能不能明白这一点
//{
//	return *(int*)e1 - *(int*)e2;//看qsort函数中最后一个参数的接收规则
//  //升序还是降序只要改变此处逻辑上的顺序即可
//}
//void print_arr(int  arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//排序
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	//打印
//	print_arr(arr, sz);
//	return 0;
//}

//qsort的使用
struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
}
void test2()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"zhangsan,30"},{"lisi",34},{"wangwu",20} };
	//abcq
	//adc
	//
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);

}
int main()
{
	test2();

	//要想验证结果的话，自己写一个打印字符串的函数
	return 0;
}