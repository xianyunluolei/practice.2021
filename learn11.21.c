//#include<stdio.h>
//
//typedef struct comp
//{
//	char name;
//	int value;
//	char type;
//	char* ps;
//}comp;
//int main()
//{
//	char a[10] = "bit";
//	comp s1 = { "ASUS",5299,"Vivobook 14pro" ,a};
//	//int * p = &a;
//	printf("%s", s1.ps);
//	//printf("%d", *p);
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
#include<stdio.h>


void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int count_num(int n)
{
	int count = 10 - n;
	if (n == 0)
	{
		return  count;
	}

	printf("%d\n", count);
	count_num(n - 1);
}
//int main()
//{
//	////test();
//	//int n = 10;
//	//int count = count_num(n);
//	//printf("%d\n", count);
//	/*int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 1;
//	}
//	return 0;
//}
#include<assert.h>
void my_strcopy(char* arr1, char* arr2)
{
	assert(arr1 !=  NULL);
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
}
//int main()
//{
//	char arr1[] = "**********";
//	char arr2[] = "holle";
//	my_strcopy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}
int my_strlen1(const char arr[])
{
	int i;
	int count = 0;
	for (i = 0; i < 100; i++)//不严密 易出bug 不精确的代码行
	{
		//assert(arr[] != NULL);
		if (arr[i] == '\0')
		{
			return count;
		}
		count++;
	}
}
//int main()
//{
//	char arr []= "abcdefg";
//	printf("字符串arr的长度为：%d\n", my_strlen1(arr));
//	return 0;
//}