#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//这种由双引号""（Double Quote）
//引起来的一串字符称为字符串字面值（String Literal），或者简称字符串
//int main() 
//{
//	"avcdef";
//	"3.14";
//	"";//空字符串
//	return 0;
//}


//int main()

//{
//	//char 字符串类型
//	char arr1[] = "abc";//数组
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	// ASCLL 编码 ‘a'-65 
//	// 计算机存储的时候是以2进制存储
//	//注：字符串的结束标志是一个 \0 的转义字符
//	//在计算字符串长度的时候 \0 是结束标志，不算作字符串内容
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
// }


//#include<string.h> //strlen所需要的头文件

//int main()
//{
//	char arr1[] = "abc";//arr1数组放的字符串"abc"
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//strlen -string length - 计算字符串长度
//	//计算出来第一个arr1 = 3
//	//第二个arr2计算出来是一个随机值，因为char arr2[] = {里面没有结束标志‘\0’}
//
//
//	return 0;
//}

//int main()
//{
//	printf("abc\n");//  【\n】 ：换行
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");//【\】拆散他的定义,防止它被解释为一个转义序列符而被转义
//	// 【\t】：水平制表符
//	return 0;
//}

/*
#include<string.h>//strlen所需要的头文件
// 【\ddd】 ddd表示1~3个八进制的数字。 如： \130 -【 X】
int  main()
{

	//printf("%c\n", '\x61');//【\xdd】 dd表示2个十六进制数字。 如： \x61 -ASCLL 码值-a
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//printf("%c\n", '\32');
	//  %c：（打印字符）打印3 2 的ASCLL 码值
	//32-- 表示八进制的数字3 2
	//32 转换 成 10进制的数是26
	return 0;
}
*/

//int main()
//{
//    int  input = 'n';
//
//	printf("上大学之后\n");
//	printf("你要好好学习吗？(y/n)>:");
//	scanf("%c", &input);//输入y或者n
//	if (input == 'y')
//		printf("祝你拿到一个好offer\n");
//	else
//		printf("回农村卖红薯！\n");
//	return 0;
//}

//【%c】单个字符输出的意思
//【%s】是输出字符串
//【%d】是输出整型
//【%f】是输出整型


//C语言中如何实现循环呢？
//while语句 - 讲解
	 // int main()
	 //{
		//
		//printf("选的软件工程专业\n");

		//int line = 0;
		//while (line =< 20000)
		//{
		//	printf("敲一行有效代码代码:%d\n", line);
		//	line++;//line表示行，++ 表示加1；所以就是表示行数加1

		//}
		//if (line > 20001)
		//	printf("恭喜你掌握基础C语言知识\n");
		//return 0;
	 // }



/*
int Add(int num1, int num2)//  int：返回的类型；Add：函数名；Add()括号里面表示函数的参数
{
	//Add:自定义函数
	int z = num1 + num2;
	return z;//返回int类型，值是z
}
//{}里面写的叫函数体,是给下面main函数里面的解决方式，函数复用

int main()
{
	int num1 = 0;
	int num2 = 0;
	int z = 0;
	//int a = 100;
	//int b = 200;
	printf("输入两个整数:\n");
	scanf("%d %d", &num1, num2);
	//sum = num1 + num2;
	z = Add(num1, num2);

	//sum = a+ b;
	//z = Add(a, b);
	printf("z = %d\n", z);
	return 0;
}
*/


//函数的特点就是简化代码，代码复用,避免繁琐，运行缓慢
/*
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
上述代码，写成函数如下：


int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}
*/


/*
	int main()
	{
		//int a = 1;
		//ing b = 2;
		//int c = 3;
		//int d = 4;
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	 //定义一个存放10个整数数字的数据;如果数组10个元素，下标的范围是0-9
	 //C语言规定：数组的每个元素都有一个下标，下标是从0开始的
	 //printf("%d\n", arr[5]);//arr[5]括号里面是下标5；可以通过下标5来访问出数组是6
		int i = 0;
		while (i < 10)
		{
		printf("%d\n", arr[i]);
		i++;
		}

		//char ch[20];
		//float arr[5];
		//short arr[1];
		//double arr[5];

		return 0;
	}
	*/
