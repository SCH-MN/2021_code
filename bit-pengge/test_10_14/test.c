#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//练习2：画图讲解
//编写函数不允许创建临时变量，求字符串的长度

//#include<string.h>

//int my_strlen(char* str)
//{
//	int count = 0;//编写函数不允许创建临时变量
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')//指针 - 地址 - 变量空间
//		return 1 + my_strlen(str + 1);//传进去的是加之后的值，留下的是加之前的值//若第一个字符不等于'\0'，则加1再调用
//	    //return 1 + my_strlen(str++);//传进的是加之前的值，留下的是加之后的值//这是非常坑爹的一种写法，不要这么写
//	
//	else                   //str + 1其实就是地址加1
//		return 0;//若第一个字符就是空字符，则返回0
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));//数组传过去的是地址
//	return 0;
//}


//递归和迭代
//练习3
//求n的阶乘。（不考虑溢出）

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
////有一些功能可以使用迭代的方式来实现，也可以使用递归
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = Fac(n);
//	
//	/*for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}*/
//	
//	printf("%d\n", ret);
//	return 0;
//}


//练习4:
//求第n个斐波那契数。（不考虑溢出）
//前两个数之和
//求第n个
//int count = 0;//定义一个全局变量count，计算重复调用了多少次
////递归可以求解，但是效率太低
//int Fib(int n)
//{
//	//统计第3个斐波那契数的计算次数
//	if (n == 3)
//		count++;	
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
////输入50时要好久才回出结果，效率太低
////进行了重复大量的计算
////此次为什么没有栈溢出//因为层次还不是特别深，只是调用的次数有点多
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//既然递归效率低，那么循环是否能解决这个问题
//前两个一加，得到第三个数
//用了循环的方法，也就是迭代的方式
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//算一次少一次//要跳出的呀
	}
	return c;
}//效率非常的高//当然如果数大过整型的取值范围，结果会错误（本题中忽视错误，只考虑效率）

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//思考：汉诺塔问题 - 递归的问题
//思考：青蛙跳台阶的问题 - 斐波那契数列问题
//自己研究一下
// 
//扩展：广联达 - 北京和西安 - 国内建筑领域内的软件龙头企业