#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ö�� - һһ�оٵ���˼
//���Ա�һһ�оٵ�������޵�

//����ö������
//����ö�������ǳ������������������������ʱ���ǿ��Ըı�ֵ��
//enum Color
//{
//	RED,//0
//    GREEN,//1
//    BLUE//2 - ͨ�������ķ�ʽ�����ߣ�Ĭ������1
//};
//��ṹ��ĸ������ϴ�
//int main()
//{
//	//cpp �﷨�������ϸ�
//	enum Color c = 2;
//	
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//ΪʲôҪʹ��ö�����ͣ�- ̸̸�ŵ�

//ʵ��һ��������
void menu()
{
	printf("***************************************\n");
	printf("*************1.add    2.sub************\n");
	printf("*************3.mul    4.div************\n");
	printf("*************0.exit   *****************\n");
	printf("***************************************\n");
}
//ö�پ���һ������
//���;�������
enum Option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case SUB:
			break;
		case MUL:
			break;
		case DIV:
			break;
		case EXIT:
			break;
		}//�÷����滻�����֣����Ӵ���Ŀɶ��Կ�ά���ԣ��밡

	} while (input);
	return 0;
}