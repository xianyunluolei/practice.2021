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
//	printf("s������Ӵ�����Ϊ��%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int count = 0;
//	/*printf("\n������С������a:> ");
//	scanf_s("%d", &a);
//	printf("\n������С������b:> ");
//	scanf_s("%d", &b);
//	printf("\n������Ŀ�ĵ�����c:> ");
//	scanf_s("%d", &c);
//	printf("\n������Ŀ�ĵ�����d:> ");
//	scanf_s("%d", &d);*/
//	printf("������С�������Ŀ�ĵ�����:>");
//	scanf_s("%d%d%d%d", &a, &b, &c, &d);
//	printf("\n");
//	if (a < 1000 && b < 1000 && c < 1000 && d < 1000)
//	{
//		count = (c - a) + (d - b);
//		printf("С������Ŀ�ĵص���С����Ϊ��> %d\n", count);
//	}
//	else
//	{
//		printf("����������������롣\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int input=0;
	printf("���������֣�>");
	scnaf_s("%d", &input);
	while (input)
	{
		int a = input % 10;

	}
	return 0;
}