#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//int main()
//{
//	//�ַ�������
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit!";
//	//��arr2 �����е�Ԫ�ؿ����� arr1 ������
//	char* ret =strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//memset �������÷���ָ��arr�ڴ�飬ʹ�á�6�������ַ��滻ǰ����ַ�
//int main()
//{
//	char arr1[20] = "hello bit ��";
//	printf("%s\n", arr1);
//	memset(arr1, "6", 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//дһ���������ҳ����������Ľϴ�ֵ
// ��д
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
//	int max = get_max(a, b);//��ֵ����:�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//	printf("���ֵ��%d", max);
//	return 0;
//}

// void test(void)
////��һ��void �����������ʲô������Ҫ���أ��ڶ���void ��ʾû�в��������õ�ʱ���ܴ���
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}

//дһ������������������ֵ
//û���õ�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}


//�õ�������д����������ʾ
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}//�������3 5 �ó��Ľ������ a = 3 .b = 5,
////������Ϊ Swap() �������õ�ʱ������� a��b ��ʵ�δ������溯������ x��y ���βΣ���ʱ����β���ʵ����ʱ������һ�ݣ����βε��޸Ĳ�Ӱ��ʵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d b = %d", a, b);
//
//	Swap(a,b);//��ֵ����:�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//	printf("������a = %d b = %d", a, b);
//	return 0;
//
//}

//�õ�������д������ȷ��ʾ
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
//	printf("����ǰ��a = %d b = %d\n", a, b);
//
//	Swap(&a,&b);
//
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//
//}

//ʹ�ú�����ӡ100 - 200 ֮֮�������
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//��������
//		}
//	}
//	return 1;//������
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

//дһ�������ж�һ���Ƿ�������

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
//��д ���� ��������
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
//			printf("�����꣺%d\n", y);
//		}
//	}
//	return 0;
//}

//���ؽ���ϵͳ 2022-10-29_������_��ҵ ��ʮ�⣺��������һ������ӡ�˷��ھ���
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
            //%2d�ǽ����ְ����Ϊ2�������Ҷ��뷽ʽ�����������λ������2λ������߲��ո�
        }
        printf("\n");
    }
    return;
}

int main()
{
    int n = 0;
    printf("������������");
    scanf("%d", &n);
    print(n);
    system("pause");//��ֹ����һ������
    //system�������ǵ��ã�DOS��ϵͳ�����shell�����pause ����DOS������е���ͣ���
    return 0;

}