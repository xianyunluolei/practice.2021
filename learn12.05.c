//#include<stdio.h>
////#define N 10
//int readline_str(char arr[], int n)
//{
//	int ch, i = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (i < n)
//		{
//			arr[i++] = ch;
//		}
//	}
//	arr[i] = '\0';
//	return i;
//}
//int main()
//{
//	char arr[10] = "abucdefg";
//	int len = readline_str(arr, 10);
//	printf("�ַ���arr�ĳ���Ϊ��length = %d\n", len);
//	return 0;
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void mune()
{
	printf("***********************************\n");
	printf("*****1.�ӷ�             2.����*****\n");
	printf("*****3.�˷�             4.����*****\n");
	printf("*****         0.�˳�          *****\n");
	printf("***********************************\n");
}
int cle(int (*pa)(int,int))
{
	int input, x, y;
	printf("\n������������������>");
	scanf_s("%d%d", &x, &y);
	printf("\n%d", add(x, y));
}
//��ͳ�ļ������������� ����
int main()
{
	int input;
	do//�����˻���0��һ��ѡ�� �´μǵÿ������е�������м���
	{
		mune();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		
		switch (input)
		{
		case 0:
			printf("�˳�\n");
		case 1:
			cle(add);
		case 2:
			cle(sub);
		case 3:
			cle(mul);
		case 4:
			cle(div);
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}