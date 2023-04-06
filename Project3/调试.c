#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//my_strlen(const char* str)
//{
//	int count = 0;
//	//assert(str != NULL);
//	assert(str);
//	//while(str!='\0')
//	while (str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
//void min(int ch[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tem = 0;
//	while (left < right)
//	{
//		while (left < right && (ch[left] % 2 == 1))
//		{
//			left++;
//		}
//		while (left < right && (ch[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tem = ch[left];
//			ch[left] = ch[right];
//			ch[right] = tem;
//		}
//	}
//}
//int main()
//{
//	int ch[] = {1,2,3,4,5};
//	//scanf("%d", &ch);
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	int i = 0;
//	min(ch,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", ch[i]);
//	}
//	
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	//断言 - 保证指针的有效性
//	assert(dest && src);
//	char* ret = dest;
//	//把src指向的字符串拷贝到dest指向的数组空间，包括\0字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	//链式访问
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int check(int* p)
//{
//	int i = 0;
//	int tem[7] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		if (tem[p[i]])
//		{
//			return 0;
//		}
//		tem[p[i]] = 1;
//	}
//	return 1;
//}
//int main()
//{
//	int ch[5];
//	int i = 0;
//	for (ch[0] = 1; ch[0] <= 5; ch[0]++)
//	{
//		for (ch[1] = 1; ch[1] <= 5; ch[1]++)
//		{
//			for (ch[2] = 1; ch[2] <= 5; ch[2]++)
//			{
//				for (ch[3] = 1; ch[3] <= 5; ch[3]++)
//				{
//					for (ch[4] = 1; ch[4] <= 5; ch[4]++)
//					{
//						if ((ch[1] == 2) + (ch[0] == 3) == 1 && 
//							(ch[1] == 2) + (ch[4] == 4) == 1 && 
//							(ch[2] == 1) + (ch[3] == 2) == 1 && 
//							(ch[2] == 5) + (ch[3] == 3) == 1 && 
//							(ch[4] == 4) + (ch[0] == 1) == 1 && 
//							check(ch))
//						{
//							for (i = 0; i < 5; i++)
//							{
//								printf("%d", ch[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int retman = 0;
//	for (retman = 'a'; retman <= 'd'; retman++)
//	{
//		if ((retman != 'a') + (retman == 'c') + (retman == 'd') +( retman != 'd')==3)
//		
//			printf("凶手是：%c", retman);
//	}
//	return 0;
//}

//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //第一行直接填好，播下种子
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //从第二行开始填
//	{
//		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
//		for (j = 1; j <= i; j++) //从第二列开始填
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
//		}
//	}
//
//	for (i = 0; i < n; i++) //填完打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("% d % d", a + b, c);
	return 0;
}