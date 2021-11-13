#include<stdio.h>

int sum_b(int a[],int b)
{
	int i, sum = 0;
	for (i = 0; i < b; i++)
	{
		sum += a[i];
	}
	return sum;
}

void list_change(int a[],int b)
{//此函数对上传的数组的形式参数的改变可以改变实际参数
	int i;
	for (i = 0; i < b; i++)
	{
		a[i] = a[b - i-1];
	}
}
//int main()
//{
	/*int a[5] = { 1,2,3,4,5 };
	int b = sum_b(a, sizeof(a) / sizeof(a[0]));
	printf("%d", b);
	list_change(a, sizeof(a) / sizeof(a[0]));
	printf("\n%d", a[1]);*/
	//int n,i;
	//scanf_s("%d", &n);
	//int y[n + 5];//不可行 依旧需要含有常量值 
	//for (i = 0; i < n; i++)
	//{
	//	scanf_s("%d", &y[i]);
	//}
	//return 0;
//}
