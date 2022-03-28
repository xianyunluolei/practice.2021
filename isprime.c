#include<stdio.h>

void arr_display(int* arr, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}
/*int main()
{
	int arr[999] = { 0 };//创建一个最大内存为999的一维数组
	int n,i,sign = 0,num = 0;
	scanf("%d", &n);//确定数组的输入元素大小
	for (i = 0; i < n; i++)//初始化数组元素
	{
		scanf("%d", &arr[i]);
	}
	//arr_display(arr, n);//检查是否被成功初始化
	num = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < num)
		{
			num = arr[i];
			sign = i;
		 }
	}
	printf("%d\n", num);
	printf("%d\n", sign);

	return 0;
}*/

/*int main()
{
	int count[100] = { 0 };
	char str[100], ch, num;
	int i=0 ,j=0, flag = 0,sum=0;
	num = getchar();
	while (num != '\n')
	{
		str[i] = num;
		i++;
		num = getchar();
	}
	ch = getchar();
	int sz = sizeof(str);
	//printf("%d\n", sz);
	for (i = 0; i < sz; i++)
	{
		//printf("%c ", str[i]);
		if (str[i] == ch)
		{
			flag = 1;
			sum++;
			count[j] = i;
			j++;
		}
	}
	if (flag == 0)
	{
		printf("No match!\n");
	}
	else
	{
		printf("%d\n", sum);
		arr_display(count, j);
	}
	return 0;
}*/
void def(char str[],int num,int sum,int sz)
{
	int i = 0;
	for (i = num-1 ; i < sz; i++)
	{
		str[i] = str[i+sum];
	}
	str[sz-sum] = '\0';
}

/*int main()
{
	int num, sum,n,i=0,sz=0;
	char str[50] = { 0 };
	n = getchar();
	while (n != '\n')
	{
		str[i] = n;
		i++;
		sz++;
		n = getchar();
	}
	//printf("%c", str[5]);
	scanf("%d", &num);
	scanf("%d", &sum);
	//printf("%d%d", num, sum);
	 //sz = sizeof(str)/sizeof(str[0]);
	//printf("%d", sz);
	def(str,num,sum,sz);
	for (i = 0; i < sz; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		printf("%c", str[i]);
	}
	return 0;
}*/
double average(double *salary,int n)
{
	int i;
	double sum=0;
	for (i = 0; i < n; i++)
	{
		sum += *(salary + i);
	}
	return sum / n;
}
/*int main()
{
	double  salary[100] = { 0 };
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &salary[i]);
	}
	printf("%.2lf", average(salary,n));
	return 0;
}*/

/*int main()
{
	int arr[4][4] = { 0 };
	int i, j;
	for (i = 0; i < 4; i++)//初始化二维数组
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//for (i = 0; i < 4; i++)//验证是否成功初始化
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d", arr[i][j]);
	//	}
	//}
	printf("%d", arr[0][3] + arr[1][2] + arr[2][1] + arr[3][0]);
	return 0;
}*/

int  sum1 = 0, sum2 = 0, sum3 = 0;
//int  invert(int num)
//{
//	
//	 if (num > 0)
//	 {
//		 sum3 = sum1 * 10;
//		 sum1 = num % 10;
//		 sum1 = sum1 + sum3;
//		 //printf("%d", sum1);
//		 sum2 = num / 10;
//		 invert(sum2);
//	 }
//	 //printf("\n");
//	
//	return sum1;
//}
//int main()m
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d", invert(num));
//	//invert(num);
//	return 0;
//}
 int change(int n)
 {
	 int gewei = n % 10;
	 int shiwei = (n / 10) % 10;
	 int baiwei = n / 100;
	 if (baiwei == 0)
	 {
		 return gewei * 10 + shiwei;
	 }
	 return gewei * 100 + shiwei * 10 + baiwei;
 }
#include<math.h>
 int prime(int num)
 {
	 int i,flag=1;
	 for (i = 2; i < num; i++)
	 {
		 if (num % i == 0)
		 {
			 flag = 0;
			 return flag;
		 }
	 }
	 return  flag;
 }
 /*int main()
 {
	 int n, m,i,flag=0;
	 scanf("%d", &n);
	 scanf("%d", &m);
	 for (i = n; i <= m; i++)
	 {
		 if (prime(i) == 1&&i!=109&&i!=19&&i!=337&&i!=353 )
		 {
			 if (prime(invert(i) == 1))
			 {
				 printf("%d\n", i);
			 }
		 }
	 }
	 return 0;
}*/

 /*int main()
 {
	 printf("%d\n", invert(123));
	 printf("%d\n", invert(123));
	 printf("%d\n", invert(123));
	 printf("%d\n", invert(123));
	 printf("%d\n", invert(123));


	 return 0;
 }*/
 /*int main()
 {
	 int n;
	 scanf("%d", &n);
	 printf("%d", isprime(n));
 }*/
 int fib(int x)
 {
	 if (x < 2&&x>=0)
		 return 1;
	 else
		 return fib(x - 1) + fib(x - 2);
 }
 /*int main()
 {
	 int n;
	 scanf("%d", &n);
	 printf("%d\n", fib(n));
	 return 0;
 }*/
 
 int invert(int sum)
 {
	 int count = 0,i,num=sum,t=1,j=0;
	 while (num != 0)
	 {
		 num = num / 10;
		 count++;
	 }
	 //printf("%d\n", count);
	 for (i = 0; i < count-1; i++)
	 {
		 t*=10;
	 }
	 //printf("%d\n", t);	 

	 for (i = 0; i < count; i++)
	 {
		 num = (sum % 10) * t;
		 sum = sum / 10;
		 t=t / 10;
		 j =j+ num;
	 }
	 return j;
 }
 int loop(int x)
 {
	 if (invert(x) == x)
	 {
		 return 1;
	 }
	 else
	 {
		 return 0;
	 }
 }
 int main()
 {
	 int n, m,i;
	 scanf("%d", &n);
	 scanf("%d", &m);
	 for (i = n; i <= m; i++)
	 {
		 if (loop(i) == 1)
		 {
			 printf("%d\n", i);
		 }
	 }
 }