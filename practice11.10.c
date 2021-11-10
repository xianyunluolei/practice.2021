//#include<stdio.h>
//
//#define rates ((int)(sizeof(value)/sizeof(value[0])))
//#define initial 100.0
//
//int main(void)
//{
//	int i, year, low_rate, num_year,j;
//	double value[] = {0};
//	printf("请输入最小利率：>");
//	scanf_s("%d", &low_rate);
//	printf("请输入存储年数：>");
//	scanf_s("%d", &num_year);
//	printf("\nYears");
//	for (i = 0; i < rates; i++)
//	{
//		printf("%6d%%", low_rate + i);
//		value[i] = initial;
//	}
//	printf("\n");
//	for (year = 1; year <= num_year; year++)
//	{
//		printf("%3d    ", year);
//		for (j = 0; j < rates; j++)
//		{
//			value[j] += (low_rate + j) / 100.0 * value[j];
//			printf("%7.2f", value[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#define n 5
//int main()
//{
//	int list[n][n];
//	//int row, col;
//	int i, j;
//	for (i = 0; i < n; i++);
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf_s("%d", &list[i][j]);
//			printf("%d\n", list[i][j]);
//		}
//	}
//	return 0;
//}

////发牌程序  二维数组的简单运用 以及随机数的设定
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#include<time.h>
//#define ROW 4
//#define COL 13
//
//int main()
//{
//	bool in_hand[ROW][COL] = { false };
//	int num_cards, rank, suit;
//	const char rank_code[] = { '2','3','4','5','6','7','8','9','t','j','q','k','a' };
//	const char suit_code[] = { 'c','d','h','s' };
//	srand((unsigned)time(NULL));
//	printf("请输入手牌数量：>");
//	scanf_s("%d", &num_cards);
//	printf("\n你的手牌是：>");
//	while (num_cards > 0)
//	{
//		suit = rand() % ROW;
//		rank = rand() % COL;
//		if (!in_hand[suit][rank])
//		{
//			in_hand[suit][rank] = true;
//			num_cards--;
//			printf(" %c%c", rank_code[rank], suit_code[suit]);
//		}
//	}
//	printf("\n");
//	return 0;
//}
#include<stdio.h>

int main(void)
{
	int n;
	printf("请输入数组长度：>");
	scanf_s("%d", &n);
	int arr[n];
	arr[0] = 1;
	printf("\n%d\n", arr[0]);
	return 0;
}