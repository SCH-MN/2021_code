#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//隐式类型转换
//算术转换 - 向字节长的，精度更高的方向转换
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//
//	return 0;
//}

//操作符的属性
//1.操作符的优先级
//2.操作符的结合性
//3.是否控制求值顺序
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//优先级不起作用，结合性决定了顺序
//
//	return 0;
//}

//问题代码
//int fun()
//{
//	static int count = 1;//static修饰后，创建了不会被销毁
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	//2 - 3 * 4
//	answer = fun() - fun() * fun();//调用的顺序不对
//	printf("%d\n", answer);//输出多少？
//	return 0;
// }

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);//VS12//linux gcc-10
	printf("%d\n", ret);//涉及到寄存器
	return 0;
}//有可能写出的运算没有唯一确定的值 - 这种代码就是有问题的

//作业要及时的完成