#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board(mine, ROWS, COLS,'0');
	init_board(show, ROWS, COLS,'*');
	display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	set_mine(mine, ROW, COL);
	display_board(mine, ROW, COL);
	find_mine(mine,show, ROW, COL);
}

void menu()
{
	printf("          扫雷1.0           \n");
	printf("****************************\n");
	printf("****1.play********0.exit****\n");
	printf("****************************\n");
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("游戏玩法规则：\n");
		printf("游戏玩法规则：\n");
		printf("输入对应坐标，找到埋藏的地雷。");
		printf("请选择是否继续游戏：>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("非法输入，请重新输入：>\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}