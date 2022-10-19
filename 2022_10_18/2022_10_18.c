#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//int float;//关键字不能被定义成变量
//	typedef unsigned int u_int;
//	//typedef - l类型定义 - 类型重定义
//	unsigned int nnum = 20;//全写
//	u_int num2 = 20;//缩写
//	//张三 - 小三 
//	return 0;
//}



// static修饰局部变量改变了变量的生命周期
//让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束。

//void test()
//{
//	static int a = 1//修饰局部变量--称为静态局部变量
//		int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使用。
//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d", g_val);
//	return 0;
//}


////一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用。
//extern int Add(int,int);
////声明- 声明外部符号的
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//#define 定义标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}


//函数的定义①
//int Max(int x,int y)
//{
//	if (x > y)
//
//	return x;
//	else
//	return y;
//}


//#define 还可以定义宏②
//#define Max(X,Y)(X>Y ? X : Y)//宏的定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//int* 是p 的类型； p现在是一个指针变量，p变量存的是a 的地址
//	//printf("%p\n", p);
//	//printf("%p", &a);
//	*p = 20;//【*】表示解引用操作符; 这里通过*p 找到它 所指向的对象 a的值 然后改成20
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//当前64位平台计算出pc 字节大小是8字节；若是32位平台，计算出pc字节大小是4字节
//
//	//*pc = 'a';
//
//	//printf("%c\n", ch);
//	return 0;
//}

int main()
{

	double d = 3.14;
	double* pd = &d;
	*pd = 5.66;
	printf("%lf\n", *pd);
	printf("%lf\n", d);
	//int a = 10;
	//printf("%p\n", &a);
	//int* p = &a;//p 是一个指针变量

	//printf("%p\n", p);
	//*p;//解引用操作符，间接访问操作符
	return 0;

}