#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//ţ���� ���������Ľϴ�ֵ
	/*int main()
	{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	printf("�ϴ�ֵ��%d",a);
	else
	printf("�ϴ�ֵ��%d",b);
	return 0;
	}*/

	//ţ���� ���������Ľϴ�ֵ(ʹ�ú���)

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


//ţ���� �ж�2�����Ĵ�С
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

 //ţ�����ж�������ż��
// int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	//while (~scanf("%d", &a)) �ȼ��� while (scanf("%d", &a) != EOF)
//	{ 
//	printf("%s\n", a%2 == 1 ? "Odd" : "Even");
//	}
//	return 0;
//}


//ţ�����жϼ������
//int main()
//{
//	int a;
//	while (~scanf("%d", &a))
//	{
//		printf("%s\n", (a >= 60) ? "Pass" : "Fail");
//	}
//	return 0;
//}

//ţ���� ���ж������ɼ�
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
//ţ���� ���ж������ɼ�
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
int b = ~a;//��λȡ��
���ۣ�
1.������ԭ�� = ���� = ����
2.�����ķ��� = ����ԭ��Ļ�����, ����λ���䣬�������λȡ��
3.�����Ĳ��� = �ڷ���Ļ����� + 1
4.�����Ĳ��� = ��ԭ��Ļ�����, ����λ����, �����λȡ��, ���ĩλ + 1
*/


//int main()
//{
//	int a = 10;
//	//int b = a++;//��ʹ��a��ֵ+1���ٰ�a��ʼֵ��ֵ��b  ; ���Եó��Ĵ���a=11,b=10
//	int b = ++a;//��ʹ��a��ֵ+1���ٰ�a+1��ֵ��ֵ��b�����Եó�����a=11,b==11
//
//	//--ǰ�á�����--
//	//++ǰ�á�����++
//
//	printf("a = %d\nb = %d\n",a, b);
//	return 0;
//}

//int main()
//{
//	//&& �߼��� : �������˵�ֵȫ��Ϊ���Ϊ��(1),����Ϊ�٣�0��
//	//|| �߼��� : �������˵�ֵȫ��Ϊ�ٲ�Ϊ��(0)������Ϊ�棨1��
//	int a = 0;
//	int b = 0;
//	//printf("%d\n", a && b);
//	//printf("%d\n", a || b);
//
//	return 0;
//}
//
////������
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
//	//arr[10];�±����ò�������[]��
//
//	int sum = Add(a, b);//���������
//	printf("%d\n", sum);
//	return 0;
//}