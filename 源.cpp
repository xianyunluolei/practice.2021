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
		printf("���һ��* \n");
		printf("��Ҷ���# \n");
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
		printf("���һӮ\n");
	else if (a == '#')
		printf("��Ҷ�Ӯ\n");
	else
		printf("ƽ��\n");
}

void meun()
{
	printf("********************************\n");
	printf("***1.������begin  0.������end***\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	do
	{
		meun();
		printf("��ѡ��>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}