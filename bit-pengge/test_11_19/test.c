#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//内存函数
//1.memcpy
//2.memmove
//3.memmcmp
//4.memset

//实例
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//strcpy() - 不适用于整型数组
//	//char* strcpy(char* dest,const char* src)
//	
//	//一个整型变量有内存4个字节，strcpy遇到\0就会停下 
//	//01 00 00 00 - 此种情况下第一个变量就停下了
//	return 0;
//}

//这个时候我们就启用针对内存块的函数
//内存操作函数
//memcpy - 内存拷贝
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	memcpy(arr2, arr1, 20);//接收参数不限制类型，应用比较广泛
//
//	return 0;
//}

//模拟实现memcpy
#include<assert.h>
void* my_memcpy(void* dest,const void* src,int num)//如果想用纯粹的无符号正数，可以用size_t
{
	//接收的参数中有指针，多半需要解引用，故要在解引用前断言一下
	assert(dest && src);
	char* ret = dest;

	while(num--)//4 3 2 1//循环4次
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;//这种写法是最稳的//有些简便的写法在不同编译器上会出现问题
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, 20);
	
	//printf("%p\n", arr2);//此处出现错误，无法打印出 - 不要用这种方法打印数组
	int i = 0;
	for (i = 0; i < 10; i++)//打印数组要用for循环的方式进行遍历，再逐个打印出来
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
//有时间看看运算符的优先级