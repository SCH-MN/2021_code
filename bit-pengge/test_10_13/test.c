#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ݹ� - �����Լ������Լ�

//int main()
//{
//	printf("hehe\n");
//	main();//��ѭ����//��һ��ʱ��͹���
//
//	return 0;
//}

//��ϰ1����ͼ����
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234.���1234

//��ŵ�����⣿����
//void print(unsigned int n)//����Ҫ����ֵ
//{
//	if (n > 9)
//	{
//		print(n / 10);//�ݹ� - �����Լ������Լ�
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//%u - �޷�������
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);//���ϱƽ���������
	}
}

int main()
{
	test(1);
	return 0;
}//ջ���