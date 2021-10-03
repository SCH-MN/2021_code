#define _CRT_SECURE_NO_WARININGS 1
//上面这串宏定义可以使 VS正常调用scanf，如果不宏定义那么可以用scanf_s来代替

//首先先写出main()函数，包含一个return 0;
//100-500代码
//如何执行？-C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//在屏幕上打印两个字：比特
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼(引用头文件 stdio.h)

//
#include<stdio.h>

int main()
{
	printf("比特");
	return 0;
}

//编译+链接+运行代码
//快捷键：1.ctrl+f5
//        2.fn+ctrl+f5
//        3.菜单中：【调试】->【开始执行不调试】 

//VS2013可能会出现程序执行太快，看不到结果的情况
//要设置一下VS2013的属性

//2019不需要设置属性