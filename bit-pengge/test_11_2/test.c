#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//Debug和Release
//补充知识
//Release版本的一些优化 - 会使Relesse和Debug版本出现不同

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//切换成release版本后i的地址就会放在数组地址的前面，这样就避免了这种循环带来的越界死循环
	printf("%p\n", &i);//%p - 打印地址
	printf("%p\n", &arr[9]);
	
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;//越界访问 - 导致死循环 - Ralease版本会将i放在低地址上 - 将死循环优化掉
	//	printf("hehe\n");               // - Debug版本会将i放在高地址上间接导致越界的可能
	//}
	return 0;
}