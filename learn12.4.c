//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%-3d", j+1);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ָ������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*parr[2])(int, int) = { add,sub };
//	int i;
//	for (i = 0; i < 2; i++)
//	{
//		printf("parr1=%-2d", parr[i](2, 3));
//		printf("parr2=%-2d", (*parr[i])(2, 3));
//
//	}
//	return 0;
//}
//char*(*pf)(char*,const char*)
//char*(*pfarr[4])(char*,const char*)
//int main()
//{
//	int x, y;
//	char a[];
//	scanf_s("%d%d", &x, &y);
//	scanf_s("%s", &a);
//	printf("%d,%c,%d", x, a, y);
//	return 0;
//}
//���ú���ָ������ķ���������������
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
	printf("***********************************");
	printf("*****1.�ӷ�             2.����*****");
	printf("*****3.�˷�             4.����*****");
	printf("*****         0.�˳�          *****");
	printf("***********************************");
}
//��ͳ�ļ������������� ����
//int mian()
//{
//	int input, x, y;
//	do//�����˻���0��һ��ѡ�� �´μǵÿ������е�������м���
//	{
//		mune();
//		printf("��ѡ��>\n");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("�˳�");
//		case 1:
//			printf("������������������>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", add(x, y));
//		case 2:
//			printf("������������������>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", sub(x, y));
//		case 3:
//			printf("������������������>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", mul(x, y));
//		case 4:
//			printf("������������������>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d", div(x, y));
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//ѡ����߼��ĺô��Ƿ����պ����Ӻ��� ���ٺ���
//�����Ժ�����ָ�������ʱ��ֱ��д���� �ٽ��������ں���ָ�������Ͼ�����
//ͬʱ����������ӵ���� �����Ժ󽫺������Խ��Խ��
//���ò�˵ ԭ������ָ��ûʲô�õ� ���ھ���ָ������ķ���
int mian()
{
	int input,x,y;
	int(*parr[5])(int ,int ) = {0, add,sub,mul,div };
	do//�����˻���0��һ��ѡ�� �´μǵÿ������е�������м���
	{
		mune();
		printf("��ѡ��>\n");
		scanf_s("%d", &input);
		printf("������������������>");
		scanf_s("%d%d", &x, &y);
		if (input >= 1 && input <= 4)
		{
			printf("%d", (*parr[input])(x, y));
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����������ѡ��>\n");
			break;
		}
	} while (input);
	//printf("%d", (*parr[input])(2, 3));
	return 0;
}