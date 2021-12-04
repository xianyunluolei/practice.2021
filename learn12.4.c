//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%-3d", j+1);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*parr[2])(int, int) = { add,sub };
//	int i;
//	for (i = 0; i < 2; i++)
//	{
//		printf("parr1=%-2d", parr[i](2, 3));
//		printf("parr2=%-2d", (*parr[i])(2, 3));
//
//	}
//	return 0;
//}
//char*(*pf)(char*,const char*)
//char*(*pfarr[4])(char*,const char*)
//int main()
//{
//	int x, y;
//	char a[];
//	scanf_s("%d%d", &x, &y);
//	scanf_s("%s", &a);
//	printf("%d,%c,%d", x, a, y);
//	return 0;
//}
//运用函数指针数组的方法处理计算机程序
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
	printf("***********************************");
	printf("*****1.加法             2.减法*****");
	printf("*****3.乘法             4.除法*****");
	printf("*****         0.退出          *****");
	printf("***********************************");
}
//传统的计算器函数调用 冗杂
//int mian()
//{
//	int input, x, y;
//	do//遗忘了还有0这一个选项 下次记得考虑所有的情况进行计算
//	{
//		mune();
//		printf("请选择：>\n");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("退出");
//		case 1:
//			printf("请输入两个操作数：>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", add(x, y));
//		case 2:
//			printf("请输入两个操作数：>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", sub(x, y));
//		case 3:
//			printf("请输入两个操作数：>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", mul(x, y));
//		case 4:
//			printf("请输入两个操作数：>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", div(x, y));
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//选择此逻辑的好处是方便日后增加函数 减少函数
//比如以后增加指数运算的时候直接写函数 再将函数加在函数指针数组上就行了
//同时解决函数冗杂的情况 不用以后将函数变得越来越长
//不得不说 原本觉得指针没什么用的 现在觉得指针是真的方便
int mian()
{
	int input,x,y;
	int(*parr[5])(int ,int ) = {0, add,sub,mul,div };
	do//遗忘了还有0这一个选项 下次记得考虑所有的情况进行计算
	{
		mune();
		printf("请选择：>\n");
		scanf_s("%d", &input);
		printf("请输入两个操作数：>");
		scanf_s("%d%d", &x, &y);
		if (input >= 1 && input <= 4)
		{
			printf("%d", (*parr[input])(x, y));
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误，请重新选择：>\n");
			break;
		}
	} while (input);
	//printf("%d", (*parr[input])(2, 3));
	return 0;
}