//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数  1.56*10^1
// 年龄 - 50
// C语言 - 浮点数
//       - 整型 
//
//
#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行后，就可以使用 scanf 了
#include<stdio.h>

//a
// 'a' - 字符a
//
//

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型（int省略了）
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}
// 此处用了注释选中行的快捷按钮，用的时候可以取消注释


//int main()
//{
//	//printf("hehe\n");
//	//printf("bit\n");
//	//printf("%d\n", 100);//打印一个整数 - %d
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}


//int main()
//{
//	//创建的一个变量
//	//类型     变量的名字 = 0；//推荐创建变量的时候，顺便赋值
//	//类型     变量的名字；//语法允许，但是不推荐
//
//	int age = 20;
//	double weight = 75.3;
//	//变量意味着可改
//
//	age = age+1;
//	weight = weight-10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//此处手敲代码时出现一个错误，误将 % 放在了lf的后面
//
//
//	return 0;
//}
//
//%d - 整型
//%f - float
//%lf - double

//全局变量 - 在{}外面定义
//int a = 100;
//
//int main()
//{
//	//局部变量，在大括号内部定义的变量
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//写代码时，不建议将全局变量和局部变量的名字写成一样的
//	//
//	int a = 10;
//
//	printf("%d", a);
//	
//	return 0;
//}


//写一个代码求2个整数的和
//scanf函数是输入函数

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}