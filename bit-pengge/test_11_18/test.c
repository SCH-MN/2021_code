#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//上一节课总结：凡是使用库函数都要引用头文件
//strerror - 错误码转换成错误信息，打印要单独设置
//#include<errno.h>
//#include<string.h>
//int main()
//{
//
//	FILE* pf = fopen("test,txt", "r");//以只读的形式打开该文件
//	//打开文件成功时，会返回一个指针
//	//打开文件失败时，会返回NULL
//	//0 "no error"
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//与strerror类似的一个函数
//perror - 非常简单，直接用来打印错误信息
//#include<string.h>
//int main()
//{
//
//	FILE* pf = fopen("test,txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//会先打印"fopen: "再打印后面的东西
//		//1.首先把错误码转化为错误信息
//		//2.打印错误信息（包含了自定义的信息）
//		return 1;
//	}
//	//读文件
//	//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符分类函数

//#include<ctype.h>
//int main()
//{
//	char ch = '2';
//
//	//int ret = isdigit(ch);
//	//isdigit - 如果是数字字符，返回非0的值，如果不是数字字符，返回0
//
//	int ret = islower(ch);
//	//islower - 判断字母大小写
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//字符转换
//tolower
//toupper
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c ", arr[i]);
		i++;
	}

	return 0;
}