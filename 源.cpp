#include<stdio.h>
#include"game.h"


void game()
{
	char a;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1)
	{
		printf("玩家一：* \n");
		printf("玩家二：# \n");
		player_1_move(board, ROW, COL);
		display_board(board, ROW, COL);
		a = whowin(board, ROW, COL);
		if (a != 'x')
			break;
		player_2_move(board, ROW, COL);
		display_board(board, ROW, COL);
		a = whowin(board, ROW, COL);
		if (a != 'x')
			break;
	}
	if (a == '*')
		printf("玩家一赢\n");
	else if (a == '#')
		printf("玩家二赢\n");
	else
		printf("平局\n");
}

void meun()
{
	printf("********************************\n");
	printf("***1.三子棋begin  0.三子棋end***\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	do
	{
		meun();
		printf("请选择>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}