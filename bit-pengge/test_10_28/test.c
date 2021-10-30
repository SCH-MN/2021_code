#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针初阶2
//野指针 - 指针指向的位置是不可知的
//int main()
//{
	//这里的p就是一个野指针
	//int* p;//p是一个局部的指针变量,局部变量不初始化的话，默认是随机值
	//*p = 20;//非法访问内存了
	
	//2.越界访问 - 程序崩溃
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//指针指向的空间释放 - 也会造成野指针

//test()
//{
//	int a = 10;
//	return &a;
//}//变量a出函数就销毁了
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化，好习惯
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
	//当前不知道p应该初始化为 什么地址的时候，直接初始化为NULL
	//int* p = NULL;
	//明确知道初始化的值
	//int a = 10;
	//int* ptr = &a;

	//C语言本身是不会检查数据的越界行为的
//	int* p = NULL;
//
//	if (p != NULL)
//	*p = 10;
//
//	return 0;
//}

//指针运算
//指针的关系运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数：指针的关系运算
//	for(vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		//地址由低到高变化
//		*vp++ = 0;
//		//指针+整数
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)//用比较的关系运算，判断是不是到最后了
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针 - 指针
//指针减去值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减
//	//前提：两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//>从“char *”到“int *”的类型不兼容
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针得到的两个指针之间的元素个数
//	return 0;
//}

#include<string.h>
//计数器写法
//int my_strlen(char* str)//strlen函数的实现
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归的方法

//指针 - 指针的方法
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;//指针相减，得指针间的元素个数
}

int main()
{
	//strlen();//求字符串长度
	//递归 - 讲递归时，讲了如何模拟实现strlen函数 - my_strlen
	//int len = strlen("abc");

	char arr[] = "abc";
	int len = my_strlen("abc");//传过去的是字符串首子符a的地址 - 用一个字符指针来接受

	printf("%d\n",len);

	return 0;
}
