#include<stdio.h>
#define C 11
#define SIGN 1
int sea_scan(int arr[C][C],int i,int j,int *count)
{
	if (i < 0 || j < 0)//防止溢出
	{
		return 0;
	}
	if (arr[i][j] == 0)
	{
		*count=*count+1;		
		arr[i][j] = SIGN;//将遍历过的元素标记 防止多次遍历重复计算造成混乱
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
	int n, i, j,count=0;//count为海域数量
	int arr[C][C] = {0};
	for (i = 0; i < C; i++)//初始化数组为1
	{
		for (j = 0; j < C; j++)
		{
			arr[i][j] = 1;
			//printf("%d ", arr[i][j]);//检查数组是否成功初始化为1
		}
		//printf("\n");
	}
	char num, error;
	scanf_s("%d", &n);//获取方阵阶数n
	error = getchar();//截取scanf函数末尾遗留的\n
	num = getchar();
	i = 1; j = 1;
	while (num != EOF)//输入方阵
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
	//for (i = 0; i < C; i++)//检查是否成功输入
	//{
	//	for (j = 0; j < C; j++)
	//	{
	//		printf("%d", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	i = 1; j = 1;
	//开始检索方阵最外围
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
