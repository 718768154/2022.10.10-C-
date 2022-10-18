#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//牛客网 求两个数的较大值
	/*int main()
	{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	printf("较大值：%d",a);
	else
	printf("较大值：%d",b);
	return 0;
	}*/

	//牛客网 求两个数的较大值(使用函数)

//int Max(int x, int y)
//{
//	if (x > y)
//	return x;
//	else
//	return y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//牛客网 判断2个数的大小
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d=%d\n", a, b);
//	}
//	return 0;
//}

 //牛客网判断整数奇偶性
// int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	//while (~scanf("%d", &a)) 等价于 while (scanf("%d", &a) != EOF)
//	{ 
//	printf("%s\n", a%2 == 1 ? "Odd" : "Even");
//	}
//	return 0;
//}


//牛客网判断及格分数
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	{
//		printf("%s\n", (a >= 60) ? "Pass" : "Fail");
//	}
//	return 0;
//}

//牛客网 ①判断完美成绩
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	{
//
//		printf("%s\n", (a <= 100 && a >= 90) ? "perfect" : "");
//	}
//	return 0;
//}
// 
//牛客网 ②判断完美成绩
//int main()
//{
//	int grade;
//	while (scanf("%d", &grade) != EOF)
//	{
//		if (grade >= 90 && grade <= 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//	return 0;
//}


/*
int a = 0;
int b = ~a;//按位取反
结论：
1.正数的原码 = 反码 = 补码
2.负数的反码 = 在其原码的基础上, 符号位不变，其余各个位取反
3.负数的补码 = 在反码的基础上 + 1
4.负数的补码 = 在原码的基础上, 符号位不变, 其余各位取反, 最后末位 + 1
*/


//int main()
//{
//	int a = 10;
//	//int b = a++;//先使用a的值+1，再把a初始值赋值给b  ; 所以得出的答案是a=11,b=10
//	int b = ++a;//先使用a的值+1，再把a+1的值赋值给b；所以得出答案是a=11,b==11
//
//	//--前置、后置--
//	//++前置、后置++
//
//	printf("a = %d\nb = %d\n",a, b);
//	return 0;
//}

//int main()
//{
//	//&& 逻辑与 : 代表两端的值全部为真才为真(1),否则为假（0）
//	//|| 逻辑或 : 代表两端的值全部为假才为假(0)，否则为真（1）
//	int a = 0;
//	int b = 0;
//	//printf("%d\n", a && b);
//	//printf("%d\n", a || b);
//
//	return 0;
//}
//
////函数体
//int Add(int x, int y) 
//{
//	int z = 0;
//	z = (x + y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int arr[10] = { 0 };
//	//arr[10];下标引用操作符【[]】
//
//	int sum = Add(a, b);//函数体调用
//	printf("%d\n", sum);
//	return 0;
//}