//#include<stdio.h>
////#define N 10
//int readline_str(char arr[], int n)
//{
//	int ch, i = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (i < n)
//		{
//			arr[i++] = ch;
//		}
//	}
//	arr[i] = '\0';
//	return i;
//}
//int main()
//{
//	char arr[10] = "abucdefg";
//	int len = readline_str(arr, 10);
//	printf("字符串arr的长度为；length = %d\n", len);
//	return 0;
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void mune()
{
	printf("***********************************\n");
	printf("*****1.加法             2.减法*****\n");
	printf("*****3.乘法             4.除法*****\n");
	printf("*****         0.退出          *****\n");
	printf("***********************************\n");
}
int cle(int (*pa)(int,int))
{
	int input, x, y;
	printf("\n请输入两个操作数：>");
	scanf_s("%d%d", &x, &y);
	printf("\n%d", add(x, y));
}
//传统的计算器函数调用 冗杂
int main()
{
	int input;
	do//遗忘了还有0这一个选项 下次记得考虑所有的情况进行计算
	{
		mune();
		printf("请选择：>");
		scanf_s("%d", &input);
		
		switch (input)
		{
		case 0:
			printf("退出\n");
		case 1:
			cle(add);
		case 2:
			cle(sub);
		case 3:
			cle(mul);
		case 4:
			cle(div);
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}