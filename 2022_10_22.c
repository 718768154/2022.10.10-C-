#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<string.h>


//��ʶC���Խṹ��
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55Ԫ
//
//};
//
//int main()
//{
//	
//	struct Book b1 = { "C���Գ������",55 };
//
//	strcpy(b1.name,"C++");//strcpy :string - copy �ַ����������������˼�ǰ�"C++"�ַ���������name����ȥ
//	//strcpy ��һ���⺯����������Ҫ����ͷ�ļ�#include<string.h>
//	printf("���ĺ������%s\n", b1.name);
//
//	//b1.name = "C++";name��һ����������char name[20]���������¶���
//	//b1.price ��һ�������������ض���
//	
//
//	//struct Book* pb = &b1;//struct Book* ����һ��ָ�����ͣ�������pb(����)��ָ��b1
//	//����ָ�붨��ı�����pb ��ӡ�����۸�
//
//	//printf("%s\n", (*pb).name);// *pb�Ƚ����ò��������ҵ����ĳ�Աname
//	//printf("%dԪ\n", (*pb).price);
//
//	//���򵥵�д��
//	//printf("%s\n", pb->name);//��.��ʹ�÷������ṹ�����.��Ա
//	//printf("%dԪ\n",pb->price);//��->��ʹ�÷������ṹ��ָ��->��Ա
//
//
//	//printf("������%s\n", b1.name);
//	///printf("�۸�%dԪ\n", b1.price);
//	///b1.price = 15;
//	///printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}


//int main()
//{
//	int age;
//
//	scanf("%d", &age);
//	if (age < 16)
//		printf("����\n");
//
//	else if (age >= 16 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 56)
//		printf("׳��\n");
//	else if (age >= 56 && age < 80)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("�ѳ���");
//		printf("����̸����");
//		//if ����Ĭ��ֻ��һ����䣬����ж�����䣬��Ҫ���ϴ�����{}�������
//	}
//	else 
//	{
//		printf("δ����");
//	printf("����̸����");
//	}
//	return 0;
//}


//�ʵ���ʹ��{}����ʹ������߼����������
//���������Ҫ
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//		if (b == 1)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	//else��ƥ�䣺else�Ǻ�����������ifƥ��ġ�
//	return 0;
//}


//����
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 2)
//     {
//		if (b == 1)
//		printf("hehe\n");
//     }
//	else
//	{
//        printf("haha\n");
//	}
//	//else��ƥ�䣺else�Ǻ�����������ifƥ��ġ�
//	return 0;
//}

//�ж������һ�����Ƿ�������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//
//		printf("����\n");
//	}
//	else
//	{
//
//		printf("��������\n");
//	}
//	return 0;
//}


//����1-100������
//��1
//int main()
//{

//	//1.ѭ���Ȳ���1-100������
//	//2.�жϲ����������Ƿ�������
//	//3.�������ʹ�ӡ
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//		}
//		num++;//ÿ��+1���жϲ������� ȡģ �Ƿ�=1
//	}
//	return 0;
//}

//��2
//int main()
//{
//	int num = 1;
//	while(num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;//num��ʼֵ1��ʼ��ÿ��+2���������Ľ����������
//	}
//	return 0;
//}

//switch���

//��if����������
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//	{
//		printf("����%d\n", day);
//	}
//	else if (day == 2)
//	{
//		printf("����%d\n", day);
//	}
//	//....�ȵ�
//	return 0;
//}

//��switch����������

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//
//	case 3:
//		printf("������\n");
//		break;
//
//	case 4:
//		printf("������\n");
//		break;
//
//	case 5:
//		printf("������\n");
//		break;
//
//	case 6:
//		printf("������\n");
//		break;
//
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		
//	case 2:
//		
//	case 3:
//		
//	case 4:
//		
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}


//switch (���ͱ��ʽ) {
//	����
//}

//��һЩcase��䣺
//���£�
//case ���γ������ʽ:
//	���;

#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}