#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d", &c);
//    a = a / 3600;  //一个小时的秒数
//    b = a / 60 % 60; //这是除了小时，取模是分钟
//    c = a % 60; //取得是秒数
//    printf("%d %d %d", a,b,c);
//    return 0;
//}
//int main() 
//{
//    int h, m, s;
//    scanf("%d", &s);
//    h = s / 60 / 60;//计算小时
//    m = s / 60 % 60;//计算分(取模就是去掉转换成小时的分钟数）
//    s = s % 60;//计算秒数
//    printf("%d %d %d", h, m, s);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a,b;
//    for (a = 1; a <= 9; a++)
//    {
//        for (b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%d ", a, b, a * b);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    for (a = 1; a <= 100; a++)
//    {
//        if (a % 2 > 0)
//        {
//            for (b = 1; b <= a; b++)
//                printf("%d", b);
//        }
//        else
//
//    }
//
//        return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("%c%c%c%c%c", a + 4);
//	return 0;
//}
#include <stdio,h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.3f", b / a);
	return 0;
}