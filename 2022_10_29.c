#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//int main()
//{
//	//字符串拷贝
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit!";
//	//把arr2 数组中的元素拷贝到 arr1 数组中
//	char* ret =strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//memset 函数的用法：指向arr内存块，使用‘6’单个字符替换前五个字符
//int main()
//{
//	char arr1[20] = "hello bit ！";
//	printf("%s\n", arr1);
//	memset(arr1, "6", 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//写一个函数，找出两个整数的较大值
// 简写
//return (x > y) ? (x) : (y);
//int  get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);//传值调用:函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//	printf("最大值是%d", max);
//	return 0;
//}

// void test(void)
////第一个void 函数调用完后什么都不需要返回，第二个void 表示没有参数。调用的时候不能传参
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

//写一个函数交换两个数的值
//没有用到函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d b = %d\n", a, b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}


//用到函数的写法，错误演示
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}//如果输入3 5 得出的结果都是 a = 3 .b = 5,
////这是因为 Swap() 函数调用的时候，下面的 a和b 的实参传给上面函数里面 x和y 的形参，这时候的形参是实参临时拷贝的一份，对形参的修改不影响实参
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d b = %d", a, b);
//
//	Swap(a,b);//传值调用:函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//	printf("交换后：a = %d b = %d", a, b);
//	return 0;
//
//}

//用到函数的写法，正确演示
//void Swap(int*pa, int*pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d b = %d\n", a, b);
//
//	Swap(&a,&b);
//
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//
//}

//使用函数打印100 - 200 之之间的素数
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//不是素数
//		}
//	}
//	return 1;//是素数
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i ++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是否是闰年

//int is_leap_year(int n)
//{
	//if (((0 == n % 4) && (n % 100 != 0)) || (0 == n % 400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//简写 调用 函数部分
//int is_leap_year(int n)
//{
//	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	for (y = 2000; y <= 2100; y++)
//	{
//		if (is_leap_year(y))
//		{
//			printf("是闰年：%d\n", y);
//		}
//	}
//	return 0;
//}

//比特教育系统 2022-10-29_函数等_作业 第十题：任意输入一个数打印乘法口诀表
#include <windows.h>
void print(int n)
{
    int x = 0;
    for (x = 1; x <= n; x++)
    {
        int y = 0;
        for (y = 1; y <= x; y++)
        {
            int z = 0;
            z = x * y;
            printf("%d*%d=%2d ", y, x, z);
            //%2d是将数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补空格
        }
        printf("\n");
    }
    return;
}

int main()
{
    int n = 0;
    printf("请输入行数：");
    scanf("%d", &n);
    print(n);
    system("pause");//防止命令一闪而过
    //system（）就是调用（DOS）系统命令（和shell命令），pause ，即DOS命令集合中的暂停命令；
    return 0;

}