#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符串函数及其模拟实现
//函数介绍

//strstr - 在一个字符串中找另外一个字符串
//#include<string.h>
//#include<assert.h>
//char* my_strstr(const char* str1,const char* str2)//此处比较难，涉及到指针的高明运用，可以重复看视频136
//{
//	//本函数的功能旨在查找，并不改变值，故加上const会比较好
//	//因为传入的是指针，少不了解引用，故先断言assert
//	assert(str1 && str2);
//	//牵扯到一个回车的问题
//	//还得记录str1的实时位置
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))//还应考虑到s1或s2查完的情况
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//在arr1中查找是否包含arr2数组
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	
//	
//	//如果存在，返回的是第一次找到时的位置
//	//如果不存在，返回的是空指针
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}

//KMP - 字符串查找算法
//看看CSDN博客 - 程序员编程艺术

//zpw@bitedu.tech
//zpw - 邮箱名
//bitedu - 域名
//tech - 后缀

//198.168.3.122
//198
//168
//3
//122

//strtok - 切割字符串 - 如何通过 空指针找到上一次的位置
//仔细听 - 视频136
//#include<string.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech0 hehe";
//	char* p = "@. ";
//	char tmp[30] = { 0 };
//    strcpy(tmp, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p);ret != NULL; ret = strtok(NULL, p))//NULL在此处被当成了一个判断条件
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strtok有记忆功能 - 内部有一个静态变量，会每次记住上一次插入分割符的位置

//strerror - 把错误码转换成错误信息
//使用库函数的时候，
//调用库函数失败的时候，都会设置错误码
//
//int errno;//5//这是一个全局的错误码
#include<string.h>
#include<errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");//以读的形式打开一个文件
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//...
	fclose(pf);
	pf = NULL;

	return 0;
}