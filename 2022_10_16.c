#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//牛客网计算y的值
//#include<stdio.h>
//int main() {
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else y = -1;
//    printf("%d", y);
//    return 0;
//}


//牛客网计算带余除法
//int main() {
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}


//牛客网被5整除问题
//int main() {
//    int M = 0;
//    scanf("%d", &M);
//
//    if (M % 5 == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}


//C语言中所用到的操作符

//int main()
//{
//	int a = 5 / 2;//【/】除号
//	int a = 5 % 2;//【%】取模，取余数
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//<<左移操作符；向左移动的2进制中的x位
//	//>>右移操作符；向右移动的2进制中的x位
//	int a = 1;
//	//int 整型 1 占 4个 byte（字节）= 32 bit (比特位)
//	//000000000000000000000000000000001 【32位】
//	return 0;
//}


 /*
	int main()
	{
		// (2进制)位操作
		// & 按位与 : 二进制转换后，对应的二进制位，有0则为（0）假，全1则为（1）真
		// | 按位或 ：二进制转换后，对应的二进制位，有1则为（1）真，全0则为（0）假
		// ^ 按位异或：二进制转换后，对应的二进制位，相同则为假（0），相异则为真（1）


		int a = 3;
		int b = 5;
		//int c = a & b;//按位与
		//int c = a | b; //按位或
		int c = a ^ b; //按位异或

		printf("%d\n", c);
		return 0;
	}
  */

	//int main()
	//{
	//	int a = 10;
	//	a = 20;//表示赋值，一个值赋值给变量a
	//	a == 20;//判断是否相等

	//	a = a + 10;//a加上个10再赋值给a
	//	a += 10;//a自身加个10
	//	//这两种写法都相等同

	//	a -= 20;//a自身减个10
	//	a = a - 20;//a减上个10再赋值给a
	//	//这两种写法都相等同

	//	a = a & 2;
	//	a &= 2;
	//	//以上都是复合赋值符
	//	//+= -= *= /= %= <<= >>= &= |= ^=
	//	return 0;
	//}

//int main()
//{
//	int a = 10;
//	//int b = 20;
//	//a + b;//加号两边都是操作数，所以+又叫双目操作符
//	 //顾名思义，单目操作符只有一个操作符
//	//三目操作符就是 三个操作数
//
//	//在C语言中！表示逻辑反操作;真（非0）变假，假（0）变真（1）
//	//0-假 ； 非0-真
//	printf("%d\n", a);
//	printf("%d", !a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//计算变量
//	//sizeof 计算的是变量/类型所占空间的大小，单位是字节 byte
//	printf("%d\n", sizeof(int));//计算类型
//	printf("%d\n", sizeof a);//计算变量的时候sizeof()的括号可以省略
//	printf("%d\n", sizeof int);//计算类型的时候sizeof()的括号可以不省略
//	return 0;
//}


//数组的大小只能是常量，不能是变量 否则error
    //  int arr[常量] = {0}; 
	//int main()
	//{
	//	int arr[10] = {0};//10个整型元素的数组
	//	int sz = 0;
	//	//10*sizeof(int) = 40
	//	printf("%d\n", sizeof (arr));
	//	//计算数组的元素个数
	//	//个数 = 数组总大小/每个元素的大小
	//	sz = sizeof(arr) / sizeof(arr[0]);
	//	printf("%d\n", sz);
	//	return 0;
	//}
 

//int main()
//{
//	// "abcdef\0"  字符串 【'\0'】 字符串 转义字符-结束标志；ASCLL码值=0
//	// 0 数字0 
//	//'0'字符 ASCLL码值=48
//	return 0;
//}


//输入两个整数，求较大值
	int Max(int x, int y)
	{
		if (x > y)
			return x;
		else
			return y;
	
	}
	//定义一个函数体
int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d %d", &num1, &num2);
	max = Max(num1, num2);//调用函数体
	/*if (num1 > num2)
		printf("较大值是:%d\n", num1);
	else
		printf("较大值是:%d\n", num2);*/
	printf("Max = %d\n", max);
	return 0;
}