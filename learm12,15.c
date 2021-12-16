#include<stdio.h>
void swap(char a, char b)
{
	char tmp = a;
	a = b;
	b = tmp;
}
void left(char *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		swap(arr[i], arr[i + 1]);
	}
}
void right(char *arr, int sz)
{
	int i ;
	for (i = sz; i > 1; i--)
	{
		swap(arr[i], arr[i - 1]);
	}
}
int main()
{
	char arr[] = "abcdefg";
	//²âÊÔ
	printf("%s\n", arr);
	int sz = sizeof(arr) / sizeof(arr[0]);
	//left(arr, sz);//×óĞı×Ö·û
	right(arr, sz);//ÓÒĞı×Ö·û
	printf("%s\n", arr);
	return 0;
}