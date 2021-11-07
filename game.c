#include"game.h"
#include<stdio.h>
void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void display_board(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i < col+1; i++)
	{
		printf("%-2d", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%-2d", i+1);
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void set_mine(char mine[ROW][COL], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	
		int i, j;
		int mine_count = 0;
		for (i = x - 1; i > x - 2 && i < x + 2; i++)
		{
			for (j = y - 1; j > y - 2 && j < y + 2; j++)
			{
				if (mine[i][j] == '1')
				{
					mine_count++;
				}
			}
		}
		return mine_count;
}
void find_mine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row, int col)
{
	int x,y;
	int win = 0;
	while (win < row * col - easy_count)
	{
		printf("请输入行坐标：");
		scanf_s("%d", &x);
		printf("请输入列坐标：");
		scanf_s("%d", &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了，游戏结束。");
				display_board(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = '0'+count;
				display_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入。\n");
		}
		//if (x >0 && x <= row && y >0&& y <= col && mine[x][y] == '1')
		//{
		//	printf("很遗憾，你被炸死了，游戏结束。");
		//	//display_board(mine, row, col);
		//	break;
		//}
		//else if (x>0 && y >0 && x <= row && y <= col && mine[x][y] != '1')
		//{
		//	int count = get_mine_count(mine, x, y);
		//	show[x][y] = '0' + count;
		//	display_board(show, ROW, COL);
		//	win++;
		//}
		//else
		//{
		//	printf("输入坐标非法，请重新输入。\n");
		//}
	}
}