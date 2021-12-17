#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//昨天最后一题的优化算法
//题目：看昨天上传的文件 - 懒了不想打
#include<string.h>
int is_string_rotate(char* str1, char* str2)
{
	//0.小漏洞，先判断一下两个字符串的长度是否一致
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//长度不相等，肯定不是旋转得到的
	
	
	//1.str1字符串的后边追加一个str1
	//AABCDAABCD
	int len = strlen(str1);//求字符串的长度
	strncat(str1, str1, len);
	//2.判断str2是否为str1的字串
	char* ret = strstr(str1,str2);//可以用指针接收strstr函数的返回值

	return ret != NULL;//等于NULL时，为假，返回0. 不等于NULL时，为真，返回1.
	//if (ret == NULL)//可以将代码换成上面的一句
	//{
	//	return 0;
	//}
	//else
	//{
	//	return 1;
	//}
}
int main()
{
	char arr1[20] = "AABCD";
	//ABCDA
	//BCDAA
	//CDAAB
	//DAABC
	//AABCD - 之前的判断实际上是个穷举法
	//AABCDAABCD - 包含了所有的可能组合

	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}//此种方法用的都是库函数，不用自己算，敲的更快，可以在考试时节约时间

//补充知识：strncat
//int main()
//{
//	char arr[20] = "hello";
//	//hello bit\0
//	//strcat(arr,"bit");
//
//	//strcat(arr, arr);
//	strncat(arr, arr,5);//在字符串后追加5个字符//n相当于多了一个参数
//
//	printf("%s\n", arr);
//	
//	return 0;
//}