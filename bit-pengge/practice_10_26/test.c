#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-04-20_数组的定义和初始化等作业

//第4题 单选题 
int main()
{
	int arr[] = {1,2,(3,4),5};//逗号表达式
	printf("%d \n", sizeof(arr));//16
	return 0;
}

//第5题 单选题
int main()
{
	char str[] = "hello bit";
	//[hello bit\0]每个元素时一个字符，也就是一个字节
	printf("%d %d\n", sizeof(str), strlen(str));
	//10 9
	//strlen - 函数-求字符串长度
	//sizeof - 操作符-计算变量/类型所占的内存大小，单位是字节
	return 0;
}