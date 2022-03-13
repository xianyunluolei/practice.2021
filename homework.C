#include<stdio.h>

//int main()
//{
//	int x, y, z;
//	double num;
//	scanf("%d%d%d", &x, &y, &z);
//	num = x + y + z;
//	printf("%.0f\n", num);
//	printf("%.2f", num / 3);
//	return 0;
//}

//int main()
//{
//	float x;
//	int y;
//	scanf("%f", &x);
//	y = (int)x;
//	if (0.5<=(x-y))
//	{
//		printf("%d", y + 1);
//	}
//	else
//	{
//		printf("%d", y);
//	}
//	return 0;
//}

//int main()
//{
//	float a;
//	float x;
//	scanf("%f", &a);
//	x = (a * 9) / 5 + 32;
//	printf("%.1f", x);
//	return 0;
//}

//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if ((year%4==0)&&(year%100!=0)||(year % 100 == 0) && (year % 400 == 0))
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}

//int main()
//{
//	printf("Because of the new coronavirus, we have online classes at home");
//	return 0;
//}
//int main()
//{
//	char x;
//	x = getchar();
//	if (x == 'A')
//	{
//		printf("add");
//	}
//	else if (x == 'D')
//	{
//		printf("delete");
//	}
//	else if(x=='S')
//	{
//		printf("sort");
//	}
//	return 0;
//}

//int main()
//{
//	float r;
//	float s;
//	scanf("%f", &r);
//	s = 3.14 * r * r;
//	printf("s=%.2f", s);
//	return 0;
//}

//int main()
//{
//	int n, m,i,j;
//	scanf_s("%d%d", &n, &m);
//	for (i = n; i <= m; i++)
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
//		
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	int n,m;
//	scanf("%d%d", &n, &m);
//	for (i = n; i <= m; i++)
//	{
//		int count = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//				break;
//			}
//		}
//		if (count == 0)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int a,b,c;
//	int n;
//	scanf_s("%d", &n);
//	
//		for (a = 0; a <= n; a++)
//		{
//			for (b = 0; b <= n; b++)
//			{
//				for (c = 0; c <= n; c+=2)
//				{
//					if (n ==( a * 4) + (b * 3) + (c / 2))
//					{
//						printf("%d %d %d\n", a, b, c);
//					}
//				}
//			}
//		}
//	return 0;
//}

//int  sushu(int n)
//{
//	int i;
//	int count = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			count++;
//			break;
//		}
//	}
//	if (count == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int chang(int n)
//{
//	int gewei = n % 10;
//	int shiwei = (n / 10) % 10;
//	int baiwei = n / 100;
//	if (baiwei == 0)
//	{
//		return gewei * 10 + shiwei;
//	}
//	return gewei * 100 + shiwei * 10 + baiwei;
//}
//
//int main()
//{
//	int n, m,i = 0,j = 0;
//	scanf("%d%d", &n, &m);
//	for (i = n; i < m + 1; i++)
//	{
//		int j = chang(i);
//		if (i < 10)
//		{
//			j = i;
//		}
//		if (sushu(i)&&sushu(j))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int gewei = n % 10;
//	int shiwei = (n / 10) % 10;
//	int baiwei = n / 100;
//	if (n < 0)
//	{
//		printf("error");
//	}
//	else if (n < 10 && n >= 0)
//	{
//		printf("%d", n);
//	}
//	else if (baiwei == 0)
//	{
//		printf("%d", gewei * 10 + shiwei);
//	}
//	else
//	{
//		
//		printf("%d", gewei * 100 + shiwei * 10 + baiwei);
//	}
//	return 0;
//}

//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
//	{
//		printf("Can not be divisible by 3,5,7.\n");
//	}
//	else
//	{
//		printf("Can be divisible by ");
//		if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)printf("3,5,7.");
//		else if (n % 3 != 0 && n % 5 == 0 && n % 7 == 0) printf("5,7.");
//		else if (n % 3 != 0 && n % 5 != 0 && n % 7 == 0)printf("7.");
//		else if (n % 3 == 0 && n % 5 == 0 && n % 7 != 0)printf("3,5.");
//		else if (n % 3 == 0 && n % 5 != 0 && n % 7 == 0)printf("3,7.");
//		else if (n % 3 == 0 && n % 5 != 0 && n % 7 != 0)printf("3.");
//		else if(n % 3 != 0 && n % 5 == 0 && n % 7 != 0)printf("5.");
//	}
//	return 0;
//}

//int main()
//{
//	int tizhong, shengao;
//	scanf("%d%d", &shengao, &tizhong);
//	int biaozhun = shengao - 110;
//	if (biaozhun -5< tizhong&&biaozhun+5>tizhong)
//	{
//		printf("good");
//	}
//	else if ((biaozhun + 5) <= tizhong)
//	{
//		printf("fat");
//	}
//	else
//	{
//		printf("thin");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int x = c + 1;
//	if (x == 60)
//	{
//		x = 0;
//		b++;
//	}
//	if(b == 60)
//	{
//		b = 0;
//		a++;
//	}
//	if (a == 24)
//	{
//		a = 0;
//	}
//	printf("%d:%d:%d", a, b, x);
//	return 0;
//}