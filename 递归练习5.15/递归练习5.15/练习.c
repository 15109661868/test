#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
////#include <string.h>
////int my_strlen(char* str)
////{
////	int comme = 0;
////	while (*str != '\0')
////	{
////		comme++;
////		str++;
////	}
////	return comme;
////}
////int main()
////{
////	char arr[] = "abcd";
////	int cte = my_strlen(arr);
////	printf("%d\n", cte);
////	return 0;
////}
//#include <stdio.h>
//int your_strlen(char* tur)
//{
//	int moot = 0;
//	while(*tur != '\0')
//	{
//		moot++;
//		tur++;
//	}
//	return moot;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int mon = your_strlen(arr);
//	printf("%d", mon);
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int your_strlen(char* tur)
//{
//	if (*tur != '\0')
//		return 1 + your_strlen(tur + 1);
//	else
//			return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int mon = your_strlen(arr);
//	printf("%d", mon);
//	return 0;
//}
//#include <stdio.h>
//int digitsum(int n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + n % 10;
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = digitsum(a);
//	printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int pow(int n,int m)
//{
//	if (m == 0)
//		return 1;
//	else if (m >= 1)
//	{
//		return n * pow(n, m - 1);
//	}
//}
//int main()
//{
//	int n = 1;
//	int m = 0;
//	scanf("%d%d", &n,&m);
//	int ret=pow(n,m);
//	printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int fib(int n )
//{
//	if (n <= 2)
//	
//		return 1;
//	
//	else
//	
//		return fib(n - 1) + fib(n - 2);
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fib(a);
//	printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return a;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
#include <stdio.h>
int mo(int a)
{
	int b = 1;
	int c = 1;
	int d = 0;
	
	while (a >= 3)
	{
		d = b + c;
		b = c;
		c = d;
		a--;
	}
	return d;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = mo(a);
	printf("%d", ret);
	return 0;
}