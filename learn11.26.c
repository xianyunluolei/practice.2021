#include<stdio.h>
#define ROW 3
#define COL 3
void comper(int arr[])
{

}
int main()
{
	int i, j;
	int arr[ROW][COL];
	int array[ROW];
	//����Ķ�ά�����ʼ������
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			arr[i][j] = 1;
		}
	}
	//����ָ����ж�ά����ĳ�ʼ��
	int* p;
	for (p = &arr[0][0]; p <= &arr[ROW-1][COL-1]; p++)
	{//����ά���鵱��һά������г�ʼ�� ͨ��ָ���������б���
		*p = 2;
	}
	//����Ϊ���������Ĵ������� �õ����ٵı��� ���ǿɶ����½��˲���
	//�������ɲ����ر���ʹ��
	//������������м�
	for (i = 0; i < ROW; i++)
	{
		for (p = arr[i]; p <= arr[i] + COL - 1; p++)
		{//��Ϊ�ڶ�ά������arr[i]��ʾ��i�е�һ��Ԫ�ص�ָ��
			*p = 3;
		}
	}//�������о����Ѷ�������  �ô��ѵ��Ǵ�������٣�
	
	for (p = &arr[0][0]; p <= arr[ROW- 1] + COL - 1; p++)
	{
		printf("%-2d", *p);
	}
	comper(array);
	return 0;
}