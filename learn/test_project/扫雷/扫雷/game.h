#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�������̵�������
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2

//��������

//��ӡ��Ϸҳ��˵�
void menu();

//�����������鲢�ҳ�ʼ������
void initial_board(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void displayboard(char board[ROWS][COLS], int rows, int cols);

//��������
void setmine(char board[ROWS][COLS], int row, int col);

//��������
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);