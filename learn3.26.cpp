#include<stdio.h>
#define C 11
#define SIGN 1
int sea_scan(int arr[C][C],int i,int j,int *count)
{
	if (i < 0 || j < 0)//��ֹ���
	{
		return 0;
	}
	if (arr[i][j] == 0)
	{
		*count=*count+1;		
		arr[i][j] = SIGN;//����������Ԫ�ر�� ��ֹ��α����ظ�������ɻ���
		*count+=sea_scan(arr, i - 1, j,count);
		*count+=sea_scan(arr, i + 1, j,count);
		*count+=sea_scan(arr, i, j - 1,count);
		*count+=sea_scan(arr, i, j + 1,count);
	}
	if (arr[i][j] == 1)
	{
		return 0;
	}
}
int main()
{
	int n, i, j,count=0;//countΪ��������
	int arr[C][C] = {0};
	for (i = 0; i < C; i++)//��ʼ������Ϊ1
	{
		for (j = 0; j < C; j++)
		{
			arr[i][j] = 1;
			//printf("%d ", arr[i][j]);//��������Ƿ�ɹ���ʼ��Ϊ1
		}
		//printf("\n");
	}
	char num, error;
	scanf_s("%d", &n);//��ȡ�������n
	error = getchar();//��ȡscanf����ĩβ������\n
	num = getchar();
	i = 1; j = 1;
	while (num != EOF)//���뷽��
	{
		
		if (num != ' ' && num != '\n')
		{
			arr[i][j] = num - '0';
			j++;
		}
		if (num == '\n')
		{
			i++;
			j = 1;
		}
		if (i == (n + 1))
		{
			break;
		}

		num = getchar();
	}
	//for (i = 0; i < C; i++)//����Ƿ�ɹ�����
	//{
	//	for (j = 0; j < C; j++)
	//	{
	//		printf("%d", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	i = 1; j = 1;
	//��ʼ������������Χ
	for (j = 1; j <= n; j++)
	{
		sea_scan(arr, i, j, &count);
	}
	for (j=n,i = 1; i <= n; i++)
	{
		sea_scan(arr, i, j, &count);
	}
	for(i=n,j=n; j > 0; j--)
	{
		sea_scan(arr, i, j, &count);
	}
	for (i=n,j=1; i > 0; i--)
	{
		sea_scan(arr, i, j, &count);
	}
	printf("%d", count);
	return 0;
}
