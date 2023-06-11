#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�������̵�������
#define ROW 3
#define COL 3

//��������

//��ӡ��Ϸҳ��˵�
void menu();

//�����������鲢�ҳ�ʼ������
void initial_board(char board[ROW][COL], int row, int col);

//��ӡ����
void displayboard(char board[ROW][COL], int row, int col);

//�������
void playermove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//1.���Ӯ '*'
//2.����Ӯ '#'
//3.ƽ�� 'Q'
//4.��Ϸ��δ���� 'C'
char iswin(char board[ROW][COL], int row, int col);