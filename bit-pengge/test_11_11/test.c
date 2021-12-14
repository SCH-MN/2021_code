#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//9.指针和数组笔试题解析

//
//sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小 
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有数组名都是数组首元素的地址
//

//int main()
//{
//	//整型数组
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4/8 a + 0是第一个元素的地址，sizeof(a + 0)计算的是地址的大小
//	printf("%d\n", sizeof(*a));//4 *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
//	printf("%d\n", sizeof(a+1));//4/8 a + 1是第二个元素的地址，sizeof(a + 1)计算的是地址的大小
//	printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小
//
//	printf("%d\n", sizeof(&a));//4/8 &a虽然是数组的地址，但是也是地址，sizeof(&a)计算的是一个地址的大小
//	printf("%d\n", sizeof(*&a));//16 解引用数组的地址，找到的就是数组，计算的数组的大小
//	printf("%d\n", sizeof(&a+1));//4/8 &a+1 是数组后面空间的地址
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//
//	return 0;
//}

#include<string.h>
int main()
{
	////字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4/8 地址的大小
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr+1));//4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4/8

	////报错一大堆
	//printf("%d\n", strlen(arr));//随机值 找不到/0，停不下来
	//printf("%d\n", strlen(arr+0));//随机值 同理
	//printf("%d\n", strlen(*arr));//err× 把首元素当成地址解引用了，这个是有问题的
	//printf("%d\n", strlen(arr[1]));//err× 同理 strlen认为是个地址，但我们传过去的是个ASCII码值
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值-6
	//printf("%d\n", strlen(&arr[0]+1));//随机值-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 多了个/0
    //printf("%d\n", sizeof(arr+0));//4/8 地址的大小
    //printf("%d\n", sizeof(*arr));//1
    //printf("%d\n", sizeof(arr[1]));//1
    //printf("%d\n", sizeof(&arr));//4/8
    //printf("%d\n", sizeof(&arr+1));//4/8
    //printf("%d\n", sizeof(&arr[0]+1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err× 把首元素当成地址解引用了，这个是有问题的
	//printf("%d\n", strlen(arr[1]));//err× 同理 strlen认为是个地址，但我们传过去的是个ASCII码值
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//5

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4/8
	printf("%d\n", sizeof(p+1));//4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p+1));//4/8
	printf("%d\n", sizeof(&p[0]+1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p+1));//随机值
	printf("%d\n", strlen(&p[0]+1));//5


	return 0;
}