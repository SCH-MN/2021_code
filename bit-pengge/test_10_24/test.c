#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����ͨ���±�������//��0��ʼ
//
//	printf("%d\n", arr[4]);//��ӡ��5��Ԫ��//[]�����±����ò�����
//	//[]�Ĳ�������2����arr��4
//	// 
//	//3+5;����������
//	return 0;
//}

//�������ò�����
//int Add(int x, int y)//�����Ķ���
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	//��������
//	int ret = Add(a, b);//�˴��ģ�������ɾ��//����- �������ò�����
//
//	test();//��ʱ����Ҫ�������������Ҳ����ʡ
//	//�������������ڵĲ���+������
//
//	return 0;
//}

//�ṹ��Ա���ʵĲ�����
//.
//->

//�ṹ��
//int float char short
//double long
//
//�飺��������ţ������磬���ߣ�����
//�ˣ����֣����䣬�Ա�
//

struct Book//�Զ������� - �Լ����������
{
	//����Book����Ҫ����ϸ��Ϣ
	//�ṹ���Ա��������
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	//�ṹ�������.��Ա��
	struct Book b = {"C����","C20210509",55};
	struct Book* pb = &b;


	printf("������%s\n", pb->name);//-> ָ��
	printf("��ţ�%s\n", pb->id);
	printf("�۸�%d\n", pb->price);

	//printf("������%s\n", (*pb).name);//�˴���ʹ���� .������
	//printf("��ţ�%s\n", (*pb).id);//������
	//printf("�۸�%d\n", (*pb).price);

	//printf("������%s\n", b.name);//�˴���ʹ���� .������
	//printf("��ţ�%s\n", b.id);
	//printf("�۸�%d\n", b.price);

	return 0;
}