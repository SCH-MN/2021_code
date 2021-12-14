#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针笔试题(上)

//笔试题1
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0; 
//}
//程序输出的结果是什么？ 2,5

//笔试题2
//由于还没学结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//结构体指针变量p
////假设p 的值为0x100000。如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001//0x1 - 16进制的1
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//
//	return 0;
//}
//指针类型决定了指针的运算

//笔试题3
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//知识点：小段存储，大端存储
//	//ptr2比较复杂，请仔细思考
//
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//笔试题4
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//此处用的小括号是 ，逗号表达式
	int* p;
	p = a[0];
	printf("%d", p[0]);//p[0]等价于*(p+0)
	return 0;
}