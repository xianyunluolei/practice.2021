#include<stdio.h>
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;
}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	//��ӡ���Ϊ -1 -1 255
	//10000000000000000000000000000000001a��ԭ��
	//10000000000000000000000000000000001b��ԭ��
	//11111111111111111111111111111111111c�Ĳ���
	//����Ϊchar���� ֻ��һ���ֽڰ˸�����λ ����11111111Ϊ����
	return 0;
}