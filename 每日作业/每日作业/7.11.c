#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void pppaixu(int arr[],int sz)
//{
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tam = 0;
//				tam = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tam;��
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///*
//�������⣬С���ֿ���ѡ����һ�����������������ߵ�n���ķ�����֮�����������
////1���Ȱ���ĳ�ַ����ߵ���n-2�ף����һ��ֱ�ӿ�����
//2���Ȱ���ĳ�ַ����ߵ���n-1�ף����һ��ֻ��һ��
//Ҳ���ǣ���󵽴�n���ķ���ֻ�������֣�Ҫô�ǿ�һ�׵��Ҫô�ǿ����׵���
//���ԣ������ߵ���n�����õķ�������Ϊf��n������f��n��=f��n-2��+f��n-1����
//������������������ͺܼ��ˣ������õݹ�͵���������
///*
//#include <stdio.h>
//int menun(int n)
//{
//	if (n == 1 || n == 2)
//		return n;
//	return menun(n - 1) + menun(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", menun(n));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}/*
//#include <stdio.h>
//int main()
//{
//    char ch = '0';
//    while ((scanf("%c", &ch)) != EOF)
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//        else
//        {
//            continue;
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char n = '0';
//	
//	while ((scanf("%c", &n))!= EOF)
//	{
//		if (n >= 'a' && n <= 'z')
//		{
//			printf("%c\n", n - 32);
//		}
//		else if (n >= 'A' && n <= 'Z')
//		{
//			printf("%c\n", n + 32);
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char n;
//	while((n=getchar()) != EOF)
//	{
//		if (n != '/n')
//		{
//			if (n >= 'A' && n <= 'z')
//
//				printf("%c is an alphabet.\n", n);
//			else
//				printf("%c is not an alphabet.\n", n);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a;
//    while ((a = getchar()) != EOF)
//    {
//        if (a != '\n')    //��Ҫ�ж��ǲ��ǻس�
//        {
//            if (a >= 'A' && a <= 'z') printf("%c is an alphabet.\n", a);
//            else printf("%c is not an alphabet.\n", a);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int n=0;
//	//������ܹ��м����ɼ�
//	int max=0;
//	//��������ֵ
//	int m = 0;
//	//����һ����
//	int min = 100;
//	//������Сֵ
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (max < m)  //��������������ֵ��ʱ������������ֵ
//		{
//			max = m;
//		}
//		else if(min > m)//����СֵСʱ��������Сֵ
//		{
//			min = m;
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}

//#include <stdio.h>
//
//int mian()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		if ((i % 10000 + i % 1000 + i % 100 + i % 10) = i)
//			printf("%d", i);
//	}
//	return 0;
//}
int main()
{
    int i = 0;
    for (i = 9999; i <= 99999; i++)
    {
        int a = i / 10000;
        int a1 = i % 10000;
        int b = i / 1000;
        int b1 = i % 1000;
        int c = i / 100;
        int c1 = i % 100;
        int d = i / 10;
        int d1 = i % 10;
        if ((a * a1) + (b * b1) + (c * c1) + (d * d1) == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
