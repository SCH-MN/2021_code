#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//while 循环
//int main()
//{
//	while (1)
//		printf("hehe\n");//循环语句可能是一个代码块
//	//死循环
//
//	return 0;
//}

//break 和 continue的用法

//int main()
//{
//	int i = 1;
	//在while循环中，break用于永久的终止循环
	
	//在while循环中，continue的作用是跳过本次循环continue后面的代码
	//直接去判断部分，看是否进行下一次循环
	//while (i <= 10)
	//{
	//	if (5 == i)
	//		continue;//1 2 3 4打印后面死循环了

	//	printf("%d ", i);
	//	i++;
	//}
	
	//while (i <= 10)
	//{
	//	if (5 == i)
	//		break;//当i==5时，就跳出这个循环了
	//	
	//	printf("%d ", i);
	//	i++;
	//}
//	return 0;
//}

//getchar
//stdin 标准输入
//EOF - end of file - 文件结束的标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}

int main()
{
	int ch = 0;
	//ctrl + z - getchar 就读取结束

	while ((ch = getchar()) != EOF)//如果括号内函数式成立，说明getchar()读取的正常的字符
	{
		putchar(ch);
	}
	return 0;
}