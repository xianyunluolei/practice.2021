#include<stdio.h>
#include<assert.h>
////查找字符串函数strstr 的模拟实现
//char* my_strstr(const char* arr1,const char* arr2)//const修饰对原字符串进行保护
//{
//	assert(arr1 != NULL);//
//	assert(arr2 != NULL);
//	char* s1;
//	char* s2;
//	char* tmp = (char*)arr1;//类型转换 解除警告
//	if (arr2 == '\0')
//	{
//		return (char*)arr1;
//	}
//	while (tmp)//核心实现过程
//	{
//		s1 = tmp;//设立标识 当进入第二循环但未全部找出对于子串内容时 可找回之前的进程
//		s2 = (char*)arr2;//比如arr1 > abbcd  arr2 > bcd 
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//可简化为(*s1 && *s2 && (*s1==*s2))
//		{//检索子串  注意判定相等是== 而不是=
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return tmp;//找出子串
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
//		printf("没有找到对应子串。\n");
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
	//比较简陋的strtok函数使用方法  麻烦 繁杂
	/*ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);
	
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
	//运用循环的方式 依次函数中取出各段指针
	for (ret = strtok(arr, p)/*初始化*/; ret != NULL/*限制条件*/; ret = strtok(NULL, p)/*再次赋值*/)
	{
		printf("%s\n", ret);
	}
	return 0;
}