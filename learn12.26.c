//#include<stdio.h>
//int cmp()
//{
//
//}
//int lengthOfLongestSubstring(char*s)
//{
//	char* p = s+1;
//	int ret = 0;
//
//	int count = 1;
//	while (cmp())
//	{
//		count++;
//		p++;
//	}
//	if (count > ret)
//	{
//		ret = count;
//	}
//}
//int main()
//{
//	char s = "abcdefg";
//	int ret = lengthOfLongestSubstring(&s);
//	printf("s中最长的子串长度为：%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int count = 0;
//	/*printf("\n请输入小明坐标a:> ");
//	scanf_s("%d", &a);
//	printf("\n请输入小明坐标b:> ");
//	scanf_s("%d", &b);
//	printf("\n请输入目的地坐标c:> ");
//	scanf_s("%d", &c);
//	printf("\n请输入目的地坐标d:> ");
//	scanf_s("%d", &d);*/
//	printf("请输入小明坐标和目的地坐标:>");
//	scanf_s("%d%d%d%d", &a, &b, &c, &d);
//	printf("\n");
//	if (a < 1000 && b < 1000 && c < 1000 && d < 1000)
//	{
//		count = (c - a) + (d - b);
//		printf("小明到达目的地的最小步数为；> %d\n", count);
//	}
//	else
//	{
//		printf("输入错误，请重新输入。\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int input=0;
	printf("请输入数字：>");
	scnaf_s("%d", &input);
	while (input)
	{
		int a = input % 10;

	}
	return 0;
}