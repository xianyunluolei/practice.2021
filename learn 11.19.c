//#include<stdio.h>
//#define NUM 10 
//void paixu(int arr[])
//{
//	int i, j;
//	for (j = 0; j < NUM - 1; j++)
//	{
//		for (i = 0; i < NUM - 1; i++)
//		{
//			if (arr[i + 1] < arr[i])
//			{
//				int a = i + 1;
//				int b = i;
//				arr[a] = arr[a] + arr[b];
//				arr[b] = arr[a] - arr[b];
//				arr[a] = arr[a] - arr[b];
//			}
//		}
//	}
//	return;
//}
//void swap(int arr[], int a, int b)
//{
//
//}
//void display(int arr[])
//{
//	int i;
//	for (i = 0; i < NUM; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//	return;
//}
//int main()
//{
//	int arr[NUM] = { 1,3,5,7,9,2,4,6,8,10 };
//	paixu(arr);
//	display(arr);
//	return 0;
//}
//分治排序
//#include<stdio.h>
//
//void quick(int arr[],int first ,int last)
//{
//	int low = first;
//	int high = last;
//	int key = arr[low];
//	if (first >= last)
//	{
//		return;
//	}
//	while (low < high)
//	{
//		while (low < high && arr[high]>key)
//		{
//			high--;
//		}
//		arr[low] = arr[high];
//		while (low < high && arr[low] < key)
//		{
//			low++;
//		}
//		arr[high] = arr[low];
//	}
//	arr[low] = key;
//	quick(arr, first, low - 1);
//	quick(arr, low+1, last);
//}
//void display_array(int arr[],int n)
//{
//	int i;
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%-4d", arr[i]);
//	}
//	return;
//}
//int main()
//{
//	/*int i,n;
//	int arr[] = { 0 };
//	printf("\n请输入数的个数：>");
//	scanf_s("%d", &n);
//	printf("\n请输入该组数字：>");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}*/
//	int n = 10;
//	int arr[10] = { 1,3,2,7,4,5,8,9,10,6 };
//	display_array(arr, n);
//	quick(arr,0, n-1);
//	display_array(arr, n);
//	return 0;
//}
//#include<stdio.h>
//#include"function.h"
//void swap(int* a, int* b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//void print_array(int arr[])
//{
//	int i;
//	for (i = 0; i < NUM; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//	printf("\n");
//	return;
//}
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < NUM; i++)
//	{
//		arr[i] = 0;
//	}
//	return;
//}
//
//
//void reverse_array(int arr[])
//{
//	int i=0;
//	int j = NUM-1;//注意 需要减一
//	while (i < j)
//	{
//		swap(&arr[i],&arr[j]);//交换时改变实参  所以需要传址调用
//		i++;
//		j--;
//	}
//	print_array(arr);
//}
//int main()
//{
//	int i;
//	int array[NUM] = {1,3,21,41,21,23,1,2};
//	int arr[NUM] = { 11,22,33,11,22,3,1,3 };
//	//init(array);//将数组元素全部初始化为0
//	int sz = sizeof(array) / sizeof(array[0]);//求数组元素的个数
//	print_array(array);//打印数组
//	reverse_array(array);//将数组转置
//	for (i = 0; i < NUM; i++)
//	{
//		swap(&arr[i], &array[i]);//数组交换
//	}
//	print_array(arr);
//	print_array(array);
//	return 0;
//}
#include<stdio.h>
int i;//全局变量未初始化默认为0  局部变量位初始化默认随机数
int main()
{
	i--;//为-1 为有符号数
	//10000000000000000000000000000000001原码
	//11111111111111111111111111111111110反码
	//11111111111111111111111111111111111补码
	//在转化为有符号数时 首位符号位是1 转化为实际数字
	if (i > sizeof(i))//sizeof(i) 为1 是无符号数在两者比较时
	//无符号数会转化为有符号数 所以此时i极大 i>sizeof(i) 
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
}