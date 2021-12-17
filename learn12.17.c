
//int main()
//{
//	char* p = "abcdef";
//	//char arr = "abcdef";
//	char arr[9] = { 'a','b','c','f','d','e','r','w',0 };
//	printf("%d", strlen(arr));
//	return 0;
//}
#include<stdio.h>
//strcpy的模拟实现
char* my_strcpy(char* dest, const char* scr)//用指针变量接收传递过来的地址  const修饰让源代码地址不发生改变 
{
	//assert(dest != NULL);//用断言避免空指针带来的程序错误
	//assert(scr != NULL);
	char* ret = dest;//创建指针变量 通过该变量改变传递到目标空间
	//while (scr != '\0')
	//{
	//	*dest = *scr;//将源字符串赋值给目标空间
	//	dest++;
	//	scr++;
	//}
	//*dest = *scr;//循环结束的时候 *scr为\0 此表达式将\0赋值给目标空间
	while (*dest++ = *scr++)//结束循环利用最后一次赋值\0 而\0的asc码值为0 从而结束循环
	{
		;
	}
	return ret;
}
char* my_strcat(char* dest, const char* scr)
{
	char* ret = dest;
	while (dest != '\0')//找到目标空间中的\0
	{
		dest ++ ;
	}
	while (*dest++ = *scr++)//将目标空间\0后面的空间拷贝为arr2
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[50] = "abcdefadhaoihdaondwin";
	char arr2[] = "wozhenshuai";
	//my_strcpy(arr1, arr2);//传递字符数组地址到对应函数
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}