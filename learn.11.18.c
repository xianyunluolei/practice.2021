���� (�ݹ�ķ���)
#include<stdio.h>
void reverse(int x)
{
		if (x / 10 != 0)
		{
			printf("%d", x % 10);
			digit(x / 10);
		}
		else
		{
			printf("%d", x);
			return;
		}
}
int main()
{
	int num,i;
	int a = 0;
	scanf_s("%d", &num);
	reverse(num);
	return 0;
}

#include<stdio.h>
void division(int x)
{
	int num = 0;
	if (x / 10 != 0)
	{
		num++;
		division(x / 10);
		printf("%d ",x % 10);
	}
	else
	{
		printf("%d ", x);
		return;
	}
		
}
int main()
{
	int num;
	printf("������λ��С�ڵ����������>");
	scanf_s("%d", &num);
	division(num);
	return 0;
}
