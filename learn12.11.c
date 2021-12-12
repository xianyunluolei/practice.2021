#include<stdio.h>
//int main()
//{
//	char* aa[] = { "word","at","a" };
//	char** pa = aa;
//	pa++;
//	printf("%s\n", *pa);//
//	printf("%p\n", pa);//指针数组aa的第二个元素的首元素地址
//	return 0;
//}
#define N 100
void reserve(char arr[])
{
	int i = 0;
	int count = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	int bigen = 0;
	while (bigen < count)
	{
		int tmp = 0;
		tmp = arr[bigen];
		arr[bigen] = arr[count];
		arr[count] = arr[bigen];
		bigen--;
		count--;
	}
}
int main()
{
	char  arr[N] = { 0 };
	scanf_s("%s", &arr);
	reserve(arr);
	printf("\n%s", arr);
	return 0;
}