#define _CRT_SECURE_NO_WARNINGS 1//scanf 函数
#include<stdio.h>//对应printf("")打印的库函数
#include<string.h>//对应strlen计算长度 库函数
#include<windows.h>//对应Sleep睡眠 库函数
#include<stdlib.h>// 对应调用系统命令system 


//编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	//char arr[] = "bit"; //[ b i t \n]
//                      //下标  0 1 2 3
//    //strlen(arr)-1;计算下标所代表的的元素，-1 主要是为了排除\n
//
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "*****************";
//
//	int left = 0;//左下标 初始值从0开始
//	int right = strlen(arr1) - 1;//右下标 初始值从右边末尾开始，由于是\n结尾，所以减1 去掉最后一个下标的元素
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//Sleep 是一个库函数 是实现睡眠， 单位毫秒
//		system("cls");//system 是一个库函数 可以执行系统命令 cls是清空屏幕的命令
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则,提示登录成，如果三次均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//数组内容 ，用来存放字符串
//	int flag = 0;//定义
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);//数组名本来就是一个地址，不需要用&取地址符
//
//
//		//判断两个字符是否相等 要使用 strcmp 函数； 不能直接使用 == 判断相等符
//		
//		//int ret = strcmp(password,"123456")//strcmp 返回值赋值给ret 
//		
//		//如果第一个字符串小于第二个字符串， 返回<0 的数字
//		//如果第一个字符串大于第二个字符串， 返回>0 的数字
//		//如果第一个字符串等于第二个字符串， 返回 0 
//
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("%d次密码错误\n", i + 1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("三次密码均错误，退出程序\n");
//
//	}
//	return 0;
//}


//猜数字游戏实现
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1.play  *******\n");
//	printf("******  0.exit  *******\n");
//	printf("***********************\n");
//
//}
//
//void game()
//{
//	int num = 0;
//
//	//生产随机数
//
//	//rand()生成0-23767 之间的数字，若果想要生成，还需要用srand
//	int ret = rand() % 100 + 1;//产生随机数的范围0-100 ；任何数取100的余数都是0-99
//	//printf("随机数值：%d\n", ret);//打印产生的随机数
//
//	//猜数字
//	
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &num);
//		if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//初始化随机函数种子
//	//srand()：设置随机数种子的函数；是在调用rand（）：产生随机数的函数
//	//time(NULL)这个函数的返回值是作为srand函数的参数的！意思是以现在的系统时间作为随机数的种子来产生随机数
//	
//	do
//	{
//		menu();
//		printf("请选择输入:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto语句和标记跳转的标号
//int main()
//{
//	for (...)
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					goto error;
//			}
//		}
//	…
//		error ://直接跳出
//	if (disaster)
//		// 处理错误情况
//	return 0;
//}


//一个关机程序
//1.程序执行起来就到倒计时，60秒后关机
//若果输入：点错了 则取消关机

//shutdown -s -t 60 ：倒计时，60秒后关机
//shutdown -a ：取消关机
//int main()
//{
//	char input[20] = { 0 };//input 就是数组名，数组名就是地址
//	system("shutdown -s -t 60");
//again://goto语句和标记跳转的标号
//	printf("注意！你执行了一个60s后关机程序\n请输入：“取消”，则取消关机\n请输入“立即”，则马上关机\n");
//	scanf("%s", input);//这里不需要用【&】取址符号
//	if (strcmp(input, "取消") == 0)
//	{
//		printf("好的，这就取消关机\n");
//		system("shutdown -a");
//	}
//	else if (strcmp(input, "立即") == 0)
//	{
//		printf("好的，马上关机\n");
//		system("shutdown -s -t 60");
//	}
//	else
//	{
//		printf("输入错误，取消失败\n");
//		goto again;
//	}
//	return 0;
//}

// i--相当于i = i - 1
// while（i--）是判断括号里（i = i - 1）是否为真，如果为真（非0），继续执行循环语句，如果为假（0），就跳出循环，往下执行循环外面的语句。

//int main()
//{
//	char input[20] = { 0 };//input 就是数组名，数组名就是地址
//	//system("shutdown -s -t 120");
//	while (1)
//		//while(1)其中1代表一个常量表达式，while(1) 表示无限循环，除非你设置break等类似的跳出循环语句循环才会中止
//	{
//		printf("注意！你执行了一个60s后关机程序\n请输入：“取消”，则取消关机并退出程序\n请输入“关机”，则马上关机\n");
//		printf("请输入：");
//		scanf("%s", input);//这里不需要用【&】取址符号
//
//		if (strcmp(input, "取消") == 0)
//		{
//			printf("好的，这就取消关机并退出程序\n");
//			system("shutdown -a");
//			break;
//		}
//		else if (strcmp(input, "关机") == 0)
//		{
//			printf("好的，马上关机\n");
//			system("shutdown -s -t 60");
//		}
//		else
//		{
//			printf("输入错误，请按提示输入\n");
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//每次for循环符合条件的时候，if()括号的判断都给i重新赋值
//
//	printf("%d ",i);
//		
//	}
//	return 0;
//}

//比特教育系统，2022.10.21，第8道if语句题型
//int main()
//{
//	int num1;//存放最大值
//	int num2;
//	int num3;//存放最小值
//	int tmp = 0;
//	printf("请输入三个整数：\n");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2) 
//	{                      // 1 < 2
//		tmp = num1;       // tmp = 1 存最小的值放到最后；
//		num1 = num2;	  // 2 这个值赋值给 先前存放 1 的那个变量；
//		num2 = tmp;		  // 1 这个值再给先前存放 2 的那个变量；
//	}
//	if (num1 < num3) 
//	{
//		tmp = num1;
//		num1 = num3;
//		num3 = tmp;
//	}
//	if (num2 < num3) 
//	{
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

////2022.10.21，第11道 给定两个数，求这两个数的最大公约数【辗转相除法】
//int mian()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int k = 0;
//	while (k = m % n)
//	{
//		m = n;//把取的余数赋值给k,n的值再赋值给m,k的值再赋值给n
//		n = k;//所以最大公约数为n
//	}
//	printf("最大公约数是：%d", n);
//	return 0;
//}

//int main()
//{
//    //等差数列求和公式
//    long long n = 0;
//    scanf("%lld", &n);
//    long long sum = 0;
//    sum = (1 + n) * n / 2;
//    printf("%lld\n", sum);
//
//    return 0;
//}

//BC114-小乐乐排电梯
int main()
{
    int n = 0;
    int s = 0;
    scanf("%d", &n);
    s = n / 12 * 4 + 2;
    printf("%d", s);
}