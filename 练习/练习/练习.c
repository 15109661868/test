#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//    int a, i;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        
//            printf("*");
//            printf("\n");
//        
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	
//	while(scanf("%d", &a)!=EOF)
//	for (n = 1; n <= a; n++)
//	{
//		int r = 0;
//		
//		for (r = 1; r <a; r++)
//		{
//			printf("* ");
//			
//		}
//		printf("* \n", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, n, b;
//	scanf("%d", &a);
//	for (n = 1; n <= a; n++)
//	{
//		
//		for (b = 1; b < n; b++)
//		{
//			printf("* ");
//		}
//		printf("* \n", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a, n, b;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (n = a; n > 0; n--)
//		{
//
//			for (b = n; b > 0; b--)
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
	int a, b, c;
	scanf("%d", &a);
	for (b = a; b >0; b--)
	{
		for (c =0; c <b; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}