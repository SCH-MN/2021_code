#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()//����Ҫ���أ�ֻҪ���ü���//�ƺ�Ҳ����Ҫ����//���ڿ�ʼ��ʱ��ִ��һ��
{
	printf("*************������Ծ�************\n");
	printf("**********     1.play    **********\n");
	printf("**********     0.exit    **********\n");
	printf("***********************************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];//board - ����
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board,ROW,COL);//дһ����ʼ�����̵ĺ���

	//��ӡһ������ - �����Ͼ��Ǵ�ӡ��������
	DisplayBoard(board, ROW, COL);
	char ret = 0;//ret���������棬������ѭ����Ҳ��ʹʹ��//���ڽ�����Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//������ӳɹ�����ʾһ������
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

//�Լ��õģ������ο�
//int main()
//{
//	char ch[ROW][COL];
//	int input = 0;
//	menu();
//	scanf("%d", &input);
//
//	while (1)
//	{
//		switch (input)//��������Ҫ�����ֵ
//		{
//		case 1: game(ch[ROW][COL], ROW, COL);
//		case 0: break;//switch��ѡ����䣬break������һ��ѭ��//���滹��Ҫ�׸�while
//		default:printf("����������������룡\n");
//		}
//	}
//
//	return 0;
//}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ��Ҫ����һ�Σ��ʷ�������������//ǿ��ת������

	do//����do whileѭ����һ��������һ��
	{
		menu();//�ȴ�ӡһ�����׵Ĳ˵�
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)//����input����ѡ��
		{
		case 1: 
			printf("��������Ϸ\n");
			game();
			break;//ÿ��ѡ��Ҫbreak����Ϊ��ʼ����ѡ��һ�ξ���
		case 0: 
			printf("�˳���Ϸ\n");
			break;//switch��ѡ����䣬break��������switch���
		default:
			printf("ѡ���������ѡ��\n");//������Ҫ����ѡ��Ͳ���break��
		}

	} while (input);//0Ϊ�٣�����ѭ����1������Ϊ�棬����ѭ��//�˴����������input��ֵ�����˾�����������

	return 0;
}
