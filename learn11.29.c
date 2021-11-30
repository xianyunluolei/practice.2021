#include<stdio.h>

//void sz (int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = {0};//没有初始化 应该是默认0
//	sz(&arr);
//	printf("%d\n", arr[6]);
//	return 0;
//}
//int main()
//{
//	char* p = "abcde";
//	//*p = "w";
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* a1 = "abcdef";
//	char* a2 = "abcdef";
//	if (arr1 == arr2)//为什么是haha呢因为是两个数组，存放在不同的位置，比较的是首元素的地址而不是
//	{//所有的元素
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (a1 == a2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return  0;
//}
int main()
{
	int arr1[5] = { 1,2,6,4,5 };
	int arr2[5] = { 1,2,3,4,5 };
	int* a []= { arr1,arr2 };
	int i,j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%-3d", *(a[i] + j));
		}
		printf("\n");
	}
	return 0;
}