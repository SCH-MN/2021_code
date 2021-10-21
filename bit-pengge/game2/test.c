#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()//不需要返回，只要调用即可//似乎也不需要输入//仅在开始的时候执行一次
{
	printf("*************有趣的扫雷************\n");
	printf("**********     1.play    **********\n");
	printf("**********     0.exit    **********\n");
	printf("***********************************\n");
}

void game()//mine - 地雷
{
	char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
	char show[ROWS][COLS] = {0};//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');//全部初始化为'0'//为了保证初始化的通用性，多传一个参数
	InitBoard(show, ROWS, COLS,'*');//全部初始化为'#'

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//游戏正常运行的时候不会打印mind
	DisplayBoard(show, ROW, COL);//打印的时候只打印9*9

	//布置雷
	SetMine(mine, ROW, COL);//传入实际操作的行和列
	//DisplayBoard(mine, ROW, COL);


	//排查雷
	FindMine(mine,show,ROW,COL);//从mine中排查，信息放到show中去//实际只用了9*9
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//为了生成随机数，需要调用一下//为了不让编译器警报，我们需要强制类型转换一下

	do//玩一次不过瘾，因此要写一个do while循环
	{
		menu();//先打印一个简易的菜单
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)//根据input做出选择
		{
		case 1:
			printf("扫雷开始\n");
			game();//扫雷游戏
			break;//每次选择都要break，因为开始界面选择一次就行
		case 0:
			printf("退出游戏\n");
			break;//switch是选择语句，break跳出的是switch语句
		default:
			printf("选择错误，重新选择！\n");//这里需要重新选择就不加break了
		}
	} while (input);//0为假，跳出循环；1和其他为真，继续循环
	return 0;
}

//可以优化的
//1.如果不是雷，周围没有雷 - 展开一片 - 递归，否则功能太复杂了
//2.标记雷
//
//可以尝试一下