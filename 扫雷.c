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
	printf("          ɨ��1.0           \n");
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
		printf("��Ϸ�淨����\n");
		printf("��Ϸ�淨����\n");
		printf("�����Ӧ���꣬�ҵ���صĵ��ס�");
		printf("��ѡ���Ƿ������Ϸ��>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("�Ƿ����룬���������룺>\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}