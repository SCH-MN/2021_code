#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ�����2

//����ָ�� - ��һ��ָ�� - ָ�������ָ��
//
//����ָ�� - ��ָ�����͵�ָ��
//int* p
//�ַ�ָ�� - ��ָ���ַ���ָ��
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];//ָ�����飿
//	double* (*pd)[5] = &d;//ok - pd����һ������ָ�룬ָ����������Ϊ������ָ�������5��Ԫ�ص�ַ
//
//	//int arr[10] = { 1,2,3,4,5 };
//	//int (*parr)[10]=&arr;//ȡ����������ĵ�ַ
//	//��ʱparr ����һ������ָ�� - ���д�ŵ�������ĵ�ַ
//
//	
//	//arr;//arr - ����������Ԫ�ص�ַ - arr[0]�ĵ�ַ
//
//	return 0;
//}

//&������ vs ������ - һ��Ҫ���ֿ�
//int main()
//{
//	int arr[10] = { 0 };
//
//	//�浽ָ�������Ҳ��һ��
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	//p1 ֻҪ�Ǹ�����ָ�뼴��
//	//p2 ����Ҫ�Ǹ�����ָ��
//
//	printf("%p\n", &arr);
//	printf("%p\n", arr);
//	//ֵһ�����������岻ͬ��ֻ��ָ���λ��һ�������Ͳ�һ��
//
//	printf("%p\n", p1);
//	printf("%p\n", p1 + 1);//����һ������Ԫ�� - 4�ֽ�
//
//	printf("%p\n", p2);
//	printf("%p\n", p2 + 1);//����һ�����飬�������ǡ����10��Ԫ�� - 40�ֽ�
//
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//������2������
//1.sizeof(������) - �����ʾ�������飬����������������С����λ���ֽ�
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ

//����ָ���ʹ�� - һ�㲻����һά������ʹ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int (*pa) [10]=&arr;//pa��һ��ָ�룬ָ����һ�����飬�����������������10��Ԫ��
//	//����ط�������һ�ֺõ�д��
//	//�˴������Ƕ���ָ��
//	//һ�㲻��Ҫ����ôд
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));//���������� *pa����arr��������ĵ�ַ
//	}
//
//	return 0;
//}


void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	//ͨ���к��ж�λԪ��
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);//��ӡһ��
		}
		printf("\n");//һ�н�����Ҫ����
	}
}

//�����p����һ������ָ��
void print2(int (*p)[5],int r,int c)//p�Ǹ�ָ��һά�����ָ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));//���׽����õĲ��
			//*p �ҵ���һ�еĵ�ַ 
			//*��p + i���ҵ�ÿһ����Ԫ�صĵ�ַ
			//*(*(p + i) + j) ���±��ҵ�ÿһ������Ԫ�صĵ�ַ
		}
		printf("\n");
	}
}

int main()
{
	//����һ����ά����

	             //��һ��arr[0]   �ڶ���arr[1]   ������arr[2]
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//Ҳ��������Ϊarr[3]��ÿ��Ԫ������Ϊint[5]

	//��ӡ�����ά����
	//����һ���Զ��庯��
	//print1(arr, 3, 5);

	//������
	print2(arr, 3, 5);//arr������ ��ʾ������Ԫ�ص�ַ
	//��ά�������������ʾ��Ԫ�ص�ַ
	//��ά�������Ԫ���ǣ���һ�У�

	//�൱��һ��һά����ĵ�ַ
	//int a[5];
	
	//����д�����飬Ҳ����д��ָ�룬ע���ʽ�Ĵ���

	return 0;
}