#include<stdio.h>


//冒泡排序算法C语言实现重温 
//int main()
//{
//	int i,j;
//	int arr[10] = { 5,4,2,6,1,7,9,8,3,0 };
//	int size_arr = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d", size_arr);
//	for (i = 0; i < size_arr-1; i++)
//	{
//		for (j = 0; j < size_arr - 1; j++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp;
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < size_arr; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//冒泡函数的算法优化：
//void bubble1(int arr[],int size_arr)
//{
//	int i, j,flag,steps=0;
//	for (i = 0; i < size_arr - 1; i++)
//	{
//		flag = 1;
//		for (j = 0; j < size_arr-1-i; j++)
//		{
//			steps++;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	printf("%d\n", steps);
//}
//void bubble2(int arr[], int size_arr)
//{
//	int i, j, steps = 0;
//	for (i = 0; i < size_arr - 1; i++)
//	{
//		for (j = 0; j < size_arr - 1 - i; j++)
//		{
//			steps++;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//	
//			}
//		}
//	}
//	printf("%d\n", steps);
//}
//int main()
//{
//	int arr[5] = { 5,1,2,3,4 };
//	int size_arr = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", size_arr);
//	bubble1(arr,size_arr);
//	int i;
//	for (i = 0; i < size_arr; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

/*int main()
{
	int arr[10] = { 9,8,7,5,4,6,3,1,2,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i,j;
	for (i = 0; i < sz; i++)
	{
		int x = arr[i];
		for (j = i + 1; j < sz; j++)
		{
			if (arr[j] <  x)
			{
				x = arr[j];
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
			{
				printf("%d ",arr[i]);
			}
	return 0;
}*/


int main()
{
	int arr[10] = { 8,7,9,5,6,2,4,1,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j,x;
	for (i = 1; i < sz - 1; i++)
	{
		j = i - 1;
		x = arr[i];

		while (arr[j] > x)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j ] = x;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}