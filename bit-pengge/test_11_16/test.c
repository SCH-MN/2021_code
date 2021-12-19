#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符函数和字符串函数
//函数介绍 - 补
//strcat - 字符串追加
//#include<string.h>
//#include<assert.h>
//模拟实现
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;//因为最后要返回这个地址，所以在起始的时候先存一下
//	//因为要用到解引用指针，所以在用之前先断言一下
//	assert(dest && src);//NULL == 0，当括号内判断为假，则断言会给出提示
//	
//	//1.找到目标字符串中的\0
//	while (*dest)//当*dest为\0时，判断为假，跳出循环
//	{
//		dest++;
//	}
//	//2.源数据追加过去，包含\0
//	while (*dest++ = *src++)//将赋值表达式放在括号中，可以同时起到判断的作用
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "hello ";//希望在后面追加字符
//	char arr2[] = "world";
//
//	//strcat(arr1,"world");//字符串追加(连接)
//	//使用前要保证目标空间有足够的空间可以追加进去字符串
//	//strcat(arr1, arr2);
//	//追加的字符串中必须保证有\0，因为会覆盖原来字符串的\0
//	//返回的是目标空间的内容
//
//	//my_strcat(arr1, arr2);//还可以优化，放在下面
//
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
//模拟实现的目的：
//1.锻炼写代码的能力
//2.了解了函数实现的原理，才不会用错

//strcat能否自己给自己追加？ - 学会如何通俗的解释原因
//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//?// \0被覆盖了找不到结束的状态
//	//要想自己给自己追加，可以用strncat
//	printf("%s\n", arr);
//
//	return 0;
//}

//学习也离不开造轮子
//艾伦马斯克的演讲？？

//strcmp - 字符串比较函数
//错误示范
//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";

	//if (p > q)
	//{
	//	printf(">\n");
	//}
	//else
	//{
	//	printf("<=\n");
	//}
	//这样是比较不出什么的
	//p q中放的都是地址 - 比较的是地址

	//if ("obc" > "abcdef")//这种形式下比较的还是地址，也是不行的
	//{

	//}

	//strcmp - 字符串比较大小 - 比较对应字符的ASCII码值
	//接收两个字符串的地址
	//返回int
	//int ret = strcmp("abbb", "abq");//<0 - -1
	//int ret = strcmp("aqq", "aaa");//>0 - 1
//	int ret = strcmp("aaa", "aaa");//0
//
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//字符串的长和大不是一个概念
#include<string.h>
#include<assert.h>
//模拟实现strcmp
//方法一
//int my_strcmp(const char* s1,const char*s2)
//{
//	assert(s1 && s2);//使用前断言一下
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		//if (*s1 == '\0' || *s2 == '\0') - 这种写法对不对还有待验证
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}//若不等于，则跳出循环进行大小的比较
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//方法一优化版
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);//使用前断言一下
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			//if (*s1 == '\0' || *s2 == '\0') - 这种写法对不对还有待验证
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}//若不等于，则跳出循环进行大小的比较
//	return *s1 - *s2;//标准只规定了不相等时返回大于or小于0的数字，不一定必须是1 -1
//}//有兴趣的话，搜VS2019的strcmp库函数看一看源代码，丰富见识
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbb";//a的ASCII码值最小
//	//int ret = strcmp(p, q);
//	int ret = my_strcmp(p, q);
//
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//	return 0;
//}

//strcpy - 字符串拷贝
//strcat - 字符串追加
//strcmp - 字符串比较
//长度不受限制的字符串函数

//strncpy
//strncat
//strncmp
//长度受限制的字符串函数

//测试一下strncpy - 增加了一个长度限制
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//
//	strncpy(arr1, arr2, 4);//增加了长度的限制，此处的4指得是arr2的字符串长度
//	//strncpy(arr1, arr2, 6);//如果给的长度超过了arr2的字符串长度，那么多余的空位会由\0顶上
//	//strcpy(arr1, arr2);//这个函数不安全，增加字符串的时候，不会考虑目的字符串的大小
//	printf("%s\n", arr1);//qwcdef
//	
//	return 0;
//}

//测试一下strncat - 
//int main()
//{
//	char arr1[20] = "hello ";
//	               //hello wor\0
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);//如果给的参数长度超过了arr2的长度，也只是追加到\0为止，这点比strncpy要灵活
//	                        //strncpy给的参数长度是多少，那么就要给你拷多少
//	printf("%s\n", arr1);
//
//	return 0;
//}

//测试一下strncmp -
int main()
{
	char* p = "abcdef0";
	char* q = "abcqwert";

	//int ret = strcmp(p, q);
	int ret = strncmp(p, q, 4);//接收的参数是几个，就比较前几个字符

	printf("%d\n", ret);
	return 0;
}