#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//void* my_memmove(void* arr1, void* arr2, int sz)
//{
//	assert(arr1 != NULL);//��ָ֤�����Ч��
//	assert(arr2 != NULL);
//	void* ret = arr1;
//	if (arr1 < arr2)//�ж��ص���λ��
//	{
//		while (sz--)//ǰ->��
//		{
//			*(char*)arr1 = *(char*)arr2;
//			++(char*)arr1;
//			++(char*)arr2;
//		}
//	}
//	else
//	{
//		while (sz--)//��->ǰ
//		{
//			*((char*)arr1 + sz )= *((char*)arr2 + sz);
//			//--(char*)arr1;��ʧ�� ����������
//			//--(char*)arr2;��һ����ֵʽ���Ѿ������Լ�������
//		}
//	}
//	return ret;
//}
//void arr_display(int* arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-3d", *(arr + i));
//	}
//}
////int main()
////{
////	int arr[] = { 1,2,3,4,5,6,7,8,9,0,1,2 };
////	my_memmove(arr + 2, arr , 20);
////	int i;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%-2d", arr[i]);
////	}
////	return 0;
////}
////int main()
////{
////	int arr[10] = { 0,1,2,3,4,56,4,2 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	arr_display(arr, sz);
////	memset(arr, 1, 40);
////	arr_display(arr, sz);
////	return 0;
////}
//double test(double x)
//{
//	int i;
//	double result = 0;
//	for (i = 0; i < 7; i++)
//	{
//		int z = (2 * (i + 1)) - 1;
//		result += pow(x, z) / (factorial(z) * pow(-1, i));
//	}
//	return result;
//}
//double factorial(double y)
//{
//	double j = 1,i;
//	for (i = 1; i <= y; i++)
//	{
//		j *= i;
//	}
//	return j;
//}
//double test(double x)
//{
//	double i,result = 0;
//	for (i = 1; i <= x; i++)
//	{
//		result += i / factorial(i) ;
//	}
//	return result;
//}
//int main()
//{
//	double  result, x = 7;
//	result = test(x);
//	printf("%.3lf\n", result);
//	return 0;
//}
//int main()
//{
//	double x,result;
//	scanf_s("%lf", &x);
//	result = test(x);
//	printf("%.3lf\n", result);
//	return 0;
//}
////int main()
////{
////	double x, i, n, t = -1, j, a = 1;
////	scanf_s("%lf", &x);
////	double s = x;
////	for (i = 3; i <= 19; i += 2)
////	{
////		
////		a = 1;
////		for (j = i; j >0; j--)
////		{
////			a *= j;
////		}
////		printf("%.1lf\n", a);
////		x = pow(x , i) / (a * t);
////		s = s + x;
////		t = -t;
////	}
////	printf("%.3lf", s);
////	return 0;
////}
struct st
{
	int year;//������
	char name;
	struct st* next;//ָ����
};
typedef struct stu
{
	int year;
	char name;
}stu;//�ṹ�������� 
struct stu a;
stu b;//�����ֽṹ�����������ʽ��ͬ
struct stu
{
	int year;
	char name;
	struct st c;
};//ע��ֺ�
struct 
{
	int year;
	char name;
}x;//�����ṹ�����
struct
{
	int year;
	char name;
}*p;//�ṹ��ָ��
struct stu a2;//ȫ�ֱ���
int main()
{
	struct stu a = { 12,"����" };//�ֲ�����
	return 0;
}