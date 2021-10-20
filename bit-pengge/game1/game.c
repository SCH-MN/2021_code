#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < ROW; i++)//遍历这个二维数组
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';//将所有的数组空间中都填上空格

		}
	}
}


//打印棋盘
//改造代码 - 使其更具有通用性
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)//最后一行不打印
//		      printf("---|---|---\n");
//	}
//}
//改造后
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
		printf("\n");//一行打印结束，换行
		if (i < row - 1)//最后一行不打印，这是个条件
		{
			//printf("---|---|---\n");
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//竖杠在最后一列不要打印//if判断语句后不要加 分号;
				      printf("|");
			}
			printf("\n");// 打印完这一行后，换行
		}			
	}
}


//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;	
	printf("玩家走:>\n");

	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				//board[x - 1][y - 1] == '*';//这里要放赋值语句，我放的是 == 等于，成判断语句了，所以该坐标的值不会变化
				board[x - 1][y - 1] = '*';
				break;
			}
			else//万一看走眼了，输入了一个有棋子的坐标，则要提示一下
			{
				printf("坐标被占用,请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法,清重新输入\n");//由此处可以判断这是个循环，故我们使用while函数
		}
	}
}


//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");


	while (1)
	{
		//随机生成坐标，使用rand()函数//rand使用前需要调用srand//随机生成坐标也要放在循环里，放在外面会死循环
		int x = rand() % row;//模3的余数就是 0-2//巧了这不是
		int y = rand() % col;//随机坐标的范围值也需要限制

		//不用判断电脑所给的坐标的合法性//因为生成时就规定好了范围
		if (board[x][y] == ' ')//0-2，不需要-1
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
				return 0;//棋盘没满
			}
		}
	}

	return 1;
}



//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;//i这里作为计数器来使用
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//返回代表玩家或电脑的棋子符号//非常巧妙
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	//如果棋盘满了返回1，不满返回0
	int ret = IsFull(board,row,col);//写一个判断棋盘是否满的函数
	if (ret == 1)
	{
		return 'Q';
	}
	//如果谁都没赢，也没有平局，那就继续
	return 'C';

}