#include<stdio.h>
void bubble(int arr[], int sz)//冒泡函数优化版
{
	int i, j;
	for (i = 0; i < sz - 1; i++)//循环sz-1次，将所有数依次进行排序
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)// 对每次循环过程的元素进行比较  一共比较sz-1-i次
		{
			if (arr[j] > arr[j + 1])
			{
				int num = 0;//交换元素过程可以封装为一个函数 但是没有必要 
				num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
void display(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%-3d", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,75,3,21,4,54,2,12,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,sz );//上传数组和数组大小进行调用
	display(arr, sz);//上传数组和数组的大小进行调用
	return 0;
}