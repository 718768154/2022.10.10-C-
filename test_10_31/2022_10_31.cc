#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//写一个函数，实现一个整形有序数组的二分查找。
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//		return -1;
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,17,18,19,20,21 };//10
//	//0~9
//	int k = 21;
//	//找到了就返回下标
//	//找不到返回-1
//	//计算数组的元素个数
//	// 
//	//printf("%d\n", sizeof(arr));//40,这里计算整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4，这里计算数组第一个元素的大小，单位是字节
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d\n", pos);
//
//	return 0;
//}

//方法1：写一个函数，每调用一次这个函数，就会将 num 的值增加1
//void add(int *p)//不需要返回值用void ；如果函数()不需要传参里面就写void
//{
//	*p = *p + 1;
//	//(*p)++;//这是++ 作用于p 没有作用于*p
//}
//int main()
//{
//	int num = 0;
//	add(&num);//函数是指针，所以需要取地址传值
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//方法二：
//int add(int n)//默认返回类型 int  
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = add(num);//每次num 结果的值赋值给下一个num 变量
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//	num = add(num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int test(void)//
//{
//	printf("hehe\n");
//	//当这里不写return 返回，则返回pintf语句里面的值
//}
//int mian()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//int len = strlen("abcdef");计算
//	//printf("%d\n", len);//打印计算后len 的值
//
//	printf("%d\n", strlen("abcdef"));//直接打印并输出值：链式访问
//	return 0;
//}

//链式访问： 把一个函数的返回值作为另一个函数的参数
//printf函数返回的 是打印在屏幕 上字符的 个数
//int mian()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n",43)));
//	return 0;
//}
//结果打印：43 ；43 是最里面的printf()打印的43这个数字
//           2 ；2 是第三个printf()打印的字符，因为第三个printf 返回的 2个字符
//			 1 ：1 顾明思义 就是第一个printf() 里面的 数字2  代表一个字符，所以打印1


//函数的定义
//函数的定义也是一种特殊声明
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = add(x, y);
//	printf("%d\n", ret);
//	return 0;
//}


//int add(int a, int b);//先声明
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = add(x, y);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int add(int a, int b)//再定义
//{
//	return a + b;
//}

//利用外部文件声明【add.h】定义【add.c】
//#include"add.h"//定义头文件
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = Add(x, y);
//	printf("%d\n", ret);
//	return 0;
//}



//void Print(unsigned int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//}

//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件

//void Printf(unsigned int n)
//{
//	if (n > 9)//每次符合则依次递推，直到不符合条件再做回归
//	{
//		Printf(n / 10);//调用自身函数
//	}
//	printf("%d ", n % 10);//n 为 1 的时候满足条件，依次回归之前取模的值，然后返回这个值到main 里面
//}
//int main()
//{
//	unsigned int num = 0;//无符号的整形
//	scanf("%u",&num);
//	Printf(num);
//	return 0;
//}


//编写函数允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//字符指针 + 1； 向后跳一个字符
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//[b i t \0] 元素
//	//数组名 其实是 数组 首元素 的地址
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//char my_strlen(char* str)
//{
//	if (*str != '\0')//*str 是指针空间，也就是组数的元素空间；*str 代表数组的所有元素
//		return 1 + my_strlen(str + 1);//str 是一个指针变量 存的 数组首元素的地址；str 代表首元素
//	return 0;//不符合条件再依次回归，取之前 my_strlen(str + 1) 所代表的字符长度 + 1；然后返回最终值 到main 函数里面
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//[b i t \0] 元素
//	//数组名 其实是 数组 首元素 的地址
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//使用函数递归实现n的k次方
//double pow(int n, int k)
//{
//	if (k == 0)//任何数的0次方都是1
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * pow(n, --k);
//	}
//	else if (k < 0);//次方（指数）为负数
//	{
//		return 1.0 / pow(n,-k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}



//计算一个数的每位之和（递归实现）
int DigitSum(int num)
{
	int g = 0;
	int sum = 0;
	if (num != 0)
	{
		g = num % 10;//取出个位3,2
		num = num / 10;//舍去取剩余位数1
		sum = g + DigitSum(num);//递归传递变化中的num值
	}
	return sum;

}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int z = DigitSum(num);
	printf("%d\n",z);
	return 0;
}
