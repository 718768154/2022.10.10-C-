#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//static函数修饰局部变量
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

//牛客网，班级成绩输入输出
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    float num[5] = { 0 };
//
//    for (i = 0; i < 5; i++)
//    {
//        float sum = 0.0;        //每一次循环进行初始化，防止总成绩的累加
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &num[j]);
//            printf("%.lf ", num[j]);
//            sum += num[j];
//        }
//        printf(" %.lf\n", sum);
//    }
//    return 0;
//}

//牛客网，线段图案
//int main()
//{
//    int num;
//    while (scanf("%d\n", &num) != EOF)
//    {
//        for (int i = 0; i < num; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//牛客网 ，时间转换
//int main() {
//    int seconds, h, m, s;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = (seconds % 3600) % 60;
//    printf("%d %d %d", h, m, s);
//}

//牛客网，计算单位阶跃函数
//int main()
//{
//    float t;
//    while (~scanf("%f", &t))
//    {
//        getchar();
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}

//比特教育系统，2022.10.21，第一道if题型
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch语句后的控制表达式只能是short、char、int、long整数类型和枚举类型


//比特教育系统，2022.10.21，第7道for循环语句题型
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//比特教育系统，2022.10.21，第8道if语句题型
//int main() {
//	int num1;
//	int num2;
//	int num3;
//	int tmp = 0;
//	printf("请输入三个整数：\n");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2) {    // 1 < 2
//		tmp = num1;       // tmp = 1 存最小的值放到最后；
//		num1 = num2;	  // 2 这个值赋值给 先前存放 1 的那个变量；
//		num2 = tmp;		  // 1 这个值再给先前存放 2 的那个变量；
//	}if (num1 < num3) {
//		tmp = num1;
//		num1 = num3;
//		num3 = tmp;
//	}if (num2 < num3) {
//		tmp = num2;
//		num2 = num3;
//		num3 = tmp;
//	}
//	printf("%d %d %d\n", num1, num2, num3);
//
//	system("pause");
//	//system("pause")意思就是让程序暂停一下，然后按任意键继续，初学的时候最多见于程序的末尾处，用于看运行结果，避免程序一闪而过。
//	//相同的我们还可以用getchar()，避免程序运行完直接结束而看不到运行结果。
//	return 0;
//}

//比特教育系统，2022.10.21，第9道for循环语句题型
//int main()
//{
//    int i = 0;
//    int j = 0;
//    printf("100-200之间的素数：");
//    for (i = 100; i <= 200; i++)        //100-200之间的数
//    {
//        for (j = 2; j < i; j++)//判断除数j 每次+1,能否让被除数i整除，j的范围是小于i(i-1)
//        {
//            if (i % j == 0)    //判断是否为素数
//            {
//                break;        //若i可以被j整除，则不是素数，跳出此循环继续下一个i循环。若不能被整除，继续循环j的循环，直到不能满足条件跳出，此时的i就是素数。
//            }
//        }
//        // 跳出j循环的两种可能：
//        //1.i可以被j整除，此时i不是素数
//        //2.j循环循环完了即循环条件不能满足时，也没有可以被整除的数，第二种可能说明此时i就是素数
//        if (i == j)          //j循环完了即循环条件不再满足for循环，此时还没有找到被整除的数，所以此时的i就是素数
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//比特教育系统，2022.10.21，第10道for循环语句题型
//int main()
//{
//    int i = 1000;
//    for (i; i >= 1000 && i <= 2000; i++)
//        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//            //首先判断i % 4 == 0 && i % 100 != 0；若是i % 4 == 0 不满足，然后再是判断i % 100 != 0 || i%400==0
//            printf("%d ", i);
//    return 0;
//}

//比特教育系统，2022.10.21，第11道while循环语句题型
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	//辗转相除法 
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
