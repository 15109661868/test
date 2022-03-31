// trxt 3.31.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
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
#include <stdio.h>

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}