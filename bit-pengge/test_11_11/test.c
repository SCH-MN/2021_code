#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//9.ָ���������������

//
//sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С 
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬��������������������Ԫ�صĵ�ַ
//

//int main()
//{
//	//��������
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4/8 a + 0�ǵ�һ��Ԫ�صĵ�ַ��sizeof(a + 0)������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(*a));//4 *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a+1));//4/8 a + 1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a + 1)������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С
//
//	printf("%d\n", sizeof(&a));//4/8 &a��Ȼ������ĵ�ַ������Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*&a));//16 ����������ĵ�ַ���ҵ��ľ������飬���������Ĵ�С
//	printf("%d\n", sizeof(&a+1));//4/8 &a+1 ���������ռ�ĵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//
//	return 0;
//}

#include<string.h>
int main()
{
	////�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4/8 ��ַ�Ĵ�С
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr+1));//4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4/8

	////����һ���
	//printf("%d\n", strlen(arr));//���ֵ �Ҳ���/0��ͣ������
	//printf("%d\n", strlen(arr+0));//���ֵ ͬ��
	//printf("%d\n", strlen(*arr));//err�� ����Ԫ�ص��ɵ�ַ�������ˣ�������������
	//printf("%d\n", strlen(arr[1]));//err�� ͬ�� strlen��Ϊ�Ǹ���ַ�������Ǵ���ȥ���Ǹ�ASCII��ֵ
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 ���˸�/0
    //printf("%d\n", sizeof(arr+0));//4/8 ��ַ�Ĵ�С
    //printf("%d\n", sizeof(*arr));//1
    //printf("%d\n", sizeof(arr[1]));//1
    //printf("%d\n", sizeof(&arr));//4/8
    //printf("%d\n", sizeof(&arr+1));//4/8
    //printf("%d\n", sizeof(&arr[0]+1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err�� ����Ԫ�ص��ɵ�ַ�������ˣ�������������
	//printf("%d\n", strlen(arr[1]));//err�� ͬ�� strlen��Ϊ�Ǹ���ַ�������Ǵ���ȥ���Ǹ�ASCII��ֵ
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//5

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4/8
	printf("%d\n", sizeof(p+1));//4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p+1));//4/8
	printf("%d\n", sizeof(&p[0]+1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p+1));//���ֵ
	printf("%d\n", strlen(&p[0]+1));//5


	return 0;
}