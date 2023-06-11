#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//定义棋盘的行列数
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2

//函数声明

//打印游戏页面菜单
void menu();

//创建棋盘数组并且初始化棋盘
void initial_board(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void displayboard(char board[ROWS][COLS], int rows, int cols);

//建立雷区
void setmine(char board[ROWS][COLS], int row, int col);

//查找雷区
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);