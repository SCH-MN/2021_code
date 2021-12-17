#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-23_字符指针等_作业
//第10题 单选题
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";//不同的数组
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";//常量字符串，
//	if (str1 == str2)
//		printf("str1 and str2 are not same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//第11题 编程题
//杨氏矩阵
//题目：有一个数字矩阵，矩阵得每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在

//要求：时间复杂度小于O(N)

//1 2 3 4
//2 3 4 5
//4 5 6 7
//int find_num(int arr[3][3], int r, int c, int k)
//{
//	//首先要定位
//	int x = 0;
//	int y = c - 1;
//
//	while (x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			//printf("%d %d\n", x, y);
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}

//改进后
int find_num(int arr[3][3], int* px, int* py, int k)
{
	//首先要定位
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;//通过指针将结果带回来
			return 1;//找到了
		}
	}
	return 0;//找不到
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	//如果找到返回1，找不到返回0
	int x = 3;//行
	int y = 3;//列
	//&x,&y
	//1. 传入参数
	//2. 带回值

	int ret = find_num(arr, &x, &y, k);//用函数实现
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}

	//O(1)
	//N - 3 5 7
	// 
	//N - 查找次数最坏的情况下是N次，   2N 3N
	//N*N N*(N-1) -- O(n^2)

    //查找一个数字，比如说找：7
	//遍历的方法不满足要求
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{

	//		}
	//	}
	//}

	return 0;
}