#include<stdio.h>
#include<stdlib.h>
//�㷨һ
int count_bit1(unsigned int n)//ת��Ϊ�޷������ֽ��и���������
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)//��ʮ�������ֵ�˼�� ģʮȡλ ��ʮ��λ
		{
			count++;//������ͬ��
		}
		n = n / 2;
	}
	return count;
}
//�㷨��
int count_bit2(int n)
{
	int count=0;
	int i;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)//ͨ��λ�� ȡ��λ�� ͨ����λ���ж�����
		{
			count++;
		}
	}
	return count;
}
//�㷨��  ���װ� �����ô�������
//����һ��д��
int count_bit3(int n)
{
	int count = 0;
	while (n)//��0���� 0������ѭ�� ��Ϊ��λ�����һ��Ϊ0
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//�Ƚ���������bitλ�м�����ͬ
//�㷨һ  ȡÿλ��ֵ���бȽ�
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
//�㷨�� ���ð�λ���^  ������λ��ͬΪ��(1) ��ͬΪ��(0)
int comper2(int x, int y)
{
	int num = x ^ y;
	int count=count_bit3(num);
	return count;
}
int main()
{
	int x,y;
	printf("��һ�����֣�>");
	scanf_s("%d", &x);
	printf("�ڶ������֣�>");
	scanf_s("%d", &y);
	//int count=count_bit3(x);
	//int count=comper1(x, y);
	int count = comper2(x, y);
	printf("count = %d\n", count);
	return 0;
}