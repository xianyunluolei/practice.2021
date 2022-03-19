#include<stdio.h>

//int main()
//{
//	int a, b, c, n;
//	scanf("%d", &n);
//	for (a = 0; a <= (n / 4); a++)
//	{
//		for (b = 0; b <= (n / 3); b++)
//		{
//			for (c = 0; c <= (n * 2); c+=2)
//			{
//				if ((a + b + c) != n)
//				{
//					continue;
//				}
//				if ((4 * a) + (3 * b) + (c / 2) == n)
//				{
//					printf("%d %d %d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}

//宏定义的常量名可以用小写
#define year 21
#define type_max(type)  type type##_max(type x,type y)  \
                        {                               \
                           return x>y?x:y;              \
                         }                              \


int main()
{
	int num;
	scanf_s("%d", &num);
	if ((num > 20) && ((num / 2 )== 0))
	{
		printf("%d",1);
	}
	else
	{
		printf("0");
	}
	return 0;
}