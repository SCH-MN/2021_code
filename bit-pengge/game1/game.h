#pragma once

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>//rand��srand
#include<time.h>//time


//���ŵĶ���
#define ROW 3
#define COL 3


//����������

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);//Ҫ�������������к���//��ά�����е��п���ʡ�ԣ�д�ϵĻ������Ķ�
                                  //��Сд���к��������ܣ�д��һ���Ļ���ִ���

//��ӡ����
void DisplayBoard(char board[ROW][COL],int row,int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ϸ�Ƿ�����Ӯ
//1.���Ӯ�� - *
//2.����Ӯ�� - #
//3.ƽ�� - Q
//4.��Ϸ���� - C
char IsWin(char board[ROW][COL], int row, int col);