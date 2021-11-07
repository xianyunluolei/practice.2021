#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_count 10  //简单模式
#define hard_count 80  //困难模式
#define hell_count 120  //地狱模式
#define miracle_count 168 //欧皇模拟器

void display_board(char board[ROWS][COLS], int row, int col);
void init_board(char board[ROWS][COLS], int rows, int cols,char set);
void set_mine(char board[ROWS][COLS], int row, int col);
void find_mine(char board[ROWS][COLS], int rows,int cols);