#include<stdio.h>
#include<math.h>
void f1(int a, int b, int c,float t)
{
	float x1, x2;
	//t = b * b - 4 * a * c;
	x1 = (-b + sqrt(t)) / (a * 2);
	x2 = (-b - sqrt(t)) / a / 2;
	printf("x1=%f x2=%f\n", x1, x2);//�ǵô�ӡ��ʱ��ϰ���Լ���\n
}
void f2(int a, int b, int c,float t)
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
int main()
{
	int a, b, c;
	float t;
	printf("������a��b��c��ֵ���Լ���ax^2+bx+c=0�ĸ���\n");//\n
	scanf_s("%d%d%d", &a, &b, &c);//��ʼ��������ȱ�д
	t = b * b - 4 * a * c;//����ǰû�г�ʼ��
	if (t > 0)
	{
		f1(a, b, c,t);//�Ż�һ�£���tҲ����ȥ
	}
	if (t == 0)//����һ���Ⱥ�
	{
		f2(a, b, c,t);
	}
	if (t < 0)
	{
		f3(a, b, c,t);
	}
	return 0;
}