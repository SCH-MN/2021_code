#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
//作用域和生命周期
// 
// 作用域
//局部变量的作用域，就是变量所在的局部范围
//全局变量的作用域，整个工程
//
//
//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}

////声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//生命周期
//变量的生命周期，变量的创建和销毁之间的时间段
//
//局部变量的生命周期；进入局部范围生命周期开始，出局部范围生命结束
//全局变量的生命周期；程序的生命周期

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//常量

//#define MAX 10000
//
//int main()
//{
	//1.字面常量
	//3.14;//浮点型常量
	//10;//整型常量
	//'a';//字符型常量
	//'abcdef';//字符串常量

	//2.const修饰的常变量
	//const int num = 10;//num就是变量，在被const修饰后 - 具有常属性（不能改变的属性）
	//num = 20;//左侧不能被再赋值
	//printf("%d\n", num);//20

	//int arr[10] = {0};//10个元素

	//const int n = 10;//const只是赋予了一个属性，本质上是变量额度还是变量，只不过拥有了一个常属性而已
	//int arr2[n] = { 0 };//n是变量的，这里是不行的

	//3.#define 定义的标识符常量
	//MAX = 20000;//err
	//int n = MAX;
	//printf("n = %d\n", n);

	//4.枚举常量
	//可以一一列举的常量
	//写的太杂乱了，新开一个main()函数

//	return 0;
//}

////性别
//enum Sex
//{
//	//这种枚举类型的变量未来可能取值
//	//枚举常量
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET,
//};
//
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//	//MALE = 3;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//{
//	"abcdef";
//	"hello bit";
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//字符数组 - 数组是一组数，一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	//char arr[] = "hello";//[]里不写元素时，就会根据后面字符串的大小，来初始化
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};//充分证明了字符串的结束的标志就是\0
//	//char arr2[] = { 'a','b','c','\0' };//充分证明了字符串的结束的标志就是\0
//	
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//15是一个随机值，加上\0后就变成了3
//
//	//int len = strlen("abc");//string length//若strlen未定义，是没有引用头文件 #include<string.h>
//	//printf("%d\n", len);//\0在字符串中存在，但是在求长度时是不算在里面的
//
//	////打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//转义字符的概念,遇事不决加\

//int main()
//{
//
//	//printf("c:\test\test.c");//转义字符做的鬼，转变了它原来的意思
//	printf("ab\ncd");//转变成一个叫换行的意思了，不再是\+n的意思了
//
//
//	return 0;
//}

//int main()
//{
//	//三字母词在VS2019中测不出来了,现在的编译器可能不支持了
//	//printf("are you ok\?\?");//??) -- ] - 三字母词 可以在?前面加\让其打印出来的是?
//	//在VC6.0上会打印出 are you ok]
//	//
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");//\a触发电脑的蜂鸣
//
//	return 0;
//}

//printf("%d", 100);
//printf("%c", 'a');
//printf("%s", "abc");

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是十进制的多少？
//	//X -- ASCII码值是88
//
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101
//	//printf("%c\n", '\x30');//48 -- '0'
//	//printf("%d\n", strlen("abc"));//3
//
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	//热知识：8进制数里没有8
//
//	return 0;
//}

//
//注释：是用来解释复杂代码的
// 

//int main()
//{
//	//int a = 10;//C++注释风格
//	/*
//	int b = 0;
//	*/    //C语言注释风格 -- 不支持嵌套注释
//
//	return 0;
//}

//选择语句

//int main()
//{
//	int intput = 0;//输入的值
//	printf("加入比特:>\n");
//	printf("那要好好学习吗(1/0)?:>\n");
//	scanf("%d", &intput);
//
//	if (intput == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//循环语句
//比特 - 30000代码 - 找一个不错的工作


//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000);
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//函数

//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//函数方式解决
//	int sum = Add(num1, num2);
//
//	printf("%d", sum);
//
//	return 0;
//}

//数组

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	//...
//
//	//数组 - 一组兴同类型的元素的集合
//	//10个整型1-10存起来
//	//数组是用下标来访问的，下标是从0开始的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//
//	return 0;
//}

//操作符
//算术操作符：+  -  *  /  %

//int main()
//{
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//% - 取模（余）
//	
//	printf("%d\n", a);
//
//	return 0;
//}

//移位操作符：右移>>   左移<<
//移动的是二进制位
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//赋值操作符

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//
//	a = a_3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//	return 0;
//}

//int main()
//{
//	//0表示假，非0就是真。
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;//+ 一般省略掉
//
//	return 0;
//}

//int main()
//{
//	//sizeof是一个操作符
//	//sizeof 后面的括号可以省略，不是函数，函数的括号不能省略
//	//计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));//类型周围的括号是不能去掉的
//	printf("%d\n", sizeof(a));//sizeof 支持省去变量的括号
//
//	return 0;
//}

int main()
{
	//10个元素*4个字节=40，每个元素都是整型，
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));

	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);//如何计算一个数组的元素个数

	return 0;
}