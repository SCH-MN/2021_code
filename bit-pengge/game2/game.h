#pragma once


//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//符号的定义
#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);//传过来的数组没变，但是只打印9*9

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);