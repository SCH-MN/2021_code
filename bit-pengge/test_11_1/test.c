#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模拟实现strcpy
//#include<string.h>

//法-；
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//法一优化:
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest++ = *src++;//hello的拷贝
//	}
//	*dest = *src;//\0 的拷贝 
//}
//法一再优化
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//即当判断，又当赋值表达式//\0 的ASCII码值为0,0为假，循环终止
//	{
//		;//hello的拷贝
//	}	
//}

//NULL空指针是不能进行解引用操作
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//断言//如果条件为假，断言就会报错，并提供参考信息
//	assert(dest != NULL);//对程序员友好
//
//	while (*dest++ = *src++)//即当判断，又当赋值表达式//\0 的ASCII码值为0,0为假，循环终止
//	{
//		;//hello的拷贝
//	}
//}

//加上限定条件，阻止出错误
//#include<assert.h>
//把src指向的内容考别放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改
//
//strcpy 这个库函数 其实返回的是目标空间的起始地址
//
//char* my_strcpy(char* dest,const char* src)//加const会提示运行错误
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//不小心写反了 - 程序崩溃//const可以防止这种错误的出现
//	{
//		;//hello的拷贝
//	}
//	//return dest;//?? - 这样是不行的
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a = b + 3;//赋值是从左往右运算的
//	
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//my_strcpy(arr1, arr2);//模拟实现strcpy
//
//	//strcpy(arr1, arr2);//1.目标空间的起始地址 2.源空间的起始地址
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//
//
//	return 0;
//}


//const在自定义函数中形参的应用
//int main()
//{
//	//例子1
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);
//
//	//例子2
//	//const 修饰变量，这个变量就被称为常变量，不能被修改，但是本质上还是常变量
//	const int num = 10;
//	//num = 20;//err
//
//	int* const p = &num;
//	int n = 100;
//	//const修饰指针变量的时候
//	//const如果放在*的右边，修饰的是指针变量p,表示指针变量不能被改变
//	*p = 20;//但是指针指向的内容，可以被改变       
//	p = &n;
//
//
//	const int* p = &num;
//	//int const* p = &num;//作用相同
//	int n = 100;
//	//const修饰指针变量的时候
//	//const如果放在*的左边，修饰的是*p,表示指针指向的内容，是不能通过指针来改变的
//	//*p = 20;	
//	p = &n;//但是指针变量本身是可以修改的
//
//
//
//	printf("%d\n", num);
//
//	return 0;
//}

//男孩 女孩和凉皮
//int const * const * const p//头脑风暴

//自己动手，模拟实现
//strlen 是求字符串长度的 - 一定要自己动手写
//my_strlen
//1.const
//2.assert

//
//
//
//健壮性
//鲁棒性
//
//size_t - unsigned int

//声明外部符号
extern size_t my_strlen(const char* str);

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}

//__cdecl 函数调用约定
//编译性错误 - 语法错误
//链接性错误 
//运行时错误 - 结果错了 - 借助调试

//利用思维导图工具画一张图