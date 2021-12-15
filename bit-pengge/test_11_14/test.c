#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针笔试题(下)
//笔试题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//a的类型：int(*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//这个题有些深度，需要按内存理解。多看看课件
//	//两个指针相减得到的是两个指针之间元素的个数
//	return 0;
//}
//此题还需要转换成二进制来直观的思考//通过画图来表示内存
//答案：FFFFFFFC -4

//笔试题6
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//指针 数组名 解引用
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}
//答案：10 5

//笔试题7
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//主要是理解这些问题的方法，非常重要
//数组的地址是连续的

//笔试题8
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;//多重指针的引用，画图看内存布局

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER//要考虑优先级
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}
//这道题很有难度//自己画一下内存布局
//学数据结构 - 画图

//学习如何去学习
//1.画图 - windows自带的画图软件，感觉功能就挺多的了，简单的使用还是可以满足的
//2.调试窗口 - 学会调试
//3.不要懒
//4.自己要成长起来