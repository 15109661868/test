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

//#include<stdio.h>
//void Integer(int n)
//{
//	if (n >= 1 && n <= 9)
//	{
//		printf("%d", n);
//
//	}
//	else
//	{
//		printf("%d", n % 10);
//		Integer(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Integer(n);
//	return 0;
//}
#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d", &a);
//
//	for (n = 0; n < 4; n++)
//	{
//		int m = 1;
//		for (m = 1; m < 2; m++)
//		{
//			if (a > 5)
//			{
//				printf("jajaj", a);
//				break;
//			}
//			if (a < 5)
//			{
//				pritf("lll", a);
//				continue;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m, n;
//	for (m = 0; m < 5; m++)
//	{
//		for (n = 0; n < 4; n++)
//		{
//			if (n == 1)
//			{
//				printf("l ");
//				continue;
//			}
//			else if (n == 2)
//			{
//				printf("2 ");
//				//continue;
//			}
//			else if (n == 3)
//			{
//				printf("3 ");
//				//continue;
//			}
//			else
//				printf("0 ");
//			continue;
//			//break;
//			//else if (n == 2)
//			//{
//			//	printf("2");
//			//}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 1;
//
//    int m = 2;
//     switch (n)
//  {
//     case 1:
//        m++;
//     case 2:
//         n++;
//     case 3:
//       switch (n)
//        {//switch允许嵌套使用
//           case 1:
//              n++;
//           case 2:
//              m++;
//              n++;
//           break;
//         }
//     case 4:
//        m++;
//     break;
//     default:
//        break;
//   }
//      printf("m = %d, n = %d\n", m, n);
//       return 0;
//}
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 2; i++)
	{
		int m = 0;
		for (m = 1; m < 6; m++)
		{
			if (m == 2)

			{	//break;

				printf("%d\n", m);
				continue;
				//break;
			}
			else
				printf("1");
		}
	}
	return 0;
}
//代码2
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
