#include<stdio.h>
//int main()
//{
//	int menoy = 20;
//	int total = menoy;
//	int empty = menoy;
//	while (empty >=2 )
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//ȡ���ʱ��û�п��ǵ� �ش�ʧ��
//	}//д�����ʱ�� �෽�濼�� ��Ƕȿ��� �Ų����bug
//	printf("%d", total);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hello word");
//	}//�������ѭ�� ԭ����ʲô��
//	//���������������Сʱ arr[i]=0;�Ĳ����Ὣ0��ֵ��i ����i=0����� ���Ի�������ѭ��
//	return 0;
//}
void quick(int arr[],int begin,int end)
{
		int left = begin;
		int right = end-1;
		int tmp = arr[right];
		while (left < right && arr[left] % 2 != 0)
		{
			left++;
		}
		arr[right] = arr[left];
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		arr[left] = arr[right];
		arr[right] = tmp;
		//quick(arr, 0, 10);
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		
		while ((left<right) && (arr[right]% 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] == arr[right];
			arr[right] == tmp;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	/*for (i = 0; i < 10; i++)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");*/
	//quick(arr,0, 10);
	move(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%-2d", arr[i]);
	}
	return 0;
}