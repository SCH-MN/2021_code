#pragma once

//头文件的包含
#include<stdio.h>
#include<stdlib.h>//rand和srand
#include<time.h>//time


//符号的定义
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);//要交代清楚数组的行和列//二维数组中的行可以省略，写上的话便于阅读
                                  //用小写的行和列来接受，写成一样的会出现错误

//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏是否有输赢
//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局 - Q
//4.游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);