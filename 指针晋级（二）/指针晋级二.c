#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int  Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//函数指针数组
//	int (*ps[5])(int, int) = { Add,Sub };
//
//
//	//函数的回调函数
//	int (*(*ppas)[5])(int, int) = &ps;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//Cacl (int(*pd)(int x,int y))
//{
//	
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数>: ");
//	scanf("%d %d", &x, &y);
//	ret = pd(x, y);
//	printf("%d \n", ret);
//}
//
//
//
//void print()
//{
//	printf("************************\n");
//	printf("****1.add  2.aub********\n");
//	printf("****3.mul  4.div********\n");
//	printf("****0.exit    **********\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		print();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Cacl(Add);
//			break;
//		case 2:
//			Cacl(Sub);
//			break;
//		case 3:
//			Cacl(Mul);
//			break;
//		case 4:
//			Cacl(Div);
//			break;
//		case 0:
//				printf("退出");
//				break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	//存放函数指针的数组 - 函数指针数组
//	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
//	//0 1 2 3
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pf[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}\
//}

//bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem;
//			}
//		}
//	}
//}
//
print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//
//int main()
//{
//	int arr[] = { 6,2,3,5,1,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void qsort( void *base,  数组的第一个元素
//size_t num,  选择的元素个数
// size_t width,  元素个数的大小
// int (*com )(const void *elem1, const void *elem2 ) );
//

//int conme(const void* p1, const void* p2)
//{
//	return  *(int*)p1 -  *(int*)p2;
//}
//
//
//print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//test1()
//{
//	int arr[] = { 6,3,1,4,2,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), conme);
//	print(arr, sz);
//}
// int (*com )(const void *elem1, const void *elem2 ) );

//结构体比较：struct
//字符串比较：strcmp
struct src
{
	char name[20];
	int age;
};

int tou_age(const void* p1, const void* p2)
{
	return ((struct src*)p1)->age - ((struct src*)p2)->age;
}

int tou_name(const void* p1, const void* p2)
{
	return strcmp(((struct src*)p1)->name, ((struct src*)p2)->name);
}

//void test2()
//{
//	struct src s[] = { {"zhangwenrui",20},{"mafuze",19},{"ahouqiao",45}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), tou_age);
//	//qsort(s, sz, sizeof(s[0]), tou_name);
//}

int Smwo(char* bush1, char* bush2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tem = *bush1;
		*bush1 = *bush2;
		*bush2 =  tem;
		bush1++;
		bush2++;
	}
}

int conme(const void* p1, const void* p2)
{
	return  *(int*)p1 -  *(int*)p2;
}

int bubble_sort(void* base, size_t num, size_t width, int(*ps)(const void* p1, const void* p2))
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (ps((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				Smwo((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

void test3()
{
	int arr[] = { 6,3,1,4,2,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), conme);
	print(arr, sz);
}

void test4()
{
	struct src s[] = { {"zhangwenrui",20},{"mafuze",19},{"ahouqiao",45}};
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), tou_age);
	//qsort(s, sz, sizeof(s[0]), tou_name);
}



int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}