#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模仿qsort实现一个冒泡排序的通用算法
//自己的冒泡排序
void Swap(char* buf1, char* buf2, int width)//注意为什么交换需要传入width//给了宽度，可以按照字节进行交换
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}//要注意函数的排放顺序
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(void* base,
	             int sz,
	             int width,
	             int (*cmp)(const void* e1, const void* e2)//最重要的部分，正是这个部分实现了比较各种类型的数据时，比较的通用性
                //算是函数指针的高级应用
                )
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//arr[j] arr[j+1]
			if (cmp( (char*)base + j * width, (char*)base + (j + 1) * width) > 0)//大于0就交换，根据情况达成升序或降序的结果
			{
				//交换
				Swap( (char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test3()
{
	//整形数据的排序
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}
int main()
{
	test3();

	return 0;
}
//这个写的代码也可以排序结构体，按年龄排序，按名字排序等等

//const放在*右边，指针变量的类型不能被修改
//const放在*左边，指针指向的内容不能被修改

//通用函数属性之一：高内聚

//void* - 无具体类型指针，可以存放任意类型的地址，什么样的地址都可以接收