#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d ", a / b);
//    printf("%d", a % b);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i <sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//
//}
#include <stdio.h>

int main()
{
    int a = printf("Hello world!");
    printf("\n%d", a);
    return 0;
}