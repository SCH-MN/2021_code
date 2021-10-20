#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()//不需要返回，只要调用即可//似乎也不需要输入//仅在开始的时候执行一次
{
	printf("*************三子棋对决************\n");
	printf("**********     1.play    **********\n");
	printf("**********     0.exit    **********\n");
	printf("***********************************\n");
}

void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];//board - 棋盘
	//初始化棋盘 - 初始化空格
	InitBoard(board,ROW,COL);//写一个初始化棋盘的函数

	//打印一下棋盘 - 本质上就是打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;//ret创建在外面，这样在循环外也可使使用//用于接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//玩家落子成功后，显示一下棋盘
		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

//自己敲的，仅做参考
//int main()
//{
//	char ch[ROW][COL];
//	int input = 0;
//	menu();
//	scanf("%d", &input);
//
//	while (1)
//	{
//		switch (input)//括号里需要输入个值
//		{
//		case 1: game(ch[ROW][COL], ROW, COL);
//		case 0: break;//switch是选择语句，break是跳出一层循环//外面还需要套个while
//		default:printf("输入错误，请重新输入！\n");
//		}
//	}
//
//	return 0;
//}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只需要调用一次，故放在主函数里了//强制转换类型

	do//采用do while循环，一定会先玩一次
	{
		menu();//先打印一个简易的菜单
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)//根据input做出选择
		{
		case 1: 
			printf("三子棋游戏\n");
			game();
			break;//每次选择都要break，因为开始界面选择一次就行
		case 0: 
			printf("退出游戏\n");
			break;//switch是选择语句，break跳出的是switch语句
		default:
			printf("选择错误，重新选择！\n");//这里需要重新选择就不加break了
		}

	} while (input);//0为假，跳出循环；1和其他为真，继续循环//此处多次利用了input的值，起到了精简代码的作用

	return 0;
}
