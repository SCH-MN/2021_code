#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//memcmp - �ڴ�Ƚ�
//#include<string.h>
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);
//	//memcmp - strcmp
//	//����ֵ��strcmp��ͬ
//	printf("%d", ret);
//
//	return 0;
//}

//memset - �ڴ����ú��� - ���ֽ�Ϊ��λ�����ڴ�
#include<string.h>
int main()
{
	//40
	int arr[10] = { 0 };//20
	memset(arr, 1, 20);//
	//01 00 00 00
	//01 01 01 01

	return 0;
}

//MFC������C++д������Ҫ��������C++