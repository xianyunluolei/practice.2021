#include<stdio.h>
void bubble(int arr[], int sz)//ð�ݺ����Ż���
{
	int i, j;
	for (i = 0; i < sz - 1; i++)//ѭ��sz-1�Σ������������ν�������
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)// ��ÿ��ѭ�����̵�Ԫ�ؽ��бȽ�  һ���Ƚ�sz-1-i��
		{
			if (arr[j] > arr[j + 1])
			{
				int num = 0;//����Ԫ�ع��̿��Է�װΪһ������ ����û�б�Ҫ 
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
	bubble(arr,sz );//�ϴ�����������С���е���
	display(arr, sz);//�ϴ����������Ĵ�С���е���
	return 0;
}