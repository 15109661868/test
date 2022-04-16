#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%.3f", b / a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a, b, c, d, n, m;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    n = a > b ? a : b;
//    m = c > d ? c : d;
//    printf("%d", n > m ? n : m);
//
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//    float a;
//    double b;
//    scanf("%f", &a);
//    b = (4.000 / 3 * 3.1415926 * a * a * a);
//    printf("%.3f", &b);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    float a;
//    double b;
//    scanf("%f", &a);
//    b = (4.000 / 3 * 3.1415926 * a * a * a);
//    printf("%.3f", b);
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    float c;
//    scanf("%d %d", &a, &b);
//    c = a / b * b;
//    printf("%f", c);
//    return 0;
//}
#include <stdio.h>


int main()
{
    int height, wigh;
    float c;
    scanf("%d %d", &wigh, &height);
    float height2 = height / 100.00;
    c = wigh / (height2 * height2);
    printf("%.2f", c);
    return 0;
}