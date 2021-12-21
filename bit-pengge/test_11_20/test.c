#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//memcpy函数应该拷贝不重叠的内存
//memmove函数可以处理内存重叠的情况
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10
//	memmove(arr1 + 2, arr1, 20);//1 2 1 2 3 4 5 8 9 10
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
//如果dest落在src左边，那么只能从前往后会拷
//如果dest落在中间，那么只能从后往前拷
//落到src结尾处的后面，那么从前往后，从后往前都可以

//我们可以写一种简单的 - 简单的分界
//dest在src左边 - 从前往后
//dest在src右边 - 从后往前

//模拟实现memmove
#include<assert.h>
void* my_memmove(void* dest,void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前->后
		while (num--)//此处的num--可谓是神来之笔
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	if (dest > src)
	{
		//后->前
		*((char*)dest + num) = *((char*)src + num);
	}

	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1+2, 20);//1 2 1 2 3 4 5 8 9 10

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}
//memcpy - 只要实现了不重叠拷贝就可以了
//VS中的实现既可以拷贝不重叠，也可以拷贝重叠内存 - VS中的超额完成任务
//标准中没有强制要求memcpy可以拷贝重叠内存

//通常情况下，拷贝重叠内存交给memmove就可以了