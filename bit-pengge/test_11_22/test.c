#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ��
//struct Book//������Book����һ������ - ���;�����������������
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6��ȫ�ֵ�
//int main()
//{
//	//b1��b2��b3�Ǿֲ�����
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	//b1,b2,b3,b4,b5,b6����ͬ�����͵ı���
//
//	return 0;
//}

//��������� ����ȫ����
//�����ṹ������ - �����ú�ֻ����һ��(ָ����ȫ�ֱ���ʱ)
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//
//}s;//���ø����ʹ�����һ���ṹ�����
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//
//}* ps;
//int main()
//{
//	ps = &s;//err - �Ƿ���
//	//�������ᱨ��
//	//�������ṹ�弴ʹ�ṹһģһ�����ڱ�����������Ҳ��������ͬ������
//	return 0;
//}

//�ṹ���п��԰�����һ���ṹ��ı�������Ա
//struct A
//{
//	int i;
//	char c;
//};
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};

//����ṹ���п��԰����Լ��Ľṹ�����
//struct N
//{
//	int d;//4
//	struct N n;//�޷�����N���ڴ�����ռ�Ŀռ��С��������
//};
//�ṹ��������� - ���ǰ���ͬ���͵Ľṹ��ı��������ǰ���ͬ���͵Ľṹ���ָ��
//struct Node
//{
//	int data;
//	struct Node* next;//�Ǹ�ָ������Ļ��������Ϳ�����
//};
//�ṹ�������޵�����ܶ�
//�μ�����Ҳд�����ˣ��࿴��

//int main()
//{
//
//	return 0;
//}

//��չ��
//���ݽṹ���������ڴ��д洢�Ľṹ

//�������ݽṹ��˳�������
//�����ڵ� ->������ָ����

//���Σ�������

//�ṹ��ı����Ͷ����ʼ��
//struct S
//{
//	char* c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	//struct S s3 = { 'x',20 };//�ṹ������ĳ�ʼ��
//	struct B sb = { 3.14,{'w',100},'q' };
//	//.
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}//�ṹ������Ĵ��� - �ṹ������Ĵ����Ͷ����ǿ���ͬʱ���е�

//�ṹ���ڴ��С�ļ���
//һ���ṹ�嵽��ռ�����ڴ�ռ�
struct S
{
	int i;//4
	char c;//1
};
struct S2
{
	char c1;//1
	int i;//4
	char c2;//1
};
//�ṹ���ڴ���������
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//8 ?

	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//

	return 0;
}