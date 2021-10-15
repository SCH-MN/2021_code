#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//递归 - 函数自己调用自己

//int main()
//{
//	printf("hehe\n");
//	main();//死循环了//跑一段时间就关了
//
//	return 0;
//}

//练习1：画图讲解
//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234.输出1234

//汉诺塔问题？？？
//void print(unsigned int n)//不需要返回值
//{
//	if (n > 9)
//	{
//		print(n / 10);//递归 - 函数自己调用自己
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//%u - 无符号整型
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);//不断逼近限制条件
	}
}

int main()
{
	test(1);
	return 0;
}//栈溢出