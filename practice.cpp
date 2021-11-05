#include<stdio.h>


//int main()// - 程序从这里开始运行
//{
//	printf("赵凌云\n");
//	printf("性别:男\n");
//	printf("年龄:");
//	int age = 20;//20： 变量的一个初始值
//	printf("%d\n", age);
//	printf("身高:");
//	int c = 178;
//	printf("%d\n", c);
//	printf("体重:");
//	int weight = 55;
//	printf("%d\n", weight);
//	printf("我要起飞\n");
//	int a2 = 10;//局部变量-定义在程序块内( {} )内的变量
//	//局部变量最好不要与全局变量相同避免识别错误出现bug
//	printf("我还要非，飞出非洲 拥抱欧洲大陆\n");
//	printf("我的梦想是，不做一个简简单单的程序员\n");
//	printf("而且还要在未来四年的大学生活中过的开开心心");
//	printf("我想要拿到奖学金。试试做一做班委什么的\n");
//	printf("%d\n", sizeof(char));// -1字节//size of -()内的大小
//	printf("%d\n", sizeof(short));// -2字节
//	printf("%d\n", sizeof(long));// -4 / 8字节
//	printf("%d\n", sizeof(long long));// -8字节
//	printf("%d\n", sizeof(float));// -4字节
//	printf("%d\n", sizeof(double));// -8字节
//	printf("%d\n", sizeof(int));//-4字节
//	short int cu = 12324;
//	printf("%d\n", cu);
//	double lf = 3.14;
//	printf("%lf\n", lf);
//	return 0;
//}
		/*数据类型
			int 整型% d
			char 字符% c
			float 单精度浮点型% f
			double 双精度浮点型% lf
			long int 长整型% d
			short int 短整型% d*/
			//计算机单位
			//bit - 比特位//最小单位开辟的空间仅容纳二进制中的0或1
			//byte - 字节//8个比特位的大小
			//kb//1024字节
			//mb//1024kb
			//gb//以此类推
			//tb//
			//pb//
			//3个比特位 2的3次方种结果 - 000 001  010 011 100 101 110 111
			//同理8个比特位 2的8次方种结果
		///*int z = 0;
		//int y = 0;
		//int x = 0;
		//scanf_s("%d%d", &y, &z);//数组不用&声明
		//x = y + z;
		//printf("x = %d\n", x);
		//未声明的标识符
		//声明标识extern
		///*extern int like;
		//printf("%d\n", like);*/
		//1.字面常量 如3 4 5
		//2.常变量 具有常量属性的变量,本质依旧是变量 如用const修饰的常变量：const int n = 4
		//3.#define定义的标识符常量
int add(int x, int y)//其中add可以用任何字母代替(包括jia) 不区分大小写 只是命名采用英文更浅显易懂 add为函数名 int x int y为参数
{
	int z = x + y; //大括号内的代码为函数集
	return z; //返回一个整形
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = add(num1, num2); //放进add函数将num1与num2传入int x中进行计算 然后int z又传入放进sum
		printf("%d\n", sum);
	return 0;
}
/*#include<stdio.h>


int max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
int main()
{
	int a, b, c;
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	c = max(a, b);
	printf("%d\n", c);
	return 0;
}*/
/*#include<stdio.h>
// define 的用法
// #define max 100 //1.定义标识符常量
// 2.定义宏
// 
//(1)函数的方式
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//(2)宏的方式
#define MAX(x,y) (x>y?x:y)
#define add(x,y) ((x)+(y))
#define che(x,y) ((x)*(y))
#define chu(x,y) ((x)/(y))
int main()
{
	int a = 40;
	int b = 10;
	int c = 0;
	c = max(a, b);
	printf("%d\n", c);
	c = MAX(a, b);
	printf("%d\n", c);
	c = chu(a, b);
	printf("%d\n", c);
	return 0;
}*/

/*struct Book
{
	char name[20];
	int money;
};
//结构体 我们自己创造的一种类型类似于int char
int main()
{
	struct Book a = { "悲惨世界",30 };
	struct Book* p = &a;
	printf("%s\n", (*p).name);
	return 0;
}*/

/*我喜欢你!
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

你真可爱!
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


我真帅!
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
}*/
