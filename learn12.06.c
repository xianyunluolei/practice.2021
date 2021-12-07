#include<stdio.h>
#define N 10
#include<string.h>
#include<stdlib.h>
void quick_sort(int arr[],int begin,int end)
{
	int i = begin;
	int j = end;
	int tmp = arr[begin];
	if (begin >= end)//让递归不再继续的限制条件
	{
		return;
	}
	while (i<j)
	{
		if (i < j && arr[j] > tmp)
		{
			j--;
		}
		arr[i] = arr[j];
		if (i < j && arr[i] < tmp)
		{
			i++;
		}
		arr[j] = arr[i];
	}
	arr[i] = tmp;
	quick_sort(arr,begin, i-1);
	quick_sort(arr,i+1, end);
}
void display(int arr[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}
void display_str(char str1[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%s", str1);
	}
	printf("\n");
}
//int main()
//{
//	int arr[N] = { 1,3,5,7,9,2,4,6,8,0 };
//	//display(arr);
//	quick_sort(arr,0,N-1);
//	display(arr);
//	return 0;
//}
//qsort函数在冒泡算法上的使用
int cmp_bubble(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_str(const void* e1,const void* e2)
{
	/*if (*(char*)e1 == *(char*)e2)
	{
		return 0;
	 }
	else if (*(char*)e1 > *(char*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	return strcmp(*(char*)e1, *(char*)e2);
}
int main()
{
	int arr[N] = { 1,3,5,7,9,2,4,6,8,0 };
	char str[] = "ahsopel";
	//qsort(arr, N, 4, cmp_bubble);
	qsort(str, sizeof(str)/sizsof(str[0]), sizeof(str[0]), cmp_str);
	//display(arr);
	display_str(str);
	return 0;
}