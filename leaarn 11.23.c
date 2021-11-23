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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	//打印结果为 -1 -1 255
	//10000000000000000000000000000000001a的原码
	//10000000000000000000000000000000001b的原码
	//11111111111111111111111111111111111c的补码
	//但是为char类型 只有一个字节八个比特位 所以11111111为补码
	return 0;
}