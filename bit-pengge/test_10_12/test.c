#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ��������ÿ����һ������������ͻὫnum��ֵ��1

//void Add(int* p)//��ַ��������ʱ����Ҫ����ָ�����
//{
//	(*p)++;
//}
//
//
//int main()
//{
//
//	int num = 0;
//	Add(&num);//�����ڲ��ı�����ı��� - ����ַ��ȥ//������ʵ����Ҳ�ǵ�ַ
//	printf("%d\n", num);//1
//	
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//	
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����
//�ܾ�����Ƕ�׶���//���Ǻ�������Ƕ�׵���

//Ƕ�׵���

//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//��ʽ����


//#include<string.h>
//
//int main()
//{
//	//int len = strlen("abc");//���ַ������ȵĺ���
//	//printf("d\n", len);
//
//	////��ʽ����//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	//printf("d\n", strlen("abc"));
//
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	////strcpy(arr1, arr2);
//
//	////��ʽ����
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	//����
//	//printf("%d", printf("%d", printf("%d", 43)));//��ӡ����ʲô
//	//printf �᷵�ش�ӡ����Ļ�ϵ��ַ�����
//		
//	return 0;
//}

//�����������Ͷ���

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ�� - ʹ��֮ǰ����֪һ��//���Ǿ���治�������޹ؽ�Ҫ��
//	int Add(int, int);//ֻ��Ҫ ������ �������� �������� �������� ��������
//    //һ��Ҫ������������ʹ�õ�ԭ��//��ǰ��Ͳ�������
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

//дһ��������
//���������ʵ��Ӧ�ó���
#include "add.h"
#include "sub.h"
//��������һ�����ͷ�ļ���
//����ͷ�ļ����൱�ڰ�ͷ�ļ��Ĵ��붼�滻����
int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);

	printf("%d\n", c);


	return 0;
}

//���ɾ�̬��//������Դ��//������
//���뾲̬��
//��̬���.h���ʹ��
#pragma comment(lib,"sub.lib")