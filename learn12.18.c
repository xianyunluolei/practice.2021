#include<stdio.h>
#include<assert.h>
////�����ַ�������strstr ��ģ��ʵ��
//char* my_strstr(const char* arr1,const char* arr2)//const���ζ�ԭ�ַ������б���
//{
//	assert(arr1 != NULL);//
//	assert(arr2 != NULL);
//	char* s1;
//	char* s2;
//	char* tmp = (char*)arr1;//����ת�� �������
//	if (arr2 == '\0')
//	{
//		return (char*)arr1;
//	}
//	while (tmp)//����ʵ�ֹ���
//	{
//		s1 = tmp;//������ʶ ������ڶ�ѭ����δȫ���ҳ������Ӵ�����ʱ ���һ�֮ǰ�Ľ���
//		s2 = (char*)arr2;//����arr1 > abbcd  arr2 > bcd 
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//�ɼ�Ϊ(*s1 && *s2 && (*s1==*s2))
//		{//�����Ӵ�  ע���ж������== ������=
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return tmp;//�ҳ��Ӵ�
//		}
//		tmp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abceesf";
//	char arr2[] = "esf";
//	char *ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û���ҵ���Ӧ�Ӵ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
int main()
{
	char arr[] = "Famous-CV-engineer.com";
	char p[] = "-.";
	char* ret = NULL;
	//�Ƚϼ�ª��strtok����ʹ�÷���  �鷳 ����
	/*ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);
	
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
	//����ѭ���ķ�ʽ ���κ�����ȡ������ָ��
	for (ret = strtok(arr, p)/*��ʼ��*/; ret != NULL/*��������*/; ret = strtok(NULL, p)/*�ٴθ�ֵ*/)
	{
		printf("%s\n", ret);
	}
	return 0;
}