#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符函数和字符串函数
//函数介绍
//#include<string.h>
//#include<assert.h>
////1.计数器版本
//int my_strlen(const char* str)//本函数的目的只是为了求字符串的长度，不会改变字符串，加上const会更加安全
//{
//	int count = 0;//计数器
//	assert(str != NULL);//既然要对指针进行解引用，那么在使用之前进行一下断言，会更安全
//
//	while (*str != '\0')//只要括号内的条件满足，就会一直循环
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.递归的版本
////3.指针-指针的版本
//int main()
//{
//	char arr[] = "abc";
//	//char arr[] = { 'a','b','c' };//找不到/0，会输出一个随机数
//
//	//int len = strlen(arr);
//	//strlen功能：从指定的位置开始计数，到/0停下来，且/0不计入长度中
//	int len = my_strlen(arr);//既然知道了功能是如何实现，那么就自己模仿着写一个函数
//
//
//	printf("%d\n", len);
//	
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//if (strlen("abc") - strlen("abcdef")>0)//>
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)//<=,因为，my_strlen的返回类型是int
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}
//strlen()函数的返回值是无符号整数，本题中的3-6的结果会变成一个相当大的无符号整数
//库函数和自建函数各有优劣

//strcopy这个函数在C语言中用的非常广泛
#include<string.h>
int main()
{
	//char arr[20] = { 0 };
	char arr[20] = "##########";
	
	//arr = "hello";//err
	//char* p = "hello";
	//strcpy(arr, "hello");//string copy
	//测试：拷贝的原数据中没有行不行
	char arr2[] = { 'a','b','c' };
	strcpy(arr, arr2);//当遇到\0时可能已经越界访问好久了
	
	//也不能拷贝超过数组长度的数据，否则程序会崩溃
	//常量字符串也不可以，目标一定是可修改的

	printf("%s\n", arr);

	return 0;
}
//要学会模拟实现