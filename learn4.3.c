#include<stdio.h>

//int main()
//{
//	float arr[10];
//	int i, j,sign=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%f", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)//�ҵ���Сֵ���±�
//	{
//		
//		if (arr[sign] > arr[i])
//		{
//			sign = i;
//		}
//	}
//	float dve = arr[sign];//�ҵ���Сֵ
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = arr[i] - dve;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%.2f\n", arr[i]);
//	}
//	for (i = 0; i < 10-1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < 10-1-i; j++)
//		{
//			flag = 1;
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if(flag == 0)
//			break;
//	}
//	//printf("%f", arr[sign]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%.2f\n", (arr[i]+dve));
//	}
//	return 0;
//}
//int main()
//{
//	ADT list{
//
//	}
//	return 0;
//}#include<stdio.h>

//int main()
//{
//	float arr[10];
//	int i, j,sign=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%f", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)//�ҵ���Сֵ���±�
//	{
//		
//		if (arr[sign] > arr[i])
//		{
//			sign = i;
//		}
//	}
//	float dve = arr[sign];//�ҵ���Сֵ
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = arr[i] - dve;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%.2f\n", arr[i]);
//	}
//	for (i = 0; i < 10-1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < 10-1-i; j++)
//		{
//			flag = 1;
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if(flag == 0)
//			break;
//	}
//	//printf("%f", arr[sign]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%.2f\n", (arr[i]+dve));
//	}
//	return 0;
//}
typedef  struct list
{
	float num;//ֵ
	int sign;//��Ӧ�±�
}list;
int main()
{
	list arr[10];
	float arr2[10];
	int i, j;
	for (i = 0; i < 10; i++)//�����ṹ�� ���Ա�
	{
		scanf("%f", &arr[i].num);//����ֵ
		arr2[i] = arr[i].num;//��ʼ��һ��������
		arr[i].sign = i;//�����±�
		if (arr[i].num < 0)//ȡ����ֵ
		{
			arr[i].num = -arr[i].num;
		}
	}
	//printf("%d", arr[0].sign);
		for (i = 0; i < 10-1; i++)
	{
		int flag = 0;
		for (j = 0; j < 10-1-i; j++)
		{
			flag = 1;
			if (arr[j].num < arr[j + 1].num)
			{
				float tmp = arr[j].num;
				arr[j].num = arr[j + 1].num;
				arr[j + 1].num = tmp;
				int tmp2 = arr[j].sign;
				arr[j].sign = arr[j + 1].sign;
				arr[j + 1].sign = tmp2;
			}
		}
		if(flag == 0)
			break;
	}
		for (i = 0; i < 10; i++)
		{
			printf("%.2f", arr2[arr[i].sign]);
			if (i != 9)
			{
				printf(",");
			}
		}
	return 0;
}