#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ڴ溯��
//1.memcpy
//2.memmove
//3.memmcmp
//4.memset

//ʵ��
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//strcpy() - ����������������
//	//char* strcpy(char* dest,const char* src)
//	
//	//һ�����ͱ������ڴ�4���ֽڣ�strcpy����\0�ͻ�ͣ�� 
//	//01 00 00 00 - ��������µ�һ��������ͣ����
//	return 0;
//}

//���ʱ�����Ǿ���������ڴ��ĺ���
//�ڴ��������
//memcpy - �ڴ濽��
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	memcpy(arr2, arr1, 20);//���ղ������������ͣ�Ӧ�ñȽϹ㷺
//
//	return 0;
//}

//ģ��ʵ��memcpy
#include<assert.h>
void* my_memcpy(void* dest,const void* src,int num)//������ô�����޷���������������size_t
{
	//���յĲ�������ָ�룬�����Ҫ�����ã���Ҫ�ڽ�����ǰ����һ��
	assert(dest && src);
	char* ret = dest;

	while(num--)//4 3 2 1//ѭ��4��
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;//����д�������ȵ�//��Щ����д���ڲ�ͬ�������ϻ��������
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, 20);
	
	//printf("%p\n", arr2);//�˴����ִ����޷���ӡ�� - ��Ҫ�����ַ�����ӡ����
	int i = 0;
	for (i = 0; i < 10; i++)//��ӡ����Ҫ��forѭ���ķ�ʽ���б������������ӡ����
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
//��ʱ�俴������������ȼ�