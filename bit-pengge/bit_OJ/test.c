#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//第1题 单选题
//问输出的结果是什么
//int cnt = 0;
//
//int fib(int n)
//{
//	cnt++;//每调用一次fib函数，cnt都会加1
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);//是一个递归函数 - 递归函数往往会产生很多套娃操作
//}
//
//void main()
//{
//	fib(8);//67
//	printf("%d", cnt);
//}


//第2题 单选题
//问 输出的结果
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);//打印1然后加1
//	} while (x--);//2为真，然后减1
//	return 0;
//}
//该程序输出的结果是：无限的1.0，陷入死循环


//第3题 单选题
//执行之后的结果是什么
//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d", i, j);
//	return 0;
//}


//第4题 单选题
//以下程序的k的最终值是
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;//考验运算符优先级//*=优先级小于+
//
//	printf("%d", k);
//	return 0;
//}


//第5题 单选题
//以下程序的最终输出结果为
//#include<stdlib.h>
//
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);//1
//	return 0;
//}


//第10题 单选题
//执行如下代码的值
//int main()
//{
//	int a = 0;c = 0;
//
//	do
//	{
//		--c;//c=-1
//		a = a - 1;//a=-1
//	} while (a > 0);
//
//	return 0;
//}


//第12题 单选题
//以下for循环的执行次数是 4次
//int main()
//{
//	int x = 0;
//	int y = 0;
//	                  //同时为真时，会进入到循环
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	{
//		;
//	}//1 1 1 1
//
//	return 0;
//}


//ACM编程题1
//求最小公倍数
//正整数A和正整数B的最小公倍数是指能被A和B整除的最小的正整数值
//设计一个算法，求输入A和B的最小公倍数


//方法一：比较慢
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//printf("请输入两个数字：");//提示是多余的
//	//输入
//	scanf("%d %d", &a, &b);
//	//先找出A和B的最大值
//	//m就是最小公倍数
//	int m = a > b ? a : b;//取A和B中的较大值
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)//满足这个条件即是最小公倍数
//		{
//			printf("%d\n", m);//打印最小公倍数
//			break;
//		}
//		m++;//不满足就m+1，一个个的试
//	}
//
//	return 0;
//}

//方法二：速度更快一些
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1;; i++)//也可以写成while循环的格式
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);//a*i就是最小公倍数
//			break;
//		}
//
//	}
//
//	return 0;
//}
//有些严谨的题目会给范围，让编写程序时避免溢出
//辗转相除法
//通过理解将代码实现出来


//ACM编程题2
//倒置字符串
//将一句话的单词进行倒置，标点不倒置。
//比如I like bejing。经过函数后变为：beijing like I
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	//scanf("%s", arr);//不能用来输入字符串，遇见空格就会停止
	//输入字符串
	gets(arr);//读取一行
	//经典方法：三步翻转法
	//1.字符串整体翻转
	// gnijieb ekil I
	int len = strlen(arr);
	reverse(arr,arr+len-1);//写一个函数
	//arr+len-1是最后一个
	 
	//2.每个单词逆序
	//beijing like I
	char* start = arr;
	while (*start)//只要*start不是'\0',就可以继续循环
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')//只要end不等于空格，那么就往后遍历
		{                                //若end为'\0'时，就结束了
			end++;
		}
		//逆序一个单词
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;//start要跳过空格
		else
			start = end;//为了避免跳过'\0',需要加一个限制条件
	}	
	printf("%s", arr);
	return 0;
}