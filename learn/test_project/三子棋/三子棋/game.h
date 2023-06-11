#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//定义棋盘的行列数
#define ROW 3
#define COL 3

//函数声明

//打印游戏页面菜单
void menu();

//创建棋盘数组并且初始化棋盘
void initial_board(char board[ROW][COL], int row, int col);

//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断输赢
//1.玩家赢 '*'
//2.电脑赢 '#'
//3.平局 'Q'
//4.游戏尚未结束 'C'
char iswin(char board[ROW][COL], int row, int col);