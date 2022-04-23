#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	long yers = 0;
//	int mat = 0;
//	int day = 0;
//	scanf("%d %d %d", &yers, &mat, &day);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int r = 0;
//	int s = 1;
//	for (a = 1; a <= 10; a++)
//	{
//		s = s * a;
//		r = r + s;
//	}
//	printf("%d", r);
//		return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;	
//	while (left <= right)
//	{
//		int mi = (left + right) / 2;
//		if (arr[mi] < k)
//		{
//			left = mi + 1;
//		}
//		else if (arr[mi] > k)
//		{
//			right = mi - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mi);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mi = (left + right) / 2;
//		if (mi < k)
//		{
//			left = mi + 1;
//		}
//		else if (mi > k)
//		{
//			right = mi - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", arr[mi]);
//			break;
//		}
//	}
//	return 0;
//}
int Fun(int n)
{
    if (n == 5)
        return 2;
    else
        return 2 * Fun(n + 1);
}
