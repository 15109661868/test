#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ�� 
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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
//		//�˷���
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); //9.12
//	//����Ҫ����ٵĳ˷���
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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

