#include<stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* p1 = &a;
//	char* p2 = &a;
//	printf("%p\n", p1);
//	printf("%p\n", p1);
//
//	return 0;
//}
//指针的数组赋值
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *p);
//		printf("%p\n", p);
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;//因为这里是动态储存空间，离开函数范围便会销毁
//	return &a;
//}
//int main()
//{
//	int* p = test();//可能导致野指针 当函数调用结束后 a的空间被销毁
//	*p = 20;//这时通过指针对a的只进行修改时就会发现a的空间已经被销毁
//	printf("%d", *p);
//	return  0;
//}
//我喜欢你!
#include<stdio.h>
#include<iostream>

int main()
{
	int i;
	int b[] = { 32,32,206,210,207,178,187,182,196,227,33,32,32 };
	for (i = 0; i < 13; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}

//  你真可爱!  
#include<stdio.h>

int main()
{
	int i;
	int b[] = { 32,32,196,227,213,230,191,201,176,174,33,32,32 };
	for (i = 0; i < 13; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}

#include<stdio.h>

int main()
{
	int a = 64;
	int b = 0;
	scanf_s("%d", &b);
	int c = a + b;
	printf("%c", c);
	return 0;
}


//  我真帅!  
#include<stdio.h>

int main()
{
	int i;
	int b[] = { 32,32,206,210,213,230,203,167,33,32,32 };
	int c = sizeof(b) / 4;//  /sizeof(int)所有数据字节数除以一个数据的字节数
	//printf("%d\n",c);
	//for (i=0;i<c;i++);
	for (i = 0; i < sizeof(b) / 4; i++)
	{
		printf("%c", b[i]);
	}
	printf("");
	return 0;
}