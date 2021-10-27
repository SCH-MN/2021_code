#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//取地址操作符
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符//%p - 打印地址
//	int *pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符//单目操作符
//	printf("%d\n", a);//20
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}

//sizeof数组
//地址的大小是固定的

//比较大小
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if (a != b)
//	//if (a > b)
//	//if (a < b)
//	if (a <= b)
//	{
//
//	}
//	return 0;
//}= 赋值 -- 判断相等

//-- 
//比较2个字符串相等 不能使用 ==
//

//逻辑操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//if(a && b)//a为真且b为真//逻辑与
//	if(a || b)//逻辑或
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}//区分逻辑与、按位与。逻辑或、按位或

//360笔试题
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b&&d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	
//	return 0;
//}

//条件操作符 - 三目操作符 - ? :
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//三目操作符
//	b = (a > 5 ? 1 : -1);//表达的逻辑就是if else
//
//	//max = (a>b?a:b);
//	
//	return 0;
//}

//逗号表达式
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//逗号表达式 - 要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果

	int d = (c = 5, a = c + 3, b = a - 4, c += 5);//由逗号隔开的一串
	        //c=5  a=8         b=4         c=10

	printf("%d\n", d);
	return 0;
}