#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//return 则不行，只能返回一个

//数组可以将函数处理结果的两个数据返回给主函数
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	return 0;
//}

//用指针 返回处理结果的两个数据
//void test(int* p1,int *p2)//只要有*就行，空格是为了方便看
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a,&b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//全局变量 返回处理结果的两个数据
//int a;
//int b;
//void test()
//{
//	a = 1;
//	b = 2;
//}
//int a = 0;
//int b = 0;//如果放在后面，则用之前一定要声明
//int main()
//{
//	test();
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//逗号表达式 - 用 逗号 隔开的表达式 - 整个逗号表达式的结果是最后一个表达式的结果
//exec((v1, v2), (c3, v4), v5, v6);
   //v2的结果 //v3的结果

//第7题 编程题
//函数判断闰年
//实现函数判断year是不是闰年 - 上课讲过

//第8题 编程题
//交换两个参数
//实现一个函数来交换两个整数的内容 - 上课讲过

//第9题 编程题
//乘法口诀表
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，给出9*9口诀表；输入12，给出12*12口诀表

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j = 1; j <= i; j++)//行与列相同？
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}//对齐长度不太美观，鉴于目的已经达到，故不在优化
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);//打印表
//	//函数的起名是非常关键的，名字最好能体现函数的功能
//	
//	return 0;
//}

//2021 - 04 -18_3-函数（初阶）_作业
//第2题 函数Fun(2)验证
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}//用少量的代码完成了重复大量的计算
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	printf("%d", Fun(n));//Fun(2) = 16
//
//	return 0;
//}

//第3题 编程题
//打印一个数的每一位
//递归方式实现打印一个整数的每一位 - 上课讲了

//第4题 编程题
//求阶乘
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题） - 上课讲了

//第5题 编程题
//strlen的模拟（递归实现）
//递归和非递归分别实现strlen - 上课也讲了

//第6题 编程题
//字符串逆序（递归实现）
//编写一个函数 reverse_string(char* string) (递归实现)
//实现：将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C函数库中的字符串操作函数
//比如：
//char arr[] = "abcdef";

//逆序之后数组的内容变成：fedcba
int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//写法一 非递归
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;//本题不允许使用库函数，strlen不能用//所以我们要造一个strlen
//	//通过下标找到元素//然后交换
//	while (left < right)//等于时，可能是中间的元素
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}

//写法二 非递归
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;//本题不允许使用库函数，strlen不能用//所以我们要造一个strlen
//	//通过下标找到元素//然后交换
//	while (left < right)//等于时，可能是中间的元素
//	{
//		char tmp = *(str + left);//找到下标为left的元素，解引用操作？ - str[left]//通过指针的方式来写的
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}

//写法三 递归//只是为了练习递归采用递归实现的
void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);//求长度
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0';//3
	//判断条件//在递归中调用自己时，一定要设置条件，负责会死循环
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);//4
	}

	*(str + len - 1) = tmp;//5
}

int main()
{
	char arr[] = "abcdef";

	reverse_string(arr);//函数名的意思就是逆序字符串//数组名arr是数组arr首元素的地址
	printf("%s\n", arr);//fedcba

	return 0;
}