#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-04-23_数组编程练习等作业
//第2题 编程题

//实现函数init() 初始化数组全为0
//实现print() 打印数组的每个元素
//实现reverse() 函数完后才能数组元素的逆置

//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)//逆序 - 只是交换，不需要比较大小
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//
//	return 0;
//}

//第3题 编程题
//交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };


	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}

	int arr3[5] = { 0 };
	//数组名是数组首元素的地址 - 0x0012ff44
	//3 = 5;//err
	/*arr3 = arr1;
	arr1 = arr2;
	arr2 = arr3;*///这种写法是错误的

	return 0;
}
//写三子棋、扫雷的博客※