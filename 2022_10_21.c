#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//static�������ξֲ�����
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

//ţ�������༶�ɼ��������
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    float num[5] = { 0 };
//
//    for (i = 0; i < 5; i++)
//    {
//        float sum = 0.0;        //ÿһ��ѭ�����г�ʼ������ֹ�ܳɼ����ۼ�
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &num[j]);
//            printf("%.lf ", num[j]);
//            sum += num[j];
//        }
//        printf(" %.lf\n", sum);
//    }
//    return 0;
//}

//ţ�������߶�ͼ��
//int main()
//{
//    int num;
//    while (scanf("%d\n", &num) != EOF)
//    {
//        for (int i = 0; i < num; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//ţ���� ��ʱ��ת��
//int main() {
//    int seconds, h, m, s;
//    scanf("%d", &seconds);
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = (seconds % 3600) % 60;
//    printf("%d %d %d", h, m, s);
//}

//ţ���������㵥λ��Ծ����
//int main()
//{
//    float t;
//    while (~scanf("%f", &t))
//    {
//        getchar();
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}

//���ؽ���ϵͳ��2022.10.21����һ��if����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//switch����Ŀ��Ʊ��ʽֻ����short��char��int��long�������ͺ�ö������


//���ؽ���ϵͳ��2022.10.21����7��forѭ���������
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//���ؽ���ϵͳ��2022.10.21����8��if�������
//int main() {
//	int num1;
//	int num2;
//	int num3;
//	int tmp = 0;
//	printf("����������������\n");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2) {    // 1 < 2
//		tmp = num1;       // tmp = 1 ����С��ֵ�ŵ����
//		num1 = num2;	  // 2 ���ֵ��ֵ�� ��ǰ��� 1 ���Ǹ�������
//		num2 = tmp;		  // 1 ���ֵ�ٸ���ǰ��� 2 ���Ǹ�������
//	}if (num1 < num3) {
//		tmp = num1;
//		num1 = num3;
//		num3 = tmp;
//	}if (num2 < num3) {
//		tmp = num2;
//		num2 = num3;
//		num3 = tmp;
//	}
//	printf("%d %d %d\n", num1, num2, num3);
//
//	system("pause");
//	//system("pause")��˼�����ó�����ͣһ�£�Ȼ���������������ѧ��ʱ�������ڳ����ĩβ�������ڿ����н�����������һ��������
//	//��ͬ�����ǻ�������getchar()���������������ֱ�ӽ��������������н����
//	return 0;
//}

//���ؽ���ϵͳ��2022.10.21����9��forѭ���������
//int main()
//{
//    int i = 0;
//    int j = 0;
//    printf("100-200֮���������");
//    for (i = 100; i <= 200; i++)        //100-200֮�����
//    {
//        for (j = 2; j < i; j++)//�жϳ���j ÿ��+1,�ܷ��ñ�����i������j�ķ�Χ��С��i(i-1)
//        {
//            if (i % j == 0)    //�ж��Ƿ�Ϊ����
//            {
//                break;        //��i���Ա�j����������������������ѭ��������һ��iѭ���������ܱ�����������ѭ��j��ѭ����ֱ����������������������ʱ��i����������
//            }
//        }
//        // ����jѭ�������ֿ��ܣ�
//        //1.i���Ա�j��������ʱi��������
//        //2.jѭ��ѭ�����˼�ѭ��������������ʱ��Ҳû�п��Ա������������ڶ��ֿ���˵����ʱi��������
//        if (i == j)          //jѭ�����˼�ѭ��������������forѭ������ʱ��û���ҵ����������������Դ�ʱ��i��������
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//���ؽ���ϵͳ��2022.10.21����10��forѭ���������
//int main()
//{
//    int i = 1000;
//    for (i; i >= 1000 && i <= 2000; i++)
//        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//            //�����ж�i % 4 == 0 && i % 100 != 0������i % 4 == 0 �����㣬Ȼ�������ж�i % 100 != 0 || i%400==0
//            printf("%d ", i);
//    return 0;
//}

//���ؽ���ϵͳ��2022.10.21����11��whileѭ���������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	//շת����� 
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
