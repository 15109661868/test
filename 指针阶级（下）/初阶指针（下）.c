#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define N_VALUES 5
//int val(float* vul)
//{
//	float* vp;
//	int count = 0;
//	for (vp = &vul[0]; vp < &vul[3];)
//	{
//		count++;
//		*vp++ = 0;
//	}
//	return count;
//}
//int main()
//{
//	char val = "abcd";
//	int me=val;
//	printf("%d ", me);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//一级指针
//	int* pa = &a;
//	//二级指针
//	int** ppa=&pa;
//	printf("%d ", *pa);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* pa[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", pa[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
// }

	

//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int z = 0;
//	int* i = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (z = 0; z < sz; z++)
//	{
//		printf("%d ", *i);
//		i++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int git = 0;
//	scanf("%d", &git);
//	for (i = 0; i < git; i++)
//	{
//		int j = 0;
//		for (j = 0; j < git - 1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < git - 1; i++)
//	{
//		int m = 0;
//		for (m = 0; m <= i; m++)
//		{
//			printf(" ");
//		}
//		for (m = 0; m < 2*(git -1-i)-1; m++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", *p.a);
//	return 0;
//}
//void mat(char* admin)
//{
//	
//	char* left = admin;
//	char* right = admin+strlen(admin) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//
//	}
//}
//int main()
//{
//	char admin[]="good";
//	
//	mat(admin);
//	return 0;
//}
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//
//int main()
//{
//    char str[] = "hello bit";
//    //在这里完成下面函数，参数自己设计，要求：使用指针
//    Reverse(str);
//    return 0;
//}
