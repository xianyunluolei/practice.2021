#include<stdio.h>


//int main()// - ��������￪ʼ����
//{
//	printf("������\n");
//	printf("�Ա�:��\n");
//	printf("����:");
//	int age = 20;//20�� ������һ����ʼֵ
//	printf("%d\n", age);
//	printf("���:");
//	int c = 178;
//	printf("%d\n", c);
//	printf("����:");
//	int weight = 55;
//	printf("%d\n", weight);
//	printf("��Ҫ���\n");
//	int a2 = 10;//�ֲ�����-�����ڳ������( {} )�ڵı���
//	//�ֲ�������ò�Ҫ��ȫ�ֱ�����ͬ����ʶ��������bug
//	printf("�һ�Ҫ�ǣ��ɳ����� ӵ��ŷ�޴�½\n");
//	printf("�ҵ������ǣ�����һ����򵥵��ĳ���Ա\n");
//	printf("���һ�Ҫ��δ������Ĵ�ѧ�����й��Ŀ�������");
//	printf("����Ҫ�õ���ѧ��������һ����ίʲô��\n");
//	printf("%d\n", sizeof(char));// -1�ֽ�//size of -()�ڵĴ�С
//	printf("%d\n", sizeof(short));// -2�ֽ�
//	printf("%d\n", sizeof(long));// -4 / 8�ֽ�
//	printf("%d\n", sizeof(long long));// -8�ֽ�
//	printf("%d\n", sizeof(float));// -4�ֽ�
//	printf("%d\n", sizeof(double));// -8�ֽ�
//	printf("%d\n", sizeof(int));//-4�ֽ�
//	short int cu = 12324;
//	printf("%d\n", cu);
//	double lf = 3.14;
//	printf("%lf\n", lf);
//	return 0;
//}
		/*��������
			int ����% d
			char �ַ�% c
			float �����ȸ�����% f
			double ˫���ȸ�����% lf
			long int ������% d
			short int ������% d*/
			//�������λ
			//bit - ����λ//��С��λ���ٵĿռ�����ɶ������е�0��1
			//byte - �ֽ�//8������λ�Ĵ�С
			//kb//1024�ֽ�
			//mb//1024kb
			//gb//�Դ�����
			//tb//
			//pb//
			//3������λ 2��3�η��ֽ�� - 000 001  010 011 100 101 110 111
			//ͬ��8������λ 2��8�η��ֽ��
		///*int z = 0;
		//int y = 0;
		//int x = 0;
		//scanf_s("%d%d", &y, &z);//���鲻��&����
		//x = y + z;
		//printf("x = %d\n", x);
		//δ�����ı�ʶ��
		//������ʶextern
		///*extern int like;
		//printf("%d\n", like);*/
		//1.���泣�� ��3 4 5
		//2.������ ���г������Եı���,���������Ǳ��� ����const���εĳ�������const int n = 4
		//3.#define����ı�ʶ������
int add(int x, int y)//����add�������κ���ĸ����(����jia) �����ִ�Сд ֻ����������Ӣ�ĸ�ǳ���׶� addΪ������ int x int yΪ����
{
	int z = x + y; //�������ڵĴ���Ϊ������
	return z; //����һ������
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = add(num1, num2); //�Ž�add������num1��num2����int x�н��м��� Ȼ��int z�ִ���Ž�sum
		printf("%d\n", sum);
	return 0;
}
/*#include<stdio.h>


int max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{
	int a, b, c;
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	c = max(a, b);
	printf("%d\n", c);
	return 0;
}*/
/*#include<stdio.h>
// define ���÷�
// #define max 100 //1.�����ʶ������
// 2.�����
// 
//(1)�����ķ�ʽ
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//(2)��ķ�ʽ
#define MAX(x,y) (x>y?x:y)
#define add(x,y) ((x)+(y))
#define che(x,y) ((x)*(y))
#define chu(x,y) ((x)/(y))
int main()
{
	int a = 40;
	int b = 10;
	int c = 0;
	c = max(a, b);
	printf("%d\n", c);
	c = MAX(a, b);
	printf("%d\n", c);
	c = chu(a, b);
	printf("%d\n", c);
	return 0;
}*/

/*struct Book
{
	char name[20];
	int money;
};
//�ṹ�� �����Լ������һ������������int char
int main()
{
	struct Book a = { "��������",30 };
	struct Book* p = &a;
	printf("%s\n", (*p).name);
	return 0;
}*/

/*��ϲ����!
#include<stdio.h>
#include<iostream>

int main()
{
	int i;
	int b[] = { 32,32,206,210,207,178,187,182,196,227,33,32,32 };
	for (i = 0; i < 13; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}

����ɰ�!
#include<stdio.h>

int main()
{
	int i;
	int b[] = { 32,32,196,227,213,230,191,201,176,174,33,32,32 };
	for (i = 0; i < 13; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}

#include<stdio.h>

int main()
{
	int a = 64;
	int b = 0;
	scanf_s("%d", &b);
	int c = a + b;
	printf("%c", c);
	return 0;
}


����˧!
#include<stdio.h>

int main()
{
	int i;
	int b[] = { 32,32,206,210,213,230,203,167,33,32,32 };
	int c = sizeof(b) / 4;//  /sizeof(int)���������ֽ�������һ�����ݵ��ֽ���
	//printf("%d\n",c);
	//for (i=0;i<c;i++);
	for (i = 0; i < sizeof(b) / 4; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}*/
