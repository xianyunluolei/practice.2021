//#include<stdio.h>
//
//double average_double(double a,double b)
//{
//	return (a + b) / 2;
//}
//float average_float(float a, float b)
//{
//	return (a + b) / 2;
//}
//int main()
//{
//	double x = 10;
//	double y = 10;
//	double z = average_double(x, y);
//	printf("%lf\n", z);
//	float a = 20;
//	float b = 20;
//	float c = average_float(a, b);
//	printf("%f", c);
//	return 0;
//}
//素数的判定
//函数创建及调用

//#include<stdio.h>
//#include<stdbool.h>
//
//bool prime (int x)
//{
//	int i;
//	if (x <= 1)
//	{
//		return false;
//	}
//	for (i = 2; i* i <= x; i++)
//	{
//		if (x % i == 0)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//	
//}
//int main()
//{
//	int input_prime = 0;
//	printf("请输入一个数字：>");
//	scanf_s("%d", &input_prime);
//	if (prime(input_prime))
//	{
//		printf("该数字为素数。\n");
//	}
//	else
//	{
//		printf("该数字不是素数。\n");
//	}
//	return 0;
//}
