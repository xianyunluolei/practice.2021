#include<stdio.h>
//int main()
//{
//	char*p;
//	p = "abc";
//	char a;
//	a = "abc"[2];
//	printf("%s", p);
//	printf("%c", a);
//	return 0;
//}
//int my_strlen(char a)
//{
//	int i;
//	char* p = a;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if ((*p+i) == '\0')
//		{
//			break;
//		}
//		else
//		{
//			count++;
//		}
//	}
//	return count;
//}
int my_strlen(char a[])
{
	int count = 0;
	char* p = a;
	while (*p++ != '\0')
	{
		count++;
	}
	return count;
}
int my_strlen1(char a)
{
	int count = 0,i;
	char* p = a;
	for (i = 0; i < 100; i++)
	{
		if (*(p + i) == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}
}
int my_strlen2(char* p)
{
	int count = 0;
	while (*p++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{	//printf('\n');//���Ϸ� ���ǲ�֪��Ϊʲô���Ϸ�  Ŷ�����printf��Ҫ�õ��ַ���  ���������õ����ַ�

	char *a = "abcdefg";
	printf("a���ַ�������Ϊ��%d",my_strlen2(a));
	return 0;
}

