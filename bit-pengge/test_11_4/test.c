#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//浮点型在内存中的存储
//limits.h
//定义了整型家族中的取值范围

//float.h
//定义了浮点型家族中的取值范围

//#include<limits.h>
//int main()
//{
//	INT_MAX;
//	return 0;
//}

//浮点数存储的例子，输出的结果是什么呢？
int main()
{
	int n = 9;//4byte - 4字节
	float* pFloat = (float*)&n;
	printf("n的取值为:%d\n", n);//9
	printf("*pFloat的值为:%f\n", *pFloat);//以浮点数视角去看时发现不是9.0

	*pFloat = 9.0;//以浮点数视角存储9.0
	printf("num的取值为:%d\n", n);//以整型形式拿出来又不是9
	printf("*pFloat的取值为:%f\n", *pFloat);//9.0

	return 0;
}
//为什么打印的结果是这样？
//说明了浮点数和整型在内存存储的形式不同


//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//1.011 * 2^2
//	//s=0 M=1.011 E=2
//	//s=0 M=011 E=2+127
//	// 
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//	// 
//	//这就是存进去的二进制序列
//	//倒序存储
//
//	return 0;
//}

