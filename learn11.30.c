#include<stdio.h>
#include<math.h>
//�����ʽ����  
void f1(int a, int b, int c,float t)//�����������Ӣ���׶�����ʽ
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / a / 2;
	x2 = (-b - sqrt(t)) / a / 2;
	printf("x1=%f x2=%f\n", x1, x2);//�ǵô�ӡ��ʱ��ϰ���Լ���\n
}
void f2(int a, int b, int c,float t)//f1 f2 f3 �о�������
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / a / 2;
	x2 = x1;
	printf("x1=x2=%f\n", x1);
}
void f3(int a, int b, int c, float t)
{
	printf("�÷�����ʵ��\n");
}
//int main()
//{
//	int a, b, c;
//	float t;
//	printf("������a��b��c��ֵ���Լ���ax^2+bx+c=0�ĸ���\n");//\n
//	scanf_s("%d%d%d", &a, &b, &c);//��ʼ��������ȱ�д
//	t = b * b - 4 * a * c;//����ǰû�г�ʼ��
//	if (t > 0)
//	{
//		f1(a, b, c, t);//�Ż�һ�£���tҲ����ȥ
//	}
//	if (t == 0)//����һ���Ⱥ�
//	{
//		f2(a, b, c, t);
//	}
//	else
//	{
//		f3(a, b, c, t);
//	}
//	return 0;
//}
//�������������ʽ
void print(int arr[3][5], int a, int b)
{
	int i;
	//int j;
	for (i = 0; i < a; i++)
	{
		int j;//д������ �����ֲ����� �������� ������ɿռ���˷�
		for (j = 0; j < b; j++)
		{
			printf("%-2d", arr[i][j]);
		}
		printf("\n");
	}
}
void init_arr(int arr[3][5], int a, int b)
{
	int i;
	for (i = 0; i < a; i++)
	{
		int j;
		for (j = 0; j < b;j++)
		{
			arr[i][j] = 1;
		}
	}
}
//������ָ�����ʽ
void print2(int(*p)[5], int a, int b)
{
	int i;
	for (i = 0; i < a; i++)
	{
		int j;
		for (j = 0; j < b; j++)
		{
			//printf("%d", *(p[i] + j));
			printf("%d", (p[i])[j]);
			//printf("%-2d", *(*(p + i) + j));//����*(p+i)����˼�ǽ�����p+i�ĵ�ַ�ﵽ������Ŀ��
		}//����Ϊʲô(*p+i)Ҳ���Դﵽ��ͬ�Ľ���� �����������滹�н����÷��Ž���ת��
		printf("\n");//������ò�Ҫ��(*p+i)���ַ�������Ϊ������� ����
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{1,2,3,4,2},{1,2,3,4,5} };
	init_arr(arr, 3, 5);
	print(&arr, 3, 5);//�����arr���������Ԫ�صĵ�ַ �൱�ڴ�ַ����
	print2(arr, 3, 5);
	return 0;
}