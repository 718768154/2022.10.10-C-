#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
	
		//	int main()
		//	{
		//		printf("hello bit\n");
		//	return 0;
		//}

//%d 代表打印十进制的整数
//%c 代表打印字符
//sizeof  是一个操作符，计算变量的大小


//int main()
//{
//	printf("%d\n", sizeof(char));//1字节
//	printf("%d\n", sizeof(short));//2字节
//	printf("%d\n", sizeof(int));//4字节
//	printf("%d\n", sizeof(long));//4字节
//	printf("%d\n", sizeof(long long));//8字节
//	printf("%d\n", sizeof(float));//4字节
//	printf("%d\n", sizeof(double));//8字节
//
//	return 0;
//}

	//int main()
	//{

	//	char ch = 'w';
	//		printf("%c\n", ch);
	//	return 0;
	//}

			//float weight = 75.6f;	
			//double pai = 3.14;
			//char ch = 'w';
			//int age = 18;
			//double salary = 20000.0; 
	        //定义变量的方法

//int main()
//{
//
//	int m = 0;
//	int n = 0;//创建变量的时候记得给一个初始值，这是一个好的习惯
//	printf("%d\n", n);
//	return 0;
//
//}


//变量的命名
//只能由字母（包括大写和小写）、数字和下划线（ _ ）组成。
//不能以数字开头。
//长度不能超过63个字符。
//变量名中区分大小写的。
//变量名不能使用关键字。


	//1.局部变量
	//	int main()
	//	{
	//		int a = 0;

	//		printf("%d\n", a);
	//		return 0;

	//	}
	//2.全局变量
	//	int a = 0;
	//	int main()
	//	{

	//	int a = 1; //变量冲突是部优先,这是一个不好的习惯，建议避免这种错误
	//	printf("%d\n", a);
	//	return 0;

	//	}

//scanf是一个库函数，可以直接进行通过键盘接收数据

//例如写一个输入两个数的和

//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//通过键盘输入数据
//	scanf_s("%d %d", &num1, &num2);
//	//两个数相加求和
//	sum = num1 + num2;
//
//	printf("sum = %d\n", sum);
//	//最后打印两个数所求的和的值
//	return 0;
//
//}


//注释类似scanf 这种函数的出错问题
	/*
	scanf
	stracpy
	strcat
	... 这些函数VS 都会提示不安全
	为了能够安全，我们在.c 的第一行加入头文件函数 #define _CRT_SECURE_NO_WARNINGS 1
	为了一劳永逸的解决以后的问题

	我们可以在newc++file.cpp 这个文件中加入：#define _CRT_SECURE_NO_WARNINGS 1
	以后新建的文件中都会自动加上：#define _CRT_SECURE_NO_WARNINGS 1
	*/


//总结
	//1.第一个C语言程序（hello word bit）

	//2.数据类型

/*
	char        //字符数据类型
	short       //短整型
	int         //整形
	long        //长整型
	long long   //更长的整形
	float       //单精度浮点数
	double      //双精度浮点数
	(char:1 short:2 int:4 long:4 long long:8 float:4 double:8)   单位byte 1byte(字节）=8bit（比特位）1KB = 1024 byte
*/

	/*
	3.1变量、常量

	3.2	定义变量的方法
	int age = 150;
	float weight = 45.5f;
	char ch = 'w';

     3.3变量的命名   

	 3.4变量的分类
	 全局变量和局部变量

这里介绍一下输入，输出语句目前用到的两个scanf ，printf
	*/