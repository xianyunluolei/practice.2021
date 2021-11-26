#include<stdio.h>
#define ROW 3
#define COL 3
void comper(int arr[])
{

}
int main()
{
	int i, j;
	int arr[ROW][COL];
	int array[ROW];
	//最常见的二维数组初始化方法
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = 1;
		}
	}
	//运用指针进行二维数组的初始化
	int* p;
	for (p = &arr[0][0]; p <= &arr[ROW-1][COL-1]; p++)
	{//将二维数组当作一维数组进行初始化 通过指针对数组进行遍历
		*p = 2;
	}
	//我认为还是上述的代码更简洁 用到更少的变量 但是可读性下降了不少
	//但是依旧不是特别建议使用
	//对上述代码进行简化
	for (i = 0; i < ROW; i++)
	{
		for (p = arr[i]; p <= arr[i] + COL - 1; p++)
		{//因为在二维数组中arr[i]表示第i行第一个元素的指针
			*p = 3;
		}
	}//这个代码感觉既难读又难用  好处难道是处理更快速？
	
	for (p = &arr[0][0]; p <= arr[ROW- 1] + COL - 1; p++)
	{
		printf("%-2d", *p);
	}
	comper(array);
	return 0;
}