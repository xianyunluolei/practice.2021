#include<stdio.h>

#define rates ((int)(sizeof(value)/sizeof(value[0])))
#define initial 100.0

int main(void)
{
	int i, year, low_rate, num_year,j;
	double value[5];
	printf("请输入最小利率：>");
	scanf_s("%d", &low_rate);
	printf("请输入存储年数：>");
	scanf_s("%d", &num_year);
	printf("\nYears");
	for (i = 0; i < rates; i++)
	{
		printf("%6d%%", low_rate + i);
		value[i] = initial;
	}
	printf("\n");
	for (year = 1; year <= num_year; year++)
	{
		printf("%3d    ", year);
		for (j = 0; j < rates; j++)
		{
			value[j] += (low_rate + j) / 100.0 * value[j];
			printf("%7.2f", value[j]);
		}
		printf("\n");
	}
	return 0;
}