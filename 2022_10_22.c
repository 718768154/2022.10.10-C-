#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<string.h>


//初识C语言结构体
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55元
//
//};
//
//int main()
//{
//	
//	struct Book b1 = { "C语言程序设计",55 };
//
//	strcpy(b1.name,"C++");//strcpy :string - copy 字符串拷贝；这里的意思是把"C++"字符串拷贝到name里面去
//	//strcpy 是一个库函数，所以需要定义头文件#include<string.h>
//	printf("更改后的书名%s\n", b1.name);
//
//	//b1.name = "C++";name是一个数组名：char name[20]，不能重新定义
//	//b1.price 是一个变量，可以重定义
//	
//
//	//struct Book* pb = &b1;//struct Book* 就是一种指针类型，定义了pb(变量)，指向b1
//	//利用指针定义的变量屏pb 打印书名价格
//
//	//printf("%s\n", (*pb).name);// *pb先解引用操作，在找到它的成员name
//	//printf("%d元\n", (*pb).price);
//
//	//更简单的写法
//	//printf("%s\n", pb->name);//【.】使用方法：结构体变量.成员
//	//printf("%d元\n",pb->price);//【->】使用方法：结构体指针->成员
//
//
//	//printf("书名：%s\n", b1.name);
//	///printf("价格：%d元\n", b1.price);
//	///b1.price = 15;
//	///printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}


//int main()
//{
//	int age;
//
//	scanf("%d", &age);
//	if (age < 16)
//		printf("少年\n");
//
//	else if (age >= 16 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 56)
//		printf("壮年\n");
//	else if (age >= 56 && age < 80)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}

//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("已成年");
//		printf("可以谈恋爱");
//		//if 里面默认只有一条语句，如果有多条语句，需要加上大括号{}：代码块
//	}
//	else 
//	{
//		printf("未成年");
//	printf("不能谈恋爱");
//	}
//	return 0;
//}


//适当的使用{}可以使代码的逻辑更加清楚。
//代码风格很重要
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//		if (b == 1)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	//else的匹配：else是和它离的最近的if匹配的。
//	return 0;
//}


//更正
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//     {
//		if (b == 1)
//		printf("hehe\n");
//     }
//	else
//	{
//        printf("haha\n");
//	}
//	//else的匹配：else是和它离的最近的if匹配的。
//	return 0;
//}

//判断输入的一个数是否是奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//
//		printf("奇数\n");
//	}
//	else
//	{
//
//		printf("不是奇数\n");
//	}
//	return 0;
//}


//输入1-100的奇数
//法1
//int main()
//{

//	//1.循环先产生1-100的数字
//	//2.判断产生的数字是否是奇数
//	//3.是奇数就打印
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//		}
//		num++;//每次+1，判断产生的数 取模 是否=1
//	}
//	return 0;
//}

//法2
//int main()
//{
//	int num = 1;
//	while(num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;//num初始值1开始，每次+2，所产生的结果就是奇数
//	}
//	return 0;
//}

//switch语句

//用if语句表述星期
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//	{
//		printf("星期%d\n", day);
//	}
//	else if (day == 2)
//	{
//		printf("星期%d\n", day);
//	}
//	//....等等
//	return 0;
//}

//用switch语句表述星期

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//
//	case 3:
//		printf("星期三\n");
//		break;
//
//	case 4:
//		printf("星期四\n");
//		break;
//
//	case 5:
//		printf("星期五\n");
//		break;
//
//	case 6:
//		printf("星期六\n");
//		break;
//
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		
//	case 2:
//		
//	case 3:
//		
//	case 4:
//		
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}


//switch (整型表达式) {
//	语句项；
//}

//是一些case语句：
//如下：
//case 整形常量表达式:
//	语句;

#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}