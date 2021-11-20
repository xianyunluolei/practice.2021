#include<stdio.h>
int count_bit(int n)
{
	int i;
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		else
		{
			break;
		}
		n / 2;
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int count=count_bit(n);
	printf("%d\n", count);
	return 0;
}