#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��������־���
//1.�������Ǵ���
//2.���������ڴ�
//3.�����뻹�Ǵ��� - ����˵��һ��ȥ��д����

//ָ�����1

//1.�ַ�ָ��
//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//
//	//�������ǰѡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	//����д���ǽ� ���ַ�h �ĵ�ַ���� ָ��ps ��
//
//	char* ps = "hello bit";//����������������Ƿ�����ʽ����һ��
//	char arr[] = "hello bit";
//
//	*ps = 'w';//�����쳣�������ַ������ʳ�ͻ
//	arr[0] = 'w';
//
//
//	//printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//	printf("%s\n", arr);//��ӡ�ַ���������ʼλ�õĵ�ַ�Ϳ��Դ�ӡ����
//
//	return 0;
//}


//һ�������� - ���ԡ���ָoffer���Ժ�һ��Ҫ��һ��
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char *str3 = "hello bit.";//ָ��ָ����ַ����ǳ����ַ���
//	char *str4 = "hello bit.";//�����ַ����ǲ��ܱ��ĵģ��������ڴ���ֻ�����һ��
//
//	*str3 = 'w';//����constʹ���﷨�����Ͻ�����д����ͻ�ľ�ʽʱ�ᱨ������
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//
//	return 0;
//}

//2.ָ������
int main()
{
	//ָ������ - ÿ��Ԫ�ض���ָ��
	//���� - �����д�ŵ���ָ�루��ַ��
	//int* arr[3];//�������ָ�������

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = { &a, &b, &c };//��ʼ����Ҫ������
	//int i = 0;
	//for(i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}//�����÷��ǳ��죬�������Ժ�����ʹ��ָ������

	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
		
	int* arr[3] = { a,b,c };//ָ��������������������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", *(arr[i] + j));
			printf("%d ", arr[i][j]);//����д���ǵȼ۵�
			//ֻ��ģ��Ķ�ά������ʽ��ʵ���ϲ��Ƕ�ά����
		}
		printf("\n");
	}

	return 0;
}

//�Ը���������ʽ�Ž�ȥ�������͵���ʽ��ȡ
//int main()
//{
//	float f = 9.0f;
//	int* p = (int*)&f;
//	printf("%d\n", *p);
//
//	return 0;
//}