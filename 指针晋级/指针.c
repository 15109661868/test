#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	return 0;
//}
//数组名绝大情况下是首元素的地址
//但是有两个例外：
//1.sizeof(数组名)是表示整个数字计算得到的总大小
//&arr  -  表示这里的整个数组，取出的是整个数组的地址，从地址值的角度来讲和数组的首元素的地址是一样的，但是意义不一样

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (*p)[10] = &arr;
//	int i = 0;
//	//p==&arr
//	// *p=*&arr
//	// 也就是说*p==arr
//	//虽然是对的但是不推荐
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//	//
//	//简化一下
//	//1.用下标的形式访问
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;*/
//	
//	//2.用指针的形式访问
//	for (i = 0; i < sz; i++)
//	{
//		pritf("%d ", *(p+i));
//	}
//}


//一维数组传参，形参是数组
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//一维数组传参，形参是指针
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//void print(int arr[3][5], int r, int m)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int(*arr)[5], int r, int m)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *((*arr + i) + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//二维数组的数组名，也表示首元素的地址
//	// 二维数组的首元素就是第一行
//	//首元素的地址就是第一行的数组的地址，同时也是一维数组的地址
//	print(arr, 3, 5);
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf是函数指针
//	int (*pf)(int,int) = Add;//函数指针要储存起来，需要放在函数指针变量里面
//
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3,5);
//	int ret = pf(3, 5);
//
//	printf("%d ", ret);
//
//	return 0;
//}

//代码1：
//(*( void (*)() ) 0)();
//int main()
//{
	//1. 将0强制类型转换为void (*)() 类型的函数指针
	//2. 这就意味着0地址处放着一个函数，函数没参数，返回类型是void
	//3. 调用0地址处的这个函数
	//下面代码是一次函数调用
	//(*( void (*)() ) 0)();

	//代码2
	//void (* signal(int, void(*)(int) ) )(int);
	//
//	pf_t signal(int, pf_t);
	//上述的代码是一个函数的声明
	//函数的名字是signal
	//signal函数的参数第一个是int类型，第二个是void(*)(int)类型的函数指针
	//该函数指针指向的函数参数是int，返回类型是void
	// 
	//signal函数的返回类型也是一个函数指针
	//该函数指针指向的函数参数是int，返回类型是void
	//
	//void (* signal(int, void(*)(int)))(int)
//	return 0;
//}



//函数指针数组

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
//
////写一个计算器
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
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//
//	do
//	{
//		print();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//				printf("输入错误");
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void print()
{
	printf("************************\n");
	printf("****1.add  2.aub********\n");
	printf("****3.mul  4.div********\n");
	printf("****0.exit    **********\n");
	printf("*************************\n");
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int re = 0;
	int (*ps[])(int, int) = { NULL,Add,Sub,Mul,Div };
	do
	{
		print();
		printf("请输入>: ");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个数>:");
			scanf("%d %d", &x, &y);
			re = ps[input](x, y);
			printf("%d\n", re);
		}
		else
		{
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}