#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int  A[5] = { 1,2,3,4,5 };
//	int B[5] = { 6,7,8,9,0 };
//	int sz = sizeof A / sizeof A[5];
//	int i = 0;
//	int tem = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tem = A[i];
//		A[i] = B[i];
//		B[i] = tem;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	return 0;
// }
// 
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//void init(int arr[],int sz)
//{
//	int r = 0;
//	for (r = 0; r < sz; r++)
//	{
//		arr[r] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int r = 0;
//	for (r = 0; r < sz; r++)
//	{
//		printf("%d", arr[r]);
//	}
//	printf("\n");
//}
//void reverse(int arr1[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tem = 0;
//	
//	while (left < right)
//	{
//		tem = arr1[left];
//		arr1[left] = arr1[right];
//		arr1[right] = tem;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	reverse(arr1, sz);
//	print(arr1, sz);
//	init(arr1, sz);
//	print(arr1, sz);
//	return 0;
//}
//int main()
//{
//	char ac;
//	short bc;
//	int cc;
//	char* a;
//	short* b;
//	int* c;
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int r = 0x11223344;
//	int* pa = &r;
//	char* pc = &r;
//	*pc = 0;
//	*pa = 0;
//	return 0;
//int main()
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p = test();
//	*p = 100;
//	return 0;
//}
int main()
{
	int a = 10;
	int* p = &a;

	//һ��ָ�벻֪��Ӧ��ָ�������ʱ����ʱ���Գ�ʼ��ΪNULL;
	//int* p = NULL;
	if (p != NULL)
	{
		*p = 100;
	}

	return 0;
}