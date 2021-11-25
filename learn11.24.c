#include<stdio.h>
#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(300);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 5, * p=&i;
//	//(void*)p;
//	printf("%p\n", p);
//	printf("%d\n", * p);
//	return 0;
//}
#define N 10
void max_min(int arr[],int n,int *max,int *min)
{
	int i = 0;
	*max = arr[0];
	*min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
		else if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}
//int main()
//{
//	int arr[N] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max, min;
//	max_min(arr, N, &max, &min);
//	printf("max = %d\nmin = %d\n", max, min);
//	return 0;
//}
//int* top_ptr = &contents;
void array1(int arr[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		arr[i] = 1;
	}
}
int main()
{
	int arr[N] = {0};
	array1(arr);//由此可见，传递数组的时候默认为传址调用对形参的修改会改变实参
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%-2d", arr[i]);
	}
	return 0;
}