#include<stdio.h>
#include<errno.h>


//int main()
//{
//	//������  - ������Ϣ
//	//0       - No error
//	//1       - Operation not permitted
//	//2       - ......
//	//.........
//	//errno  һ��ȫ�ֵĴ�������� ���⺯����������ʱ�ͻὫ��Ӧ�Ĵ����븳ֵ��errno���� �Ӷ�ת��Ϊ������Ϣ
//	char* error = strerror(errno);
//	printf("%s\n", error);
//	return 0;
//}
#include<assert.h>
void* my_memcpy(void* arr2,const void* arr1,int sz)
{
	void* ret = arr2;
	assert(arr1 != NULL);//��ָ֤�����Ч�� �������ڵ�����Ϊ��ʱ �ᱨ��
	assert(arr2 != NULL);
	for (; sz > 0; sz--)//ͨ��szȷ����������������
	{
		*(char*)arr2 = *(char*)arr1;//��Ϊ������ָ�벻�ܽ�����������ͽ����ò��� ���Խ�����������ת��
		++(char*)arr1;//ͬ�� ����Ϊʲô��������++  ��Ϊ���Ϊ(char*)arr1++ ���Ƚ��� arr1++ �ٽ���(char*) ��ʱ����
		++(char*)arr2;//������ָ���޷��������� ����������ת��������
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[] = { 0 };
	//my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr1+2, arr1, 20);
	int i;
	/*int sz = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr2[i]);
	}*/
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	return 0;
}