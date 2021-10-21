#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	//二维数组遍历
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//保证了初始化函数的通用性
		}
	}
}


//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//9*9中行是从1开始的，列也是从1开始的
	int i = 0;
	int j = 0;
	printf("-----------扫雷游戏------------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//为了方便看，打印行号
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------扫雷游戏------------\n");
}


//布置雷 - 10个
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//成功布置一个count--
	while (count)
	{
		//生成随机的下标 - rand() - 使用之前调用srand - 使用时间戳
		int x = rand() % (row + 1);//取模运算 - 结果 0-9
		int y = rand() % (col + 1);
		if (x != 0 && y != 0)//尽管我不知道老师为什么没讲这里，不过下标不能为0，要排除带0的情况
		{
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
				count--;
			}
		}
	}
}


//排查雷

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

static int get_mine_count(char mine[ROWS][COLS], int x, int y)//只是为了在FindMine函数中使用
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';//每个数组元素都是字符型
}




void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
	    //（1） 是雷 - 很遗憾炸死了 - 游戏结束
	    //（2） 不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，游戏继续
	int x = 0;
	int y = 0;
	int win = 0;
		
	while (win<row*col- EASY_COUNT)//当win不在小于的时候排查就结束了
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);//x--[1,9] y--[1,9]

		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//不是雷的情况下，统计x,y坐标周围有几个雷//写一个函数
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//'0'=0+48
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，清重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}

}