//#include<stdio.h>
//int cycle(int a)
//{
//	static int i;
//	i =i + a;
//	return i;
//}
//int main()
//{
//	int x = 10;
//	int y=cycle(x);
//	printf("%d", cycle(y));
//	return 0;
//}
//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define RANDOM_MAX 100
//int random_num(int x)
//{
//	srand((unsigned)time(NULL));
//	x = rand() % RANDOM_MAX + 1;
//	return x;
//}
//int compare(int x,int y)
//{
//	if (y == x)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//void num_guess(int x)
//{
//	int y=0;
//	do
//	{
//		printf("%d", x);
//		printf("请猜测一个0-100的数字并输入：>");
//		scanf_s("%d", &y);
//	} while (compare(x,y));
//	printf("\n恭喜您，猜对了。\n");
//}
//int main()
//{
//	int b=0;
//	while (1)
//	{
//		printf("猜字游戏：\n");
//		int a = random_num(0);
//		num_guess(a);
//		printf("再玩一次？(1/0)\n");
//		scanf_s("%d", &b);
//		if (b == 0)
//		{
//			break;
//		}
//	}
//	return;
//}
//#include<stdio.h>
//int main()
//{
//	//char a = getchar();
//	char b = 'a';
//	putchar(b);
//	printf("\n");
//	printf("%c\n", b);
//	return 0;
//}

