#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2021-04-20_����Ķ���ͳ�ʼ������ҵ

//��4�� ��ѡ�� 
int main()
{
	int arr[] = {1,2,(3,4),5};//���ű��ʽ
	printf("%d \n", sizeof(arr));//16
	return 0;
}

//��5�� ��ѡ��
int main()
{
	char str[] = "hello bit";
	//[hello bit\0]ÿ��Ԫ��ʱһ���ַ���Ҳ����һ���ֽ�
	printf("%d %d\n", sizeof(str), strlen(str));
	//10 9
	//strlen - ����-���ַ�������
	//sizeof - ������-�������/������ռ���ڴ��С����λ���ֽ�
	return 0;
}