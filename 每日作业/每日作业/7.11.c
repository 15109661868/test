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
//				arr[j + 1] = tam;：
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

///*
//根据题意，小乐乐可以选择走一步或者走两步，则走到n步的方法数之和有两种情况
////1、先按照某种方法走到第n-2阶，最后一次直接跨两阶
//2、先按照某种方法走到第n-1阶，最后一次只跨一阶
//也就是，最后到达n步的方法只有这两种，要么是跨一阶到达，要么是跨两阶到达
//所以，假设走到第n阶所用的方法总数为f（n），则f（n）=f（n-2）+f（n-1）；
//搞清楚这个接下来解题就很简单了，可以用递归和迭代都可以
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
//        if (a != '\n')    //主要判断是不是回车
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
//	//定义的总共有几个成绩
//	int max=0;
//	//定义的最大值
//	int m = 0;
//	//定义一个数
//	int min = 100;
//	//定义最小值
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (max < m)  //当定义的数比最大值大时，则这就是最大值
//		{
//			max = m;
//		}
//		else if(min > m)//比最小值小时，则是最小值
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
