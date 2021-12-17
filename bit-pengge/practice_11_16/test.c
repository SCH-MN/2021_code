#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-05-28_函数指针数组等_作业
// 
// 
// 
// 
//第5题 编程题
//字符串左旋
//题目：实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include<string.h>
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;//1
//		//2.后面的n-1个字符往前挪动//右旋挪动的方向相反
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	//char* p = "ABCDEF";//err,这种写法是错误的
//	int k = 2;
//	//left_move();//可以起一个有趣的名字//英语水平还是很重要的
//	string_left_rotate(arr,k);
//	printf("%s\n", arr); 
//
//	return 0;
//}
//方法二：三步反转法
//1.左边逆序
//2.右边逆序
//3.整体逆序
//#include<string.h>
//#include<assert.h>
////三步反转法
//void reverse(char* left, char* right)
//{
//	assert(left);//养成在使用指针前断言一下的习惯
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	reverse(str, str + k - 1);//左
//	reverse(str+k, str + n - 1);//右
//	reverse(str, str + n - 1);//整体
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//第6题 编程题
//字符串旋转结果
//题目：写一个函数，判断一个字符是否为另一个字符串旋转之后的字符串
//例如：给定s1=AABCD和s2=BCDAA，返回1
//给定s1=abcd和s2=ABCD，返回0

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include<string.h>
int is_string_rotate(char* str1, char* str2)
{
	int i = 0;
	int n = strlen(str1);
	for (i = 0; i < n; i++)
	{
		//每次左旋转一个字符
		char tmp = *str1;//1
		//2.后面的n-1个字符往前移动
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//3.tmp放在最后
		*(str1 + n - 1) = tmp;

		if (strcmp(str1, str2) == 0)//比较字符串的函数
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret = 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}