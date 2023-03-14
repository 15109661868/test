#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定 
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void print_table(int m)
//{
//	int r = 0;
//	for (r = 1; r <= m; r++)
//	{
//		int j = 0;
//		for (j = 1; j <= r; j++)
//		{
//			printf("%d*%d=%-2d ", r, j, r * j);
//		}
//		printf("\n");
//		//乘法表
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); //9.12
//	//输入要打多少的乘法表
//	print_table(n);
//	return 0;
//}

//double Pow(n, m)
//{
//	if (m > 0)
//		return n * Pow(n, m - 1);
//	else if (m == 0)
//		return 1.0;
//	else
//		return 1.0 / Pow(n, -m);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	printf("%lf", Pow(n, m));
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	//172+9
//	//17+2+9
//	//1+7+2+9
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}

