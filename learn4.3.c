#include<stdio.h>

int main()
{
	float arr[10];
	int i, j,sign=0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &arr[i]);
	}
	for (i = 0; i < 10; i++)//找到最小值的下标
	{
		
		if (arr[sign] > arr[i])
		{
			sign = i;
		}
	}
	float dve = arr[sign];//找到最小值
	for (i = 0; i < 10; i++)
	{
		arr[i] = arr[i] - dve;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%.2f\n", arr[i]);
	}
	for (i = 0; i < 10-1; i++)
	{
		int flag = 0;
		for (j = 0; j < 10-1-i; j++)
		{
			flag = 1;
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if(flag == 0)
			break;
	}
	//printf("%f", arr[sign]);
	for (i = 0; i < 10; i++)
	{
		printf("%.2f\n", (arr[i]+dve));
	}
	return 0;
}
int main()
{
	return 0;
}