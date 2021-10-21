#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	//��ά�������
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//��֤�˳�ʼ��������ͨ����
		}
	}
}


//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//9*9�����Ǵ�1��ʼ�ģ���Ҳ�Ǵ�1��ʼ��
	int i = 0;
	int j = 0;
	printf("-----------ɨ����Ϸ------------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//Ϊ�˷��㿴����ӡ�к�
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------ɨ����Ϸ------------\n");
}


//������ - 10��
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//�ɹ�����һ��count--
	while (count)
	{
		//����������±� - rand() - ʹ��֮ǰ����srand - ʹ��ʱ���
		int x = rand() % (row + 1);//ȡģ���� - ��� 0-9
		int y = rand() % (col + 1);
		if (x != 0 && y != 0)//�����Ҳ�֪����ʦΪʲôû����������±겻��Ϊ0��Ҫ�ų���0�����
		{
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
				count--;
			}
		}
	}
}


//�Ų���

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

static int get_mine_count(char mine[ROWS][COLS], int x, int y)//ֻ��Ϊ����FindMine������ʹ��
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';//ÿ������Ԫ�ض����ַ���
}




void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����Ų������
	//2.������괦�ǲ�����
	    //��1�� ���� - ���ź�ը���� - ��Ϸ����
	    //��2�� ������ - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���飬��Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
		
	while (win<row*col- EASY_COUNT)//��win����С�ڵ�ʱ���Ų�ͽ�����
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);//x--[1,9] y--[1,9]

		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//�����׵�����£�ͳ��x,y������Χ�м�����//дһ������
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//'0'=0+48
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}

}