#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������˫����""��Double Quote��
//��������һ���ַ���Ϊ�ַ�������ֵ��String Literal�������߼���ַ���
//int main() 
//{
//	"avcdef";
//	"3.14";
//	"";//���ַ���
//	return 0;
//}


//int main()

//{
//	//char �ַ�������
//	char arr1[] = "abc";//����
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	// ASCLL ���� ��a'-65 
//	// ������洢��ʱ������2���ƴ洢
//	//ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ�
//	//�ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ�������
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
// }


//#include<string.h> //strlen����Ҫ��ͷ�ļ�

//int main()
//{
//	char arr1[] = "abc";//arr1����ŵ��ַ���"abc"
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//strlen -string length - �����ַ�������
//	//���������һ��arr1 = 3
//	//�ڶ���arr2���������һ�����ֵ����Ϊchar arr2[] = {����û�н�����־��\0��}
//
//
//	return 0;
//}

//int main()
//{
//	printf("abc\n");//  ��\n�� ������
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");//��\����ɢ���Ķ���,��ֹ��������Ϊһ��ת�����з�����ת��
//	// ��\t����ˮƽ�Ʊ��
//	return 0;
//}

/*
#include<string.h>//strlen����Ҫ��ͷ�ļ�
// ��\ddd�� ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 -�� X��
int  main()
{

	//printf("%c\n", '\x61');//��\xdd�� dd��ʾ2��ʮ���������֡� �磺 \x61 -ASCLL ��ֵ-a
	//printf("%d\n", strlen("c:\test\32\test.c"));
	//printf("%c\n", '\32');
	//  %c������ӡ�ַ�����ӡ3 2 ��ASCLL ��ֵ
	//32-- ��ʾ�˽��Ƶ�����3 2
	//32 ת�� �� 10���Ƶ�����26
	return 0;
}
*/

//int main()
//{
//    int  input = 'n';
//
//	printf("�ϴ�ѧ֮��\n");
//	printf("��Ҫ�ú�ѧϰ��(y/n)>:");
//	scanf("%c", &input);//����y����n
//	if (input == 'y')
//		printf("ף���õ�һ����offer\n");
//	else
//		printf("��ũ��������\n");
//	return 0;
//}

//��%c�������ַ��������˼
//��%s��������ַ���
//��%d�����������
//��%f�����������


//C���������ʵ��ѭ���أ�
//while��� - ����
	 // int main()
	 //{
		//
		//printf("ѡ���������רҵ\n");

		//int line = 0;
		//while (line =< 20000)
		//{
		//	printf("��һ����Ч�������:%d\n", line);
		//	line++;//line��ʾ�У�++ ��ʾ��1�����Ծ��Ǳ�ʾ������1

		//}
		//if (line > 20001)
		//	printf("��ϲ�����ջ���C����֪ʶ\n");
		//return 0;
	 // }



/*
int Add(int num1, int num2)//  int�����ص����ͣ�Add����������Add()���������ʾ�����Ĳ���
{
	//Add:�Զ��庯��
	int z = num1 + num2;
	return z;//����int���ͣ�ֵ��z
}
//{}����д�Ľк�����,�Ǹ�����main��������Ľ����ʽ����������

int main()
{
	int num1 = 0;
	int num2 = 0;
	int z = 0;
	//int a = 100;
	//int b = 200;
	printf("������������:\n");
	scanf("%d %d", &num1, num2);
	//sum = num1 + num2;
	z = Add(num1, num2);

	//sum = a+ b;
	//z = Add(a, b);
	printf("z = %d\n", z);
	return 0;
}
*/


//�������ص���Ǽ򻯴��룬���븴��,���ⷱ�������л���
/*
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}
�������룬д�ɺ������£�


int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("��������������:>");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}
*/


/*
	int main()
	{
		//int a = 1;
		//ing b = 2;
		//int c = 3;
		//int d = 4;
		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	 //����һ�����10���������ֵ�����;�������10��Ԫ�أ��±�ķ�Χ��0-9
	 //C���Թ涨�������ÿ��Ԫ�ض���һ���±꣬�±��Ǵ�0��ʼ��
	 //printf("%d\n", arr[5]);//arr[5]�����������±�5������ͨ���±�5�����ʳ�������6
		int i = 0;
		while (i < 10)
		{
		printf("%d\n", arr[i]);
		i++;
		}

		//char ch[20];
		//float arr[5];
		//short arr[1];
		//double arr[5];

		return 0;
	}
	*/
