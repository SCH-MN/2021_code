#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针初阶1
//int main()
//{
//	int a = 10;//a占4个字节 - 
//	int* pa = &a;//拿到的是a的4个字节中的第一个字节的地址
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}

//指针类型的作用 - 指针类型是有具体意义的
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n",sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//
//	return 0;
//}

//指针类型的意义
//1.指针类型据定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名就是数组首元素地址
//	char* pc = arr;//警告：不兼容
//		
//	printf("%p\n", p);
//	printf("%p\n", p+1);//跳过一个整型
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//跳过一个字符


	// 0 1 2 3 4 5 6 7 8 9 a b c d e f
	//11111111
	//    8421//4个二进制可以表示1个十六进制
	
	/*int a = 0x11223344;
	char* pc = &a;
	*pc = 0;*///解引用只访问1个字节//指针类型发生了变化，访问权限就发生了变化
	
	//int* pa = &a;
	//*pa = 0;//解引用访问4个字节

//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//p+i 其实是下标为i的地址
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	char* p = arr;
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//p+i 其实是下标为i的地址
	}

	return 0;
}
//未来选择指针的类型，应该根据想要的功能来实现
//1、希望按照一个字节字节的来访问，用char*的指针
//2、希望被当成一个整型整型的来访问，用int*的指针
//3、希望被看成一个double类型的空间来访问，交给一个double*的指针更合适

//数组指针+1，会跳过一个数组