
//int main()
//{
//	char* p = "abcdef";
//	//char arr = "abcdef";
//	char arr[9] = { 'a','b','c','f','d','e','r','w',0 };
//	printf("%d", strlen(arr));
//	return 0;
//}
#include<stdio.h>
//strcpy��ģ��ʵ��
char* my_strcpy(char* dest, const char* scr)//��ָ��������մ��ݹ����ĵ�ַ  const������Դ�����ַ�������ı� 
{
	//assert(dest != NULL);//�ö��Ա����ָ������ĳ������
	//assert(scr != NULL);
	char* ret = dest;//����ָ����� ͨ���ñ����ı䴫�ݵ�Ŀ��ռ�
	//while (scr != '\0')
	//{
	//	*dest = *scr;//��Դ�ַ�����ֵ��Ŀ��ռ�
	//	dest++;
	//	scr++;
	//}
	//*dest = *scr;//ѭ��������ʱ�� *scrΪ\0 �˱��ʽ��\0��ֵ��Ŀ��ռ�
	while (*dest++ = *scr++)//����ѭ���������һ�θ�ֵ\0 ��\0��asc��ֵΪ0 �Ӷ�����ѭ��
	{
		;
	}
	return ret;
}
char* my_strcat(char* dest, const char* scr)
{
	char* ret = dest;
	while (dest != '\0')//�ҵ�Ŀ��ռ��е�\0
	{
		dest ++ ;
	}
	while (*dest++ = *scr++)//��Ŀ��ռ�\0����Ŀռ俽��Ϊarr2
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[50] = "abcdefadhaoihdaondwin";
	char arr2[] = "wozhenshuai";
	//my_strcpy(arr1, arr2);//�����ַ������ַ����Ӧ����
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}