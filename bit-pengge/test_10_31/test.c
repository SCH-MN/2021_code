#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ʵ�õ��Լ���
//ʲô��bug
//��bug�Ĺ��� - ����
//�ܾ�����ʽ����
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();//�����۲�test�ڲ���ϸ�ھ�Ҫ��F11 - �����
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//F5 - ��������
//F9 - ���öϵ�
//F10 - �����
//F11 - ����� - ����ϸ��
// \\\\\\\\
//Ctrl+F5

//����ʱ��β鿴��ǰ��Ϣ

//���ö�ջ
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//�����ϵ�
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;//�ϵ���������������������ʱ������ֹͣ
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//һЩ���Ե�ʵ��
//ʵ��һ
//ʵ�ִ��룺��׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//5
//	//1*2*..*n
//
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;//���յ��Գ��Ľ��
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//
//	return 0;
//}

//ʵ����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//Խ��
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������еĽ����ʲô��
//	//��ѭ�� -  
//	return 0;
//}

//��C�����ȱ�ݡ����Կ���
//������C���ԡ�
//��C��ָ�롷
//������C�μ���haha
//��C������Ƚ��ʡ� - ��Щ���󣬼ǵ���֤һ��

//C primer plus̫���ˣ����׷���

//̷��ǿ��C���� - ͨ���׶���
//���� - ����д�ĺܲ���
//ֻ���﷨����ģ�´���


//Ԥ����������
//ͨ������ļ��ɣ����ٴ���
//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include<string.h>

//д�Ĳ��ã���������
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//�汾2
void my_strcpy(char* dest, char* src)
{
	while (*src!='\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;//����'\0'
}

//�汾3
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//��copy��\0,��ʹ��ѭ��ֹͣ
	{
		;//'\0'��ASCIIֵΪ0��
	}
}//��Դ���Ѿ��ǳ��ӽ���

int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);

	//strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}