#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//使用while循环语句 在屏幕上打印1 - 10的数字
//int main()
//{
//	int n = 1;
//	while (n <= 10)
//	{
//		printf("%d ",n);
//		n++;
//	}
//	return 0;
//}


//使用 continue 跳过本次循环后面的代码不再是执行
//int main()
//{
//	int n = 1;
//	while (n <= 10)
//	{
//
//		if (5 == n) 
//		{
//			continue; //continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//				      //而是直接跳转到while语句的判断部分。进行下一次循环的入口判断
//			//break;//while中的break是用于永久终止循环的
//		}
//		printf("%d ", n);
//		n++;
//		
//	}
//	return 0;
//}

//使用continue 跳过if 判断语句 中的 n ==5
//int main()
//{
//	int n = 0;
//	while (n < 10)
//	{
//		n++;
//		if (n == 5)
//		{
//			continue;
//
//		}
//		printf("%d ", n);//当if ( 5 == 5) ,则执行continue ：则把后面的代码跳过，继续执行while 语句
//
//	}
//	return 0;
//}


//getchar 和 putchar 只能输入输出字符
//int main()
//{
//	char ch;
//	//scanf("%c", &ch);
//	//printf("%c", ch);
//
//
//	ch = getchar;//输入一个字符
//	putchar(ch);//输出一个字符

//	return 0;
//}


//int main()
//{
//	int ch;
//	while (ch = getchar() != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 20 };
//	int ch;
//
//	
//	printf("请输入密码:");
//	scanf("%c", &password);
//
//	//消除【\n】-清理键盘缓冲区
//	while (getchar() != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y\N):");
//	ch = getchar();
//
//	if(ch == 'Y')
//	{ 
//		printf("确认成功\n");
//	}
//	else
//	{ 
//		printf("确认失败\n");
//	}
//	return 0;
//}


//这个代码的作用是：只打印数字字符，跳过其他字符的
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//getchar函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读取错误，则返回 EOF（ - 1）
//所以 getchar() 函数返回值要用 int 整型变量来存储


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//运行结果：键盘上输入 abc\n，程序会在屏幕上输出 abc\n，输入 def\n，屏幕上会输出 def\n，当按下 ctrl + z 时程序结束运行

/*
   这是为什么呢，程序的运行过程是这样的:
getchar 有一个 int 型的返回值。当程序调用 getchar 时，程序就等着用户按键。用户输入的字符被存放在键盘缓冲区中，直到用户按回车为止（回车字符 \n 也放在缓冲区中）,
当用户键入回车之后，getchar() 函数才开始从输入缓冲区中每次读取一个字符，getchar 函数的返回值是用户输入的字符的 ASCII 码，若遇到文件结尾(End - Of - File) 则返回 - 1 (EOF)，
并将用户输入的字符回显到屏幕，如果用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中，等待后续 getchar 调用读取。
也就是说，后续的 getchar 调用不会等待用户按键，而直接读取缓冲区中的字符，直到缓冲区中的字符读完后，才等待用户按键。程序中 while 循环工作时，
每一次循环 getchar() 就会从输入缓冲区读取一个字符，然后 putchar 输出，直到遇到了文件结束标志 EOF，循环判断条件为假，循环才结束

为啥用缓冲区呢？因为计算机CPU的处理速度是很快的，我们用键盘输入速度比不上CPU的处理速度，CPU就得等键盘输入完，很浪费资源，所以，当键盘输入完了，让CPU一次性处理，可以大大提高效率。
*/


//%c - 字符
//%s - 字符串
//%d - 整形
//%f - float浮点数
//%lf - double 浮点数
//%p - 打印指针 地址
//%x - 以十六进制的形式打印


//使用for 循环语句 答应 1-10 
//int main()
//{
//	int n;
//	for (n = 1; n <= 10; n++)
////n = 1; 表达式1为初始化部分，用于初始化循环变量的。
////n <= 10; 表达式2为条件判断部分，用于判断循环时候终止。
////n++; 表达式3为调整部分，用于循环条件的调整。
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}


//for 循环语句 里面的 break和continue 一样的作用
//int main()
//{
//	int n;
//	for (n = 1; n <= 10; n++)
//	{
//		if (n == 5)
//		{
//			continue;
//			//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//			//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断
//			
//           //break;//用于永久终止循环
//		}
//		printf("%d ", n);
//     n++;// 不可在for 循环体内修改循环变量，防止 for 循环失去控制
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//{}里面进行数据初始化,存放10个 元素
//	//访问元素是用 下标 ；下标是 0 - 9
//	//打印数据的内容
//
//	int i;
//	//前闭后开的写法（推荐）
//	for (i = 0; i < 10; i++)//产生0 - 9 的下标
//	/*
//	两边都是闭区间的写法
//	for (i = 0; i <= 9; i++)
//	{}
//	*/
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//for 循环的初始化，判断，调整 三个部分 都可以省略
//	//但是省略掉判断部分，判断就恒为真，一直死循环下去
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	int i;
//	int j;
//	/*
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	*/
//
//	//for 循环 使用多于一个变量控制循环
//	for (i = 0, j = 0; i < 3 && j < 3; i++, j++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//请问循环要循环多少次？
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//结果是0次循环，因为i = 0, k = 0; k = 0; i++, k++ 中间的 k = 0 不是判断，而是赋值，k == 0 才是判断


//do语句的特点
//循环至少执行一次，使用的场景有限，所以不是经常使用。
//int main()
//{
//
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//		{
//			continue;//结果是打印1.2.3.4.5 然后跳过i++,从而死循环打印5
//			//break;打印1.2.3.4.5就永久终止
//		}
//		i++;
//	}while (i <= 10);
//// while 和 do while 的区别一个是先判断在执行，一个是先执行在判断
//	return 0; 
//}

//1. 计算 n的阶乘。

//阶乘的解释：
//从1到n的连续自然数相乘的积，叫做阶乘，用符号n！表示。如5！＝1×2×3×4×5。规定0！＝1。

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//循环产生1 - n 的数字
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//2. 计算 1!+ 2!+ 3!+ …… + 10!

//概念
//1! = 1
//2! = 1*2 = 1!*2
//3! = 1*2*3 = 2!*3
//4! = 1*2*3*4 = 3!*4
//5! = 1*2*3*4*5 = 4!*5

//第一种写法
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n = 1;n <= 10;n++)//依次产生 10 个阶乘
//	{ 
//		ret = 1;// ret这里需要初始化 1 ，不然有累计效果
//	for (i = 1; i <= n; i++)//计算每产生一个阶乘的值
//	{
//		ret = ret * i; 
//	}
//	sum = sum + ret;//上一次阶乘的值 + 这次产生阶乘的值 再赋值给sum
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//第二种简写
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//二分查找(折半查找)有两个限制条件：
//1.查找的数量只能是一个，不能是多个.
//2.查找的对象在逻辑上必须是有序的.


/*
int main()
{
	//存储递增的有序数列
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", sizeof(arr));计算arr整个数组的大小
	//printf("%d\n", sizeof(arr[0]));计算数组中第一个元素的大小，而数组中的每个元素大小都是相同的
	int sz = sizeof(arr) / sizeof(arr[0]);//所以相除，求出结果就是数组的长度
	int mid = 0;//存储中间元素的下标

	int left = 0;//最左边的下标默认是从0开始，而对应的数组是1
	int right = sz - 1;//数组长度减去1，求出最右边的下标q
	int k = 0;//所要查找的元素K

	printf("请输入一个整数:");
	scanf("%d", &k);

	
	while (left <= right)//查找一个元素的时候，left下标和right下标会越来越靠近，甚至会指向一处
 //while 循环的 这个过程中left始终在right的左边（即：left <= right）
 //但如果一直找不到那个元素，两个下标必然会相互交错（即: left > right）
	{
		mid = (left + right) / 2;//计算中间元素的下标
	
	if (arr[mid] < k)//k > mid时范围重新精确到了mid的右半部分
	{
		left = mid + 1;//最左边元素应该为中间元素后面一个（left = mid + 1），最右边元素下标right不变
	}
	else if(arr[mid] > k)//k < mid时范围重新精确到了mid的左半部分
	{
		right = mid - 1;//最右边元素应该为中间元素前面一个（right = mid - 1），最左边元素下标left不变
	}
	else
	{
		break;
	}

	}

	if (left > right)
	{
		printf("没有找到哦\n");
	}
	else 
	{
        printf("找到了:%d\n", mid); //当k = mid时就意味着：找到所要找的那个数了，就是mid下标所对应的那个数
	}
	return 0;
}
*/


//比特教务系统2022-10-24_for循环 第2题：判断输出结果
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;//符合条件后直接永久终止for 循环
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//比特教务系统 2022 - 10 - 24_for循环 第3题：在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d*%d=%d ", x, y, x * y);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//比特教务系统 2022 - 10 - 24_for循环 第4题：求10 个整数中最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("请输入10 整数值：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值是：%d", max);
//	return 0;
//}


//比特教务系统 2022 - 10 - 24_for循环 第4题：分数求和
//int main()
//{
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum = 0.0;
//	int i = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//
//		sum1 = sum1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i += 2)
//	{
//		sum2 = sum2 + (1.0) / i;
//	}
//	sum = sum1 - sum2;
//	printf("分数的和：%lf\n", sum);
//	return 0;
//}

//比特教务系统 2022 - 10 - 24_for循环 第4题：编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int cont = 0;//cont 计数
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i / 10 || 9 == i % 10)
//		{
//			printf("%d ",i);
//			cont++;
//		}
//	}
//	printf("总共有%d个9\n", cont);
//	return 0;
//}
