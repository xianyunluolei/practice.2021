#include<stdio.h>
#include<math.h>
//求根公式运算  
void f1(int a, int b, int c,float t)//函数名最好用英文易懂的形式
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / a / 2;
	x2 = (-b - sqrt(t)) / a / 2;
	printf("x1=%f x2=%f\n", x1, x2);//记得打印的时候习惯性加上\n
}
void f2(int a, int b, int c,float t)//f1 f2 f3 感觉好涝哇
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
//int main()
//{
//	int a, b, c;
//	float t;
//	printf("请输入a，b，c的值用以计算ax^2+bx+c=0的根：\n");//\n
//	scanf_s("%d%d%d", &a, &b, &c);//初始化程序该先编写
//	t = b * b - 4 * a * c;//运算前没有初始化
//	if (t > 0)
//	{
//		f1(a, b, c, t);//优化一下，把t也传上去
//	}
//	if (t == 0)//少了一个等号
//	{
//		f2(a, b, c, t);
//	}
//	else
//	{
//		f3(a, b, c, t);
//	}
//	return 0;
//}
//参数是数组的形式
void print(int arr[3][5], int a, int b)
{
	int i;
	//int j;
	for (i = 0; i < a; i++)
	{
		int j;//写在这里 创建局部变量 用完销毁 避免造成空间的浪费
		for (j = 0; j < b; j++)
		{
			printf("%-2d", arr[i][j]);
		}
		printf("\n");
	}
}
void init_arr(int arr[3][5], int a, int b)
{
	int i;
	for (i = 0; i < a; i++)
	{
		int j;
		for (j = 0; j < b;j++)
		{
			arr[i][j] = 1;
		}
	}
}
//参数是指针的形式
void print2(int(*p)[5], int a, int b)
{
	int i;
	for (i = 0; i < a; i++)
	{
		int j;
		for (j = 0; j < b; j++)
		{
			//printf("%d", *(p[i] + j));
			printf("%d", (p[i])[j]);
			//printf("%-2d", *(*(p + i) + j));//其中*(p+i)的意思是解引用p+i的地址达到遍历的目的
		}//其中为什么(*p+i)也可以达到相同的结果呢 或许是最外面还有解引用符号进行转化
		printf("\n");//但是最好不要用(*p+i)这种方法，因为更难理解 读懂
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{1,2,3,4,2},{1,2,3,4,5} };
	init_arr(arr, 3, 5);
	print(&arr, 3, 5);//这里的arr代表的是首元素的地址 相当于传址调用
	print2(arr, 3, 5);
	return 0;
}