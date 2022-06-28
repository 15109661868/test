#define _CRT_SECURE_NO_WARNINGS 1




//1
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int gongzi = 0;
//	scanf("%d %d", &year, &gongzi);
//	if (year >= 20)
//	{
//		int a = 0;
//		if (gongzi >= 2000)
//		{
//			a = gongzi + 200;
//		}
//		else
//		a = gongzi + 180;
//		printf("现工资是>:%d", a);
//	}
//	else
//	{
//		int b = 0;
//		if (gongzi >= 1500)
//		{
//			b = gongzi + 150;
//		}
//		else
//		b = gongzi + 120;
//		printf("现工资是>:%d", b);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int hum, ten, is, m;
//	
//	for (m = 100; m < 1000; m++)
//	{
//		hum = m / 100;
//		ten = (m - hum * 100) / 10;
//		is = m % 10;
//		if (m== hum * hum * hum + ten * ten * ten + is * is * is)
//		printf("水仙花数是>:%d\n ", m);
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int hun, ten, is, m;
//	printf("result is:");
//	for (m = 100; m < 1000; m++)  /*整数的取值范围*/
//	{
//		hun = m / 100;
//		ten = (m - hun * 100) / 10;
//		is = m % 10;
//		if (m == hun * hun * hun + ten * ten * ten + is * is * is)  /*各位上的立方和是否与原数n相等*/
//			printf("%d  ", m);
//	}
//	printf("\n");
//
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	int b = (0 <= x && x < 2) ? 1 : (2 <= x && x < 4) ? 2 : (x >= 4) ? 3:4;
//	switch (x)
//	{
//	case 1:
//	{
//		y=x;
//			break;
//	}
//	case 2:
//	{
//		y=2*x - 2;
//
//	}
//	case 3:
//	{
//		y=3 * x - 6;
//		break;
//	}
//	case 4:
//		break;
//	}
//	printf("y=%f", y);
//	return 0;
//}*/
//#include <stdio.h>
//
//int main()
//{
//	int x, y,n;
//	scanf("%d", &x);
//	if (0 <= x && x < 2)n = 1;
//	else if (2 <= x && x < 4)n = 2;
//	else if (x>=4)n = 3;
//	switch (n)
//	{
//	case 1: printf("y=%d", x); break;
//	case 2: printf("y=%d", 2 * x - 2); break;
//	case 3: printf("y=%d", 3 * x-6); break;
//	}
//	return 0;
//}#include 
#include <stdio.h>

int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            //先打印空格
            int j = 0;
            for (j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            //打印“* ”
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}