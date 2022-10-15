//#include<stdio.h>
//
//int main()
//{
//
//printf("     **\n");
//printf("     **\n");
//printf("************\n");
//printf("************\n");
//printf("    *  *\n");
//printf("    *  *\n");
//
//return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//    int main()
//    {
//        int iq;
//        scanf("%d", &iq);
//        if (iq >= 140)
//        printf("Genius");
//        return 0;
//    }

//#include <stdio.h>
//
//int main() {
//
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//
//	return 0;
//
//}


/*
* //局部变量的作用域就是当前代码块内的范围
* //不是所有的局部变量都放在main()函数里面的
	#include<stdio.h>

	int main()
	{

		int num = 0;//定义局部的变量
		{
		int num = 0;//定义指定代码块的作用域
		printf("num = %d\n", num);

		}
		return 0;
	}

	*/

	/*#include<stdio.h>
	全局变量的作用域是整个程序
	int global = 2022;

	void test() {



	printf("test--%d\n", global);
	}

	int main()
	{

	test();
	printf("%d", global);
	return 0;

}*/

/*
//外部文件定义变量
#include<stdio.h>
int main()
{
	//未声明的标识符
	//声明extern 单纯声明变量g_val(外部符号）

	extern int g_val;
	printf("g_val = %d\n", g_val);

return 0;
}

*/
	

//#include<stdio.h>
//int main()
//{
//	int num = 1;//赋值常量
//	5;
//	100;
//	3.14;//字面常量
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//const 常属性 
//	const int n = 10;// n 是变量，但又是常属性，所有他是常变量
//	//int arr[n] = {0};
//	n = 20;
//
//
//	//const常属性， 修饰的常变量，让他不再变
//	//const int num = 4;//const 修饰num常变量，num变量无法再变
//	//printf("%d\n", num);
//
// //   num = 8;//num被const修饰后，num变量无法再变
//	//printf("%d\n", num);
//
//	return 0;
//}



//
//#include<stdio.h>
//#define MAX 10//#define 定义的标识符常量
//int main()
//{
//	int arr[MAX] = {10};
//	printf("%d\n", MAX);
//	return 0;
//}



//枚举常量enum
//枚举表示一一列举

//性别：男，女，保密
//三原色 红，黄，绿
//星期 1.2.3.4.5.6.7


#include<stdio.h>

//枚举关键字 -- enum

//enum Sex
//{
//	MALE，
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET--枚举常量
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

enum Color
{
	RED,
	YELLOW,//大括号里面定义的枚举常量不能改变
	BLUE//--枚举常量
};

int main()
{
	enum Color color = BLUE;
	color = YELLOW;//但是通过枚举创造出来的变量(color)是可以改变的
	BLUE = 6;//枚举常量不能改变
	return 0;
}

