//#include<stdio.h>
//��λ����Ӧ��  a��b�Ľ���������������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//��λ���Ӧ�� ������λ1�����ļ���
//int main()
//{
//	int num,i;
//	int count = 0;
//	scanf_s("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	/*for (i = 0; i < 32; i++)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num= num / 2;
//	}*/
//	printf("count=%d", count);
//	return 0;
//}
//#include<Stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	printf("a = %d\nb = %d\n",a,b);
//	int c = a && b;//�߼���
//	int d = a || b;//�߼���
//	printf("c = %d\n", c);
//	//�߼����߼��������
//	c = ++a && b++;// aΪ�� �����������򲻻����
//	d = ++a || b++;//aΪ�� ����������Ͳ������
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int get_max1(int x, int y)
//{
//	return x > y ? x : y;
//}
//int get_max2(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 23;
//	int max1 = get_max1(a, b);
//	printf("MAX=%d\n", max1);
//	int max2 = get_max2(a, b);
//	printf("MAX=%d\n", max2);
//	return 0;
//}
//�����ṹ����йظ�ϰ
//#include<stdio.h>
//struct com
//{
//	char brand[20];
//	char type[20];
//	int price;
//};
//int main()
//{
//	struct com a = {"ASUS","Vivobook 14pro",5200};
//	printf("Ʒ��:%s\n�ͺ�:%s\n�۸�:%d\n",a.brand,a.type,a.price);
//	struct com* A=&a;
//	printf("Ʒ�ƣ�%s\n", (*A).brand);
//	printf("Ʒ�ƣ�%s\n", A->brand);
//	return 0;
//}