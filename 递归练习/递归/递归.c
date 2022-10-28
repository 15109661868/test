#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// double pow(int n,int k)
//{
//	 if (k == 0)
//		 return 1;
//	 else if (k > 0)
//		 return n * pow(n, k - 1);
//	 else
//		 return 1.0 / pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d  %d", &n,&k);
//	double ret = pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//int main()
//{  
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void reverse_string(char* str)
//{
//	int mkn = strlen(str);//strlen是求数组的个数
//	int left = 0;
//	int right = mkn-1;
//
//	while (left < right)
//	{
//		int mkn = *(str+ left);//str是起始地址
//		*(str + left) = *(str + right);
//		*(str + right) = mkn;
//		left++;
//		right--;///是个循环要加加或减减
//	}
//}
//指针来求
//void reverse_string(char* str)
//{
//	int man = strlen(str);
//	char* left = str;
//	char* right = str + man - 1;
//	while (left < right)
//	{
//		int tap =* left;
//		*left = *right;
//		*right = tap;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int N;
//        scanf("%d", &N);
//        sum += N;
//    }
//    printf("%d", sum);
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
#include <stdio.h>
//#include <string.h>
//int rad(int * me)
//{
//	int re = strlen(me);
//	char left = 0;
//	char right = re - 1;
//	while (left < right)
//	{
//		int tmp = *(me + left);
//		*(me + left) = *(me + right);
//		*(me + right) = tmp;
//		left++;
//		right--;
//	}
// }
//int main()
//{
//	int a= 0;
//	scanf("%d", &a);
//	char sun = rad(a);
//	printf("%d", sun);
//	return 0;
//}
//void ma(int a)
//{
//	if (a >= 1 && a <= 9)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", a % 10);
//		return (a / 10);
//	}
//		;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	ma(a);
//	printf("%d", ma);
//	return 0;
//}

#include<stdio.h>
void Integer(int n)
{
	if (n >= 1 && n <= 9)
	{
		printf("%d", n);

	}
	else
	{
		printf("%d", n % 10);
		Integer(n / 10);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Integer(n);
	return 0;
}