#include<stdio.h>
//int fact(int num)//阶乘函数返回阶乘结果
//{
//	int i, sum = 1;
//	if (num == 0)//函数结束标志
//	{
//		return 0;
//	}
//	for (i = num; i > 0; i--)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//int main()//正整数等于阶乘之和
//{
//	//printf("%d\n", fact(3));
//	int num=0, sum = 0;
//	scanf_s("%d", &num);
//	int flag = num;
//	while (num != 0)
//	{
//		sum += fact(num % 10);
//		num = num / 10;
//	}
//	if (sum == flag)
//	{
//		printf("%d,", flag);
//		while (flag != 0)
//		{
//			printf("%d!", flag % 10);
//			if (flag > 10)
//				printf("+");
//			flag = flag / 10;
//
//		}
//		printf("=%d\nYes", sum);
//	}
//	else
//	{
//		printf("No");
//	}
//}


//*************************分割线*****************************
double fact(double num)//阶乘函数返回阶乘结果
{
	double i, sum = 1;
	if (num == 0)
	{
		return 1;
	}
	for (i = num; i > 0; i--)
	{
		sum *= i;
	}
	return sum;
}
double sum(double num)
{
	double i;
	double re = 0;
	if (num == 1)
	{
		return 1;
	}
	for (i = num; i > 0; i -= 2)
	{
		re += i;
	}
	return re;
}
int main()
{
	double i=0,j=1;
	double pi ;
	scanf_s("%lf", &pi);
	double e = 0,e1=0,e2=0;
	/*printf("%d\n", sum(7));
	printf("%d\n", fact(3));
	e2 = fact(3) / sum(7);
	printf("%lf\n", 1.0 / 3.0);*/
	while (e < pi)
	{
		e1 = e;
		e+= fact(i) / sum(j);
		//printf("%lf\n", e);
		i++;
		j+= 2;
	}
	printf("%.7lf %.0lf", e1,i);
	return 0;
}
