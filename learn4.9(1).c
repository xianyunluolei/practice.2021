#include<stdio.h>
//数的按顺序分解  可优化
/*int main()
{
	int num,sum = 0 ,count = 0,flag=0;
	int left = 0, right = 0;
	int i, j;
	scanf_s("%d", &num);
	for (i = 1; i < 100; i++)
	{
		count = 0;
		sum = 0;
		for (j = i; j < 100; j++)
		{
			count++;//计算元素个数
			sum += j;//计算元素总和
			if (sum == num && count >= flag)
			{
				flag = count;
				left = i;
				right = j;
				continue;
			}
		}
	}
	if (flag == 0)
	{
		printf("No Aswer!\n");
	}
	else
	{
		printf("%d=", num);
		for (i = left; i <= right; i++)
		{
			printf("%d", i);
			if (i < right)
			{
				printf("+");
			}
		}
	}
	return 0;
}*/
int sum(int x)
{
	int num = 0;
	while (x != 0)
	{
		num += (x % 10);
		x /= 10;
	}
	return num;
}
//求各位数字之和
//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	printf("%d",sum(num));
//	return 0;
//}

void invert_print(int num)//倒序输出数字 无返回值
{
	if (num == 0)
	{
		return;
	}
	printf("%d", num % 10);
	invert_print(num / 10);
}
//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	invert_print(num);
//	return 0;
//}
int fact(int num)//阶乘函数返回阶乘结果
{
	int i,sum=1;
	if (num == 0)
	{
		return 0;
	}
	for (i = num; i > 0; i--)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	//printf("%d\n", fact(3));
	int num,sum=0;
	scanf_s("%d", &num);
	int flag = num;
	while (num != 0)
	{
		sum += fact(num % 10);
		num =num/10;
	}
	if (sum == flag)
	{
		printf("%d,", flag);
		while (flag != 0)
		{
			printf("%d!", flag % 10);
			if(flag>10)
				pritnf("+");
			flag = flag / 10;
			
		}
		printf("=%d\nYes",sum);
	}
	if (sum != flag)
	{
		printf("No");
	}
}