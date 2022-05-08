#define _CRT_SECURE_NO_WARNINGS 1
//#include <math.h>
//#include <stdio.h>
// sqrt是一个数学函数要用 math,h的引头文件
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int a=0;
//	int count = 0;
//	
//	for (a = 101; a <= 200; a+=2)
//	{
//		
//		if (is_prime(a))
//		{
//			printf("%d ", a);
//			count++;
//	    }
//	}
//	printf("\ncount=%d\n", count);
//		return 0;
//}
//#include <stdio.h>
// 闰年可以被四整除并且不能被100整除
// 闰年被400整除
//int is_lear(int year)
//{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			return 1;
//		}
//	
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_lear(year) != 0)
//		{
//			printf("%d ", year);
//		}
//	}
//		return 0;
// }
 
//#include <stdio.h>
//int binary_search(int arr[],int a,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left<=right)
//	{
//		int min = left + (right - left) / 2;
//		if (a < arr[min])
//		{
//			right = min - 1;
//		}
//		else if (a >arr[min])
//		{
//			left = min + 1;
//		}
//		else
//			return min;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int a = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int y = binary_search(arr, a, sz);
//	if (y == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了下标是=%d", y);
//	}
//	return 0;
//}
//每调用一次函数，num怎加1

//#include <stdio.h>
//void Add(int* h)
//{
//	(*h)++;
//}
//int main()
//{
//	int n = 0;
//	Add(&n);
//	printf("%d\n", n);
//	Add(&n);
//	printf("%d\n", n);
//	Add(&n);
//	printf("%d\n", n);
//	return 0;
//}
//#include <stdio.h>
//void print(unsigned int b)
//{
//	if (b > 9)
//	{
//		print(b / 10);
//	}
//	printf("%d ", b % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	
//	return 0;
//}
//#include <stdio.h>
//int fat(int n)
//{
//	int b = 0;
//	if (n < 1)
//	{
//		return 1;
//	}
//	else
//		b = n * fat(n - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fat(a);
//	printf("ret=%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int fat(int n)
//{
//	int a = 0;
//	int tu = 1;
//		for (a = 2; a <= n; ++a)
//		{
//			tu = a*tu;
//	    }
//		return a;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fat(a);
//	printf("ret=%d", ret);
//	return 0;
//}
