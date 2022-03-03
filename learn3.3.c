//#include<stdio.h>
//#include<math.h>
//int num(int n)
//{
//	int i ;
//	for (i = 0; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i, n;
//	printf("请输入对应数字以求该数字内所有素数：\n");
//	scanf_s("%d", &n);
//	printf("对应数字内素数总数为为：");
//	for (i = 2; i < n; i++)
//	{
//		if (num(i) == 1);
//		printf("%-5d", i);
//	}
//	return 0;
//}
//int lenght(char* n)
//{
//	if (*n != '\0')
//	{
//		return 1 + lenght(n + 1);
//	}
//	else return 0;
//}
//int main()
//{
//	char arr[] = "python";
//	int len = lenght(arr);
//	printf("lenght(arr)=%d\n", len);
//	return 0;
//}
// int fac(int x)
//{
//	if (x > 1)
//		return x * fac(x - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d\n", fac(a));
//	return 0;
//}

//int main()
//{
//	double s = 0, pi = 3.14, r;
//	scanf_s("%lf", &r);
//	s = pi * r * r;
//	printf("%-10lf", s);
//	return 0;
//}
#include<stdio.h>


//int mian()
//{
//	int i, j;
//	int a = 0, b = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int lenght(char* n)
//{
//	if (*n != '\0')
//	{
//		return 1 + lenght(n + 1);
//	}
//	else return 0;//递归结束  然后回套
//}
//int main()
//{
//	char arr[] = "唉，我真傻，真的。";//一个汉字或一个汉语标点占两个字符位
//	int len = lenght(arr);
//	printf("lenght(arr)=%d\n", len);
//	return 0;
//}
