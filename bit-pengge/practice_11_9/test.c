#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//第7题 编程题
//调整奇数偶数
//题目：输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有的偶数位于数组的后半部分

void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		//从前往后找一个偶数
		while ((left < right) && (arr[left] % 2 == 1))//要考虑到防止越界
		{
			left++;
		}
		//从后往前找一个奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;

		}
		//
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)//采用循环打印数组
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	//给任何数据都能够处理，不能挑食 
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	move(arr, sz);//移动函数
	print(arr, sz);//打印函数

	return 0;
}