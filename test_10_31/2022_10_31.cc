#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
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
//	//�ҵ��˾ͷ����±�
//	//�Ҳ�������-1
//	//���������Ԫ�ظ���
//	// 
//	//printf("%d\n", sizeof(arr));//40,���������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4��������������һ��Ԫ�صĴ�С����λ���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n", pos);
//
//	return 0;
//}

//����1��дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
//void add(int *p)//����Ҫ����ֵ��void ���������()����Ҫ���������дvoid
//{
//	*p = *p + 1;
//	//(*p)++;//����++ ������p û��������*p
//}
//int main()
//{
//	int num = 0;
//	add(&num);//������ָ�룬������Ҫȡ��ַ��ֵ
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//��������
//int add(int n)//Ĭ�Ϸ������� int  
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = add(num);//ÿ��num �����ֵ��ֵ����һ��num ����
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
//	//�����ﲻдreturn ���أ��򷵻�pintf��������ֵ
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
//	//int len = strlen("abcdef");����
//	//printf("%d\n", len);//��ӡ�����len ��ֵ
//
//	printf("%d\n", strlen("abcdef"));//ֱ�Ӵ�ӡ�����ֵ����ʽ����
//	return 0;
//}

//��ʽ���ʣ� ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//printf�������ص� �Ǵ�ӡ����Ļ ���ַ��� ����
//int mian()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n",43)));
//	return 0;
//}
//�����ӡ��43 ��43 ���������printf()��ӡ��43�������
//           2 ��2 �ǵ�����printf()��ӡ���ַ�����Ϊ������printf ���ص� 2���ַ�
//			 1 ��1 ����˼�� ���ǵ�һ��printf() ����� ����2  ����һ���ַ������Դ�ӡ1


//�����Ķ���
//�����Ķ���Ҳ��һ����������
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


//int add(int a, int b);//������
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
//int add(int a, int b)//�ٶ���
//{
//	return a + b;
//}

//�����ⲿ�ļ�������add.h�����塾add.c��
//#include"add.h"//����ͷ�ļ�
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

//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//void Printf(unsigned int n)
//{
//	if (n > 9)//ÿ�η��������ε��ƣ�ֱ�����������������ع�
//	{
//		Printf(n / 10);//����������
//	}
//	printf("%d ", n % 10);//n Ϊ 1 ��ʱ���������������λع�֮ǰȡģ��ֵ��Ȼ�󷵻����ֵ��main ����
//}
//int main()
//{
//	unsigned int num = 0;//�޷��ŵ�����
//	scanf("%u",&num);
//	Printf(num);
//	return 0;
//}


//��д������������ʱ���������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//�ַ�ָ�� + 1�� �����һ���ַ�
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//[b i t \0] Ԫ��
//	//������ ��ʵ�� ���� ��Ԫ�� �ĵ�ַ
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��д��������������ʱ���������ַ����ĳ���
//char my_strlen(char* str)
//{
//	if (*str != '\0')//*str ��ָ��ռ䣬Ҳ����������Ԫ�ؿռ䣻*str �������������Ԫ��
//		return 1 + my_strlen(str + 1);//str ��һ��ָ����� ��� ������Ԫ�صĵ�ַ��str ������Ԫ��
//	return 0;//���������������λع飬ȡ֮ǰ my_strlen(str + 1) ��������ַ����� + 1��Ȼ�󷵻�����ֵ ��main ��������
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//[b i t \0] Ԫ��
//	//������ ��ʵ�� ���� ��Ԫ�� �ĵ�ַ
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ʹ�ú����ݹ�ʵ��n��k�η�
//double pow(int n, int k)
//{
//	if (k == 0)//�κ�����0�η�����1
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * pow(n, --k);
//	}
//	else if (k < 0);//�η���ָ����Ϊ����
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



//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
int DigitSum(int num)
{
	int g = 0;
	int sum = 0;
	if (num != 0)
	{
		g = num % 10;//ȡ����λ3,2
		num = num / 10;//��ȥȡʣ��λ��1
		sum = g + DigitSum(num);//�ݹ鴫�ݱ仯�е�numֵ
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
