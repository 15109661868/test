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
//�������������������Ԫ�صĵ�ַ
//�������������⣺
//1.sizeof(������)�Ǳ�ʾ�������ּ���õ����ܴ�С
//&arr  -  ��ʾ������������飬ȡ��������������ĵ�ַ���ӵ�ֵַ�ĽǶ��������������Ԫ�صĵ�ַ��һ���ģ��������岻һ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (*p)[10] = &arr;
//	int i = 0;
//	//p==&arr
//	// *p=*&arr
//	// Ҳ����˵*p==arr
//	//��Ȼ�ǶԵĵ��ǲ��Ƽ�
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//	//
//	//��һ��
//	//1.���±����ʽ����
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;*/
//	
//	//2.��ָ�����ʽ����
//	for (i = 0; i < sz; i++)
//	{
//		pritf("%d ", *(p+i));
//	}
//}


//һά���鴫�Σ��β�������
//void print(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//һά���鴫�Σ��β���ָ��
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
//	//��ά�������������Ҳ��ʾ��Ԫ�صĵ�ַ
//	// ��ά�������Ԫ�ؾ��ǵ�һ��
//	//��Ԫ�صĵ�ַ���ǵ�һ�е�����ĵ�ַ��ͬʱҲ��һά����ĵ�ַ
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
//	//pf�Ǻ���ָ��
//	int (*pf)(int,int) = Add;//����ָ��Ҫ������������Ҫ���ں���ָ���������
//
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3,5);
//	int ret = pf(3, 5);
//
//	printf("%d ", ret);
//
//	return 0;
//}

//����1��
//(*( void (*)() ) 0)();
//int main()
//{
	//1. ��0ǿ������ת��Ϊvoid (*)() ���͵ĺ���ָ��
	//2. �����ζ��0��ַ������һ������������û����������������void
	//3. ����0��ַ�����������
	//���������һ�κ�������
	//(*( void (*)() ) 0)();

	//����2
	//void (* signal(int, void(*)(int) ) )(int);
	//
//	pf_t signal(int, pf_t);
	//�����Ĵ�����һ������������
	//������������signal
	//signal�����Ĳ�����һ����int���ͣ��ڶ�����void(*)(int)���͵ĺ���ָ��
	//�ú���ָ��ָ��ĺ���������int������������void
	// 
	//signal�����ķ�������Ҳ��һ������ָ��
	//�ú���ָ��ָ��ĺ���������int������������void
	//
	//void (* signal(int, void(*)(int)))(int)
//	return 0;
//}



//����ָ������

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
////дһ��������
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//				printf("�������");
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
		printf("������>: ");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("������������>:");
			scanf("%d %d", &x, &y);
			re = ps[input](x, y);
			printf("%d\n", re);
		}
		else
		{
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}