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
//��������Ϸ
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
//		printf("��²�һ��0-100�����ֲ����룺>");
//		scanf_s("%d", &y);
//	} while (compare(x,y));
//	printf("\n��ϲ�����¶��ˡ�\n");
//}
//int main()
//{
//	int b=0;
//	while (1)
//	{
//		printf("������Ϸ��\n");
//		int a = random_num(0);
//		num_guess(a);
//		printf("����һ�Σ�(1/0)\n");
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

