#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Max - 一般不建议把函数的名字写成全大写
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int m = Max(a, b);

	printf("%d", m);
	return 0;
}