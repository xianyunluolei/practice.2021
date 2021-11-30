#include<stdio.h>
#include<math.h>
void f1(int a, int b, int c,float t)
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / (a * 2);
	x2 = (-b - sqrt(t)) / a / 2;
	printf("x1=%f x2=%f\n", x1, x2);//记得打印的时候习惯性加上\n
}
void f2(int a, int b, int c,float t)
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / a / 2;
	x2 = x1;
	printf("x1=x2=%f\n", x1);
}
void f3(int a, int b, int c, float t)
{
	printf("该方程无实根\n");
}
int main()
{
	int a, b, c;
	float t;
	printf("请输入a，b，c的值用以计算ax^2+bx+c=0的根：\n");//\n
	scanf_s("%d%d%d", &a, &b, &c);//初始化程序该先编写
	t = b * b - 4 * a * c;//运算前没有初始化
	if (t > 0)
	{
		f1(a, b, c,t);//优化一下，把t也传上去
	}
	if (t == 0)//少了一个等号
	{
		f2(a, b, c,t);
	}
	if (t < 0)
	{
		f3(a, b, c,t);
	}
	return 0;
}