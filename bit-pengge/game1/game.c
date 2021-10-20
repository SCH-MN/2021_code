#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < ROW; i++)//���������ά����
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';//�����е�����ռ��ж����Ͽո�

		}
	}
}


//��ӡ����
//������� - ʹ�������ͨ����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)//���һ�в���ӡ
//		      printf("---|---|---\n");
//	}
//}
//�����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			      printf("|");
		}
		printf("\n");//һ�д�ӡ����������
		if (i < row - 1)//���һ�в���ӡ�����Ǹ�����
		{
			//printf("---|---|---\n");
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//���������һ�в�Ҫ��ӡ//if�ж�����Ҫ�� �ֺ�;
				      printf("|");
			}
			printf("\n");// ��ӡ����һ�к󣬻���
		}			
	}
}


//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;	
	printf("�����:>\n");

	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				//board[x - 1][y - 1] == '*';//����Ҫ�Ÿ�ֵ��䣬�ҷŵ��� == ���ڣ����ж�����ˣ����Ը������ֵ����仯
				board[x - 1][y - 1] = '*';
				break;
			}
			else//��һ�������ˣ�������һ�������ӵ����꣬��Ҫ��ʾһ��
			{
				printf("���걻ռ��,����������\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");//�ɴ˴������ж����Ǹ�ѭ����������ʹ��while����
		}
	}
}


//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");


	while (1)
	{
		//����������꣬ʹ��rand()����//randʹ��ǰ��Ҫ����srand//�����������ҲҪ����ѭ��������������ѭ��
		int x = rand() % row;//ģ3���������� 0-2//�����ⲻ��
		int y = rand() % col;//�������ķ�ΧֵҲ��Ҫ����

		//�����жϵ�������������ĺϷ���//��Ϊ����ʱ�͹涨���˷�Χ
		if (board[x][y] == ' ')//0-2������Ҫ-1
		{
			board[x][y] = '#';
			break;
		}
	}
}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//����û��
			}
		}
	}

	return 1;
}



//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;//i������Ϊ��������ʹ��
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//���ش�����һ���Ե����ӷ���//�ǳ�����
		}
	}
	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	//����������˷���1����������0
	int ret = IsFull(board,row,col);//дһ���ж������Ƿ����ĺ���
	if (ret == 1)
	{
		return 'Q';
	}
	//���˭��ûӮ��Ҳû��ƽ�֣��Ǿͼ���
	return 'C';

}