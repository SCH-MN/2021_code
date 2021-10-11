#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言中任何一个函数都是非常重要的

//f(x) = 2*x+1;
//f(x, y) = x+y;

#include<string.h>

//strcpy - 拷贝字符串

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
//
//	return 0;
//}//debug - 程序员调试版本//release - 正式发布版本 - 也是测试人员测试的版本

//memory - 记忆 -内存
//memset - 内存设置 - 设置内存块
//学新函数完全可以照着C语言文档学 - 门槛就是一些英语基础 - 实在不会也可以翻译
//学会查询工具的使用

//size_t
int main()
{
	char arr[] = "hello bit";//将hello全部换成x
	memset(arr, 'x', 5);//此处memset的作用是把arr空间的前5个字符替换成x
	printf("%s\n", arr);

	return 0;
}

//然而库函数并不能干所有的事，所以自定义函数是程序员必须要掌握的

//自定义函数是非常重要的

//p.s. 图形库，用来实现界面 - 比如：mfc，qt - C/C++相关的界面库
//先学内功再学招式