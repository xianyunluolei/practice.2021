#include<stdio.h>
#include<stdlib.h>
//算法一
int count_bit1(unsigned int n)//转化为无符号数字进行负数的运算
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)//求十进制数字的思想 模十取位 除十减位
		{
			count++;//二进制同理
		}
		n = n / 2;
	}
	return count;
}
//算法二
int count_bit2(int n)
{
	int count=0;
	int i;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)//通过位移 取得位数 通过按位与判断数字
		{
			count++;
		}
	}
	return count;
}
//算法三  流弊啊 这个怎么想出来的
//最精简的一种写法
int count_bit3(int n)
{
	int count = 0;
	while (n)//非0继续 0则跳出循环 因为按位与最后一定为0
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//比较两个数的bit位有几个不同
//算法一  取每位的值进行比较
int comper1(int x,int  y)
{
	int count = 0;
	while (x | y)
	{
		if (x % 2 != y % 2)
		{
			count++;
		}
		x /= 2;
		y /= 2;
	}
	return count;
}
//算法二 利用按位异或^  二进制位相同为真(1) 不同为假(0)
int comper2(int x, int y)
{
	int num = x ^ y;
	int count=count_bit3(num);
	return count;
}
int main()
{
	int x,y;
	printf("第一个数字：>");
	scanf_s("%d", &x);
	printf("第二个数字：>");
	scanf_s("%d", &y);
	//int count=count_bit3(x);
	//int count=comper1(x, y);
	int count = comper2(x, y);
	printf("count = %d\n", count);
	return 0;
}