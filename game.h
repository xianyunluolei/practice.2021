#pragma once
#define ROW  3 //ROW ��������
#define COL  3 //COL ��������
void display_board(char board[ROW][COL], int row, int col);
void init_board(char board[ROW][COL], int row, int col);
void player_1_move(char board[ROW][COL], int row, int col);
void player_2_move(char board[ROW][COL], int row, int col);
char whowin(char board[ROW][COL], int row, int col);
//�˶δ���ǰ����һ��ͷ�ļ� ��Ŵ˴��� �ļ���Ϊgame.h
//****************���Ƿָ���*****************