#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_count 10  //��ģʽ
#define hard_count 80  //����ģʽ
#define hell_count 120  //����ģʽ
#define miracle_count 168 //ŷ��ģ����

void display_board(char board[ROWS][COLS], int row, int col);
void init_board(char board[ROWS][COLS], int rows, int cols,char set);
void set_mine(char board[ROWS][COLS], int row, int col);
void find_mine(char board[ROWS][COLS], int rows,int cols);