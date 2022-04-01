#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int ch = 0;
//    
//    while ((scanf("%d", ch)) != EOF)
//    {
//        int b=ch % 2;
//        if (b == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//    return 0;
////}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    while ((scanf("%d", &a)) != EOF)
//    {
//        int b = a % 4;
//        if (b > 0)
//            printf("no\n");
//        else
//            printf("yes\n");
//    }
//    return 0;
//}   ;
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d",& a);
//    for (a = 1; a <= 20; a++)
//    {
//        int j = 0;
//        for (j = 0; j = a;)
//            printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = a / b;
//    scanf("%d %d\n", &a, &b);
//    printf("%d", c);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//}
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("未成年\n");
    }
    else
    {
        printf("成年\n");
    }
}
