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
//��������
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
//	printf("\n���������ĸ�����>");
//	scanf_s("%d", &n);
//	printf("\n������������֣�>");
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
//	int j = NUM-1;//ע�� ��Ҫ��һ
//	while (i < j)
//	{
//		swap(&arr[i],&arr[j]);//����ʱ�ı�ʵ��  ������Ҫ��ַ����
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
//	//init(array);//������Ԫ��ȫ����ʼ��Ϊ0
//	int sz = sizeof(array) / sizeof(array[0]);//������Ԫ�صĸ���
//	print_array(array);//��ӡ����
//	reverse_array(array);//������ת��
//	for (i = 0; i < NUM; i++)
//	{
//		swap(&arr[i], &array[i]);//���齻��
//	}
//	print_array(arr);
//	print_array(array);
//	return 0;
//}
#include<stdio.h>
int i;//ȫ�ֱ���δ��ʼ��Ĭ��Ϊ0  �ֲ�����λ��ʼ��Ĭ�������
int main()
{
	i--;//Ϊ-1 Ϊ�з�����
	//10000000000000000000000000000000001ԭ��
	//11111111111111111111111111111111110����
	//11111111111111111111111111111111111����
	//��ת��Ϊ�з�����ʱ ��λ����λ��1 ת��Ϊʵ������
	if (i > sizeof(i))//sizeof(i) Ϊ1 ���޷����������߱Ƚ�ʱ
	//�޷�������ת��Ϊ�з����� ���Դ�ʱi���� i>sizeof(i) 
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
}