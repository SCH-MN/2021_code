#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���������ָ�����

//һ��ָ�봫��
//void print(int* ptr,int sz)//����һ��ָ����ղ���
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p)//�Ժ�����������Ƶģ��Ǿ�Ӧ�ô�һ���ַ��ĵ�ַ
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);//p��һ��һ��ָ��,һ��ָ�봫��
//
//	char ch = 'w';
//	char* p1 = &ch;
//
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}//��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������

//����ָ�봫��
//void test(int** p2)//�ö���ָ����н���
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�ܷ�Ѷ���ָ����д����أ�
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = { 0 };//ָ������
//	test(arr);//���ͷ��ϾͿ��Դ���//�����һ��ָ�������
//
//	printf("%d\n", a);
//
//	return 0;
//}//�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô������

//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//    //����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	//
//	//pf����һ������ָ�����
//
//	int (*pf)(int, int) = &Add;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);//�����ֱ�﷽ʽ��һ����
//
//	return 0;
//}

//��ϰ
//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*pt)(char*) = &test;//��ȷ�ĸ�ʽ
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int main()
{
    //����ָ�� - ��ź�����ַ��ָ��
	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
	//
	//pf����һ������ָ�����

	//int (*pf)(int, int) = &Add;
	int (*pf)(int, int) = Add;//������ͬ//Add == pf

	int ret = (*pf)(3, 5);//���øú���//1
	int ret = Add(3, 5);//ԭʼ�ĵ��÷���//2
	int ret = pf(3, 5);//*��ʵ�Ǹ�����//*ֻ��Ϊ���������//3

	//int ret = *pf(3, 5);//�����ͱ���˶Է���ֵ���н�����//��*һ��Ҫ��*pf������

	printf("%d\n", ret);

	//printf("%p\n", &Add);
	//printf("%p\n", Add);//�����ֱ�﷽ʽ��һ����

	return 0;
}