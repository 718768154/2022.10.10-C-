#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//int float;//�ؼ��ֲ��ܱ�����ɱ���
//	typedef unsigned int u_int;
//	//typedef - l���Ͷ��� - �����ض���
//	unsigned int nnum = 20;//ȫд
//	u_int num2 = 20;//��д
//	//���� - С�� 
//	return 0;
//}



// static���ξֲ������ı��˱�������������
//�þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ�����

//void test()
//{
//	static int a = 1//���ξֲ�����--��Ϊ��̬�ֲ�����
//		int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ�á�
//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d", g_val);
//	return 0;
//}


////һ��������static���Σ�ʹ���������ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ�á�
//extern int Add(int,int);
////����- �����ⲿ���ŵ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//#define �����ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}


//�����Ķ����
//int Max(int x,int y)
//{
//	if (x > y)
//
//	return x;
//	else
//	return y;
//}


//#define �����Զ�����
//#define Max(X,Y)(X>Y ? X : Y)//��Ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//int* ��p �����ͣ� p������һ��ָ�������p���������a �ĵ�ַ
//	//printf("%p\n", p);
//	//printf("%p", &a);
//	*p = 20;//��*����ʾ�����ò�����; ����ͨ��*p �ҵ��� ��ָ��Ķ��� a��ֵ Ȼ��ĳ�20
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//��ǰ64λƽ̨�����pc �ֽڴ�С��8�ֽڣ�����32λƽ̨�������pc�ֽڴ�С��4�ֽ�
//
//	//*pc = 'a';
//
//	//printf("%c\n", ch);
//	return 0;
//}

int main()
{

	double d = 3.14;
	double* pd = &d;
	*pd = 5.66;
	printf("%lf\n", *pd);
	printf("%lf\n", d);
	//int a = 10;
	//printf("%p\n", &a);
	//int* p = &a;//p ��һ��ָ�����

	//printf("%p\n", p);
	//*p;//�����ò���������ӷ��ʲ�����
	return 0;

}