#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-30_指针和数组运算等_作业
//第2题 单选题
//下面程序的结果是？
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}//1,6

//第4题 单选题
//下面程序的结果是？
int main()
{
	int a[5] = { 5,4,3,2,1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));

	return 0;
}//4,1

//第5题 编程题
//qsort模拟实现
//题目：模仿qsort的功能实现一个通用的冒泡排序

//第6题 编程题
//qsort使用练习
//题目：练习使用库函数，qsort排序各种类型的数据

//备注：这两个编程题上课都讲过了，往前面翻翻代码

//到此，指针已经全部讲完了，总结一下吧