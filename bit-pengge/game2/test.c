#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()//����Ҫ���أ�ֻҪ���ü���//�ƺ�Ҳ����Ҫ����//���ڿ�ʼ��ʱ��ִ��һ��
{
	printf("*************��Ȥ��ɨ��************\n");
	printf("**********     1.play    **********\n");
	printf("**********     0.exit    **********\n");
	printf("***********************************\n");
}

void game()//mine - ����
{
	char mine[ROWS][COLS] = {0};//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {0};//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');//ȫ����ʼ��Ϊ'0'//Ϊ�˱�֤��ʼ����ͨ���ԣ��ഫһ������
	InitBoard(show, ROWS, COLS,'*');//ȫ����ʼ��Ϊ'#'

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//��Ϸ�������е�ʱ�򲻻��ӡmind
	DisplayBoard(show, ROW, COL);//��ӡ��ʱ��ֻ��ӡ9*9

	//������
	SetMine(mine, ROW, COL);//����ʵ�ʲ������к���
	//DisplayBoard(mine, ROW, COL);


	//�Ų���
	FindMine(mine,show,ROW,COL);//��mine���Ų飬��Ϣ�ŵ�show��ȥ//ʵ��ֻ����9*9
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//Ϊ���������������Ҫ����һ��//Ϊ�˲��ñ�����������������Ҫǿ������ת��һ��

	do//��һ�β���񫣬���Ҫдһ��do whileѭ��
	{
		menu();//�ȴ�ӡһ�����׵Ĳ˵�
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)//����input����ѡ��
		{
		case 1:
			printf("ɨ�׿�ʼ\n");
			game();//ɨ����Ϸ
			break;//ÿ��ѡ��Ҫbreak����Ϊ��ʼ����ѡ��һ�ξ���
		case 0:
			printf("�˳���Ϸ\n");
			break;//switch��ѡ����䣬break��������switch���
		default:
			printf("ѡ���������ѡ��\n");//������Ҫ����ѡ��Ͳ���break��
		}
	} while (input);//0Ϊ�٣�����ѭ����1������Ϊ�棬����ѭ��
	return 0;
}

//�����Ż���
//1.��������ף���Χû���� - չ��һƬ - �ݹ飬������̫������
//2.�����
//
//���Գ���һ��