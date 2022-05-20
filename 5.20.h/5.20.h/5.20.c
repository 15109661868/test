#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//#include<stdio.h>
//int main() 
//{
//	int a;
//	while (scanf("%d", &a) != EOF) 
//	{
//		int i, k;
//		for (k = 0; k < a; k++) 
//		{
//			for (i = 0; i < (a - k - 1); i++) 
//			{
//				printf(" ");
//			}
//			for (i = 0; i <= k; i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a ;
//	while (scanf("%d", &a)!=EOF)
//	{
//		int n = 0;
//		for (n = 0; n <a; n++)
//		{
//			int m, k;
//			for (m = 0; m <a -n- 1; m++)
//			{
//				printf(" ");
//			}
//			for (k = 0; k <n; k++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	for (i = a; i > 0; i--)
	{
		int b = 0;
		for (b = a; b > 0; b--)
		{
			printf(" ");
		}

	}
	return 0;

}