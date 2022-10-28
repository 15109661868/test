#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float fun(int* a, int n) 
{
    float sum = 0;
    while (n--) {
        if (*a > 60) sum += 0.2;
        else sum += 0.1;
        a++;
    }
    return sum;
}
int main() 
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("%.2f", fun(a, n));
}