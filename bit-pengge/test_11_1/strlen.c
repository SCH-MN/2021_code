#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

size_t my_strlen(const char* str)
{
	//assert(str != NULL);//�ӽ��쿪ʼʹ��ָ���ʱ�򶼶���һ��
	assert(str);//��д��strΪ0ʱ��Ϊ��Ϊ��
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}