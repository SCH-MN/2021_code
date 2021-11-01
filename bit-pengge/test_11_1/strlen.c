#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

size_t my_strlen(const char* str)
{
	//assert(str != NULL);//从今天开始使用指针的时候都断言一下
	assert(str);//简写：str为0时即为空为假
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}