#include<stdio.h>
#include"game.h"
int i, j;
void init_board(char board[ROW][COL], int row, int col)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display_board(char board[ROW][COL], int row, int col)
{

	printf("      ");
	for (i = 1; i < col+1; i++)
	{
		printf("%d�� ",i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("��%-2d��", i+1);
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|") ;
		}
		printf("\n");
		printf("      ");
		for (j = 0; j < col; j++)
		{
			
			printf("---");
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
	}
}

void player_1_move(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("���һ��\n");
	while (1)
	{
		printf("�����һ���������ꣻ>");
		scanf_s("%d", &x);
		printf("�����һ���������ꣻ>");
		scanf_s("%d", &y); 
		if (x > 0 && x <= row && y >= 1 && y <= col&& board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else if (x > 0 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] != ' ')
			printf("�������ѱ�ռ�ã����������롣\n");
		else
		{
			printf("����������ݣ����������롣\n");
		}
	}
}
void player_2_move(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("��Ҷ���\n");
	while (1)
	{
		printf("����Ҷ����������ꣻ>");
		scanf_s("%d", &x);
		printf("����Ҷ����������ꣻ>");
		scanf_s("%d", &y);
		if (x > 0 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
		else if (x > 0 && x <= row && y >= 1 && y <= col && board[x - 1][y - 1] != ' ')
			printf("�������ѱ�ռ�ã����������롣\n");
		else
		{
			printf("����������ݣ����������롣\n");
		}
	}
}
//����ʵ������ ������������� ������ whowin  ����
char whowin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
		else if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		else
			return 'x';
		for (j = 0; j < col; j++)
		{

			if (board[i][j] == ' ')
				return 'x';
			else if (board[i][j] != ' ')
				return 'y';
			else
				return 'x';
		}
	}


}
//����ʵ������ ������������� ������ whowin  ����
//*****************���Ƿָ���*********************************