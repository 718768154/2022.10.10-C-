//#include<stdio.h>
//
//int main()
//{
//
//printf("     **\n");
//printf("     **\n");
//printf("************\n");
//printf("************\n");
//printf("    *  *\n");
//printf("    *  *\n");
//
//return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//    int main()
//    {
//        int iq;
//        scanf("%d", &iq);
//        if (iq >= 140)
//        printf("Genius");
//        return 0;
//    }

//#include <stdio.h>
//
//int main() {
//
//    printf("I lost my cellphone!\n");
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//
//	return 0;
//
//}


/*
* //�ֲ���������������ǵ�ǰ������ڵķ�Χ
* //�������еľֲ�����������main()���������
	#include<stdio.h>

	int main()
	{

		int num = 0;//����ֲ��ı���
		{
		int num = 0;//����ָ��������������
		printf("num = %d\n", num);

		}
		return 0;
	}

	*/

	/*#include<stdio.h>
	ȫ�ֱ���������������������
	int global = 2022;

	void test() {



	printf("test--%d\n", global);
	}

	int main()
	{

	test();
	printf("%d", global);
	return 0;

}*/

/*
//�ⲿ�ļ��������
#include<stdio.h>
int main()
{
	//δ�����ı�ʶ��
	//����extern ������������g_val(�ⲿ���ţ�

	extern int g_val;
	printf("g_val = %d\n", g_val);

return 0;
}

*/
	

//#include<stdio.h>
//int main()
//{
//	int num = 1;//��ֵ����
//	5;
//	100;
//	3.14;//���泣��
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//const ������ 
//	const int n = 10;// n �Ǳ����������ǳ����ԣ��������ǳ�����
//	//int arr[n] = {0};
//	n = 20;
//
//
//	//const�����ԣ� ���εĳ��������������ٱ�
//	//const int num = 4;//const ����num��������num�����޷��ٱ�
//	//printf("%d\n", num);
//
// //   num = 8;//num��const���κ�num�����޷��ٱ�
//	//printf("%d\n", num);
//
//	return 0;
//}



//
//#include<stdio.h>
//#define MAX 10//#define ����ı�ʶ������
//int main()
//{
//	int arr[MAX] = {10};
//	printf("%d\n", MAX);
//	return 0;
//}



//ö�ٳ���enum
//ö�ٱ�ʾһһ�о�

//�Ա��У�Ů������
//��ԭɫ �죬�ƣ���
//���� 1.2.3.4.5.6.7


#include<stdio.h>

//ö�ٹؼ��� -- enum

//enum Sex
//{
//	MALE��
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET--ö�ٳ���
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

enum Color
{
	RED,
	YELLOW,//���������涨���ö�ٳ������ܸı�
	BLUE//--ö�ٳ���
};

int main()
{
	enum Color color = BLUE;
	color = YELLOW;//����ͨ��ö�ٴ�������ı���(color)�ǿ��Ըı��
	BLUE = 6;//ö�ٳ������ܸı�
	return 0;
}

