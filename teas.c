#include<stdio.h>
//字符位置统计

/*int main()
{
	char str[30]={0};
	char ch;
	int i=0,j=0,flag=0;
	char c=getchar();
	while(c!=' ')
	{
		str[i]=c;
		c=getchar();
		i++;
	}
	ch=getchar();
	for(j=0;j<i;j++)
	{
		if(str[j]==ch)
		{
			printf("%d ",j);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("NULL");
	}
	return 0;
}*/

//和与乘积
//void value(int num1, int num2,int *add,int *mul)
//{
//	*add=num1+num2;
//	*mul=num1*num2;
//}
/*int main()
{
	int a,b,add=0,mul=0;
	scanf_s("%d",&a);
	scanf_s("%d",&b);
	value(a,b,&add,&mul);
	printf("%d %d",add,mul);
	return 0;
}*/

//求最大值与最小值
void max_min(float arr[30],float *max,float* min,int sz)
{
	int i,j;
	for(i=0;i<sz;i++)
	{
		for(j=i;j<sz;j++)
		{
			if(arr[j]>arr[j+1])
			{
				float tmp=0;
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	*min=arr[0];
	*max=arr[sz];
}
int main()
{
	float max=0,min=0;
	float arr[30]={0};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	max_min(arr,&max,&min,n);
	printf("%.2f\n%.2f\n",max,min);
	return 0;
}