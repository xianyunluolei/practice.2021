#include<stdio.h>
#include<errno.h>


//int main()
//{
//	//错误码  - 错误信息
//	//0       - No error
//	//1       - Operation not permitted
//	//2       - ......
//	//.........
//	//errno  一个全局的错误码变量 当库函数发生错误时就会将对应的错误码赋值给errno变量 从而转化为错误信息
//	char* error = strerror(errno);
//	printf("%s\n", error);
//	return 0;
//}
#include<assert.h>
void* my_memcpy(void* arr2,const void* arr1,int sz)
{
	void* ret = arr2;
	assert(arr1 != NULL);//保证指针的有效性 当括号内的条件为假时 会报错
	assert(arr2 != NULL);
	for (; sz > 0; sz--)//通过sz确定拷贝的内容数量
	{
		*(char*)arr2 = *(char*)arr1;//因为无类型指针不能进行整数运算和解引用操作 所以将它进行类型转换
		++(char*)arr1;//同理 但是为什么不用左结合++  因为如果为(char*)arr1++ 则先进行 arr1++ 再进行(char*) 此时由于
		++(char*)arr2;//无类型指针无法进行运算 所以先类型转化再自增
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