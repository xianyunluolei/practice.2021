//�����ݹ�ļ�Ӧ�ã����Ľ׳�
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
//	//�������ʽ��return n<=1?1:n*fact(n-1);
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
//	//�������ʽ��return n==0?1:x*power(x,n-1);
//}
//int main()
//{
//	int x;
//	int n;
//	printf("������һ�����֣��������Ľ׳ˣ�>");
//	scanf_s("%d", &x);
//	printf("\n�����ֵĽ׳��ǣ�%d\n", fact(x));
//	printf("������һ������n������x��n�η���>");
//	scanf_s("%d", &n);
//	printf("\n�����ֵ�n���ǣ�%d\n", power(x, n));
//	return 0;
//}
//�ݹ��Ӧ�� �����������
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
	return high;//����������������ֵ
}

void quick(int arr[], int low, int high)
{
	int middle;
	if (low >= high)
		return;//���������ݹ��������ֹ����
	middle = split(arr, low, high);
	quick(arr, low, middle - 1);
	quick(arr, middle + 1, high);
}
int main()
{
	int i,arr[N];
	printf("������ʮ�����ݽ��������ʼ����>");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n������arr[%d]=", N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	quick(arr, 0, N - 1);
	printf("\n����������Ϊ��>");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}