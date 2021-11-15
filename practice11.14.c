//函数递归的简单应用：数的阶乘
#include<stdio.h>
//long int fact(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fact(n - 1);
//	}
//	//条件表达式：return n<=1?1:n*fact(n-1);
//}
//
//int power(int x, int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * power(x, n - 1);
//	}
//	//条件表达式：return n==0?1:x*power(x,n-1);
//}
//int main()
//{
//	int x;
//	int n;
//	printf("请输入一个数字，以求他的阶乘：>");
//	scanf_s("%d", &x);
//	printf("\n该数字的阶乘是：%d\n", fact(x));
//	printf("请输入一个数字n，以求x的n次方：>");
//	scanf_s("%d", &n);
//	printf("\n该数字的n阶是：%d\n", power(x, n));
//	return 0;
//}
//递归的应用 数组快速排序
#define N 10
int split(int arr[], int low, int high)
{
	int a = arr[low];
	for (;;)
	{
		while (low < high && a <= arr[high])
		{
			high--;
		}
		if (low >= high)
		{
			break;
		}
		arr[low++] = arr[high];
		while (low < high && a >= arr[high])
		{
			low++;
		}
		if (low >= high)
		{
			break;
		}
		arr[high--] = arr[low];
	}
	arr[high] = a;
	return high;//忘记设立函数返回值
}

void quick(int arr[], int low, int high)
{
	int middle;
	if (low >= high)
		return;//忘记设立递归结束的终止条件
	middle = split(arr, low, high);
	quick(arr, low, middle - 1);
	quick(arr, middle + 1, high);
}
int main()
{
	int i,arr[N];
	printf("请输入十个数据进行数组初始化：>");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n该数组arr[%d]=", N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	quick(arr, 0, N - 1);
	printf("\n排序后的数组为：>");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}