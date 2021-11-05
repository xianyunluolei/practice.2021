#pragma once
#define ROW  3 //ROW 决定行数
#define COL  3 //COL 决定列数
void display_board(char board[ROW][COL], int row, int col);
void init_board(char board[ROW][COL], int row, int col);
void player_1_move(char board[ROW][COL], int row, int col);
void player_2_move(char board[ROW][COL], int row, int col);
char whowin(char board[ROW][COL], int row, int col);
//此段代码前创建一个头文件 存放此代码 文件名为game.h
//****************我是分隔符*****************