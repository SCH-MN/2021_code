#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�������һ����Ż��㷨
//��Ŀ���������ϴ����ļ� - ���˲����
#include<string.h>
int is_string_rotate(char* str1, char* str2)
{
	//0.С©�������ж�һ�������ַ����ĳ����Ƿ�һ��
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//���Ȳ���ȣ��϶�������ת�õ���
	
	
	//1.str1�ַ����ĺ��׷��һ��str1
	//AABCDAABCD
	int len = strlen(str1);//���ַ����ĳ���
	strncat(str1, str1, len);
	//2.�ж�str2�Ƿ�Ϊstr1���ִ�
	char* ret = strstr(str1,str2);//������ָ�����strstr�����ķ���ֵ

	return ret != NULL;//����NULLʱ��Ϊ�٣�����0. ������NULLʱ��Ϊ�棬����1.
	//if (ret == NULL)//���Խ����뻻�������һ��
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
	//AABCD - ֮ǰ���ж�ʵ�����Ǹ���ٷ�
	//AABCDAABCD - ���������еĿ������

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
}//���ַ����õĶ��ǿ⺯���������Լ��㣬�õĸ��죬�����ڿ���ʱ��Լʱ��

//����֪ʶ��strncat
//int main()
//{
//	char arr[20] = "hello";
//	//hello bit\0
//	//strcat(arr,"bit");
//
//	//strcat(arr, arr);
//	strncat(arr, arr,5);//���ַ�����׷��5���ַ�//n�൱�ڶ���һ������
//
//	printf("%s\n", arr);
//	
//	return 0;
//}