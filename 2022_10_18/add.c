
static int g_val = 2022;// 已经被static 修饰全局变量
//static 修饰全局变量，改变了作用域 - 让静态的全局只能在自己所在的源文件使用，出了源文件就无法在使用
//int g_val = 2022;

// 定义一个函数
static int Add(int x, int y)//一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用。
{
	int z = x + y;
	return z;
}