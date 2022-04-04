#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int a = 60;
//    if (a >= 60);
//    {
//        printf("及格");
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 140)
//        printf("Genius\n");
//    else
//        printf("你是个平庸的人");
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	printf("菜单\n");
//	printf("输入选项\n");
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		printf("打开\n");
//	}
//	else if (i == 2)
//	{
//		printf("输入\n");
//	}
//	else
//		printf("选项\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("2\n");
//	case 2:
//		printf("4\n");
//	case 3:
//		printf("6\n");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("2\n");
//		break;
//	case 2:
//		printf("4\n");
//		break;
//	case 3:
//		printf("6\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch;
//#include <stdio.h>
//    int main()
//    {
//        char ch;
//        scanf("%c", ch);
//        if (ch >= 'A' && ch <= 'Z')
//            printf("%c is an alphabet.", ch);
//        else
//            printf("%c is an alphabet.", ch)
//            return 0;
//    }
//    if (ch >= 'A' && ch <= 'Z')
//        printf("%c is an alphabet.", ch);
//    else
//        printf("%c is an alphabet.", ch);
//        return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch;
//    while ((ch = getchar() != EOF))
//    { 
//        if (ch != '\n')
//        {
//            if (ch >= 'A' && ch <= 'Z')
//                printf("%c is an alphabet.", ch);
//            else
//                printf("%c is an alphabet.", ch);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    if (a > 0 && a < 100)
//    {
//        printf("%f", a);
//    }
//    else if (a >= 100 && a < 500)
//    {
//        printf("%.1f", a * 0.9);
//    }
//    else if (a >= 500 && a < 2000)
//    {
//        printf("%.1f", a * 0.8);
//    }
//    else if (a >= 2000 && a < 5000)
//    {
//        printf("%.1f", a * 0.7);
//    }
//    else
//        printf("%.1f", a * 0.6);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a <= 10)
//    {
//        printf("w");
//    }
//    else
//        printf("v");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int x, x1, y, y1;//定义变量
//    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
//    if (x1 > x && y1 - y == 0)  
//    {
//        printf("r");
//    }
//    else if (x1 - x == 0 && y1 > y)
//    {
//        printf("u");
//    }
//    else if (x1 - x == 0 && y1 < y)
//    {
//        printf("d");
//    }
//    else
//        printf("l");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1: //符合条件 输出对应的语句
//        printf("Monday\n");
//        break;
//    case 2:
//        printf("Tuesday\n");
//        break;
//    case 3:
//        printf("Wednesday\n");
//        break;
//    case 4:
//        printf("Thursday\n");
//        break;
//    case 5:
//        printf("Friday\n");
//        break;
//    case 6:
//        printf("Saturday\n");
//        break;
//    case 7:
//        printf("Sunday\n");
//        break;
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
    int a = 100;
    scanf("%d", &a);
    switch (a)
    {
    case 200:
        printf("OK\n");
    case 202:
        printf("Accepted\n");
    case 400:
        printf("Bad Request\n");
    case 403:
        printf("Forbidden\n");
    case 404:
        printf("Not Found\n");
    case 500:
        printf("Internal Server Error\n");
    case 502:
        printf("Bad Gateway\n");
    }
    return 0;
}