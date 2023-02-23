#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	short s = 10;
//	int a = 2;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
	/*int a = 0;
	int* p;
	int arr[10];
	printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(p));
	printf("%zu\n", sizeof a);
	printf("%zu\n", sizeof p);
	printf("%zu\n", sizeof(arr[2]));*/
//	return 0;
//} 
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));  //int*arr 为4，无论指针的字节长度占用是多少，它永远是4
//	//4
//}   
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	//4
//} 
//int main() 
//{
//	int arr[10] = { 0 };                         
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));  //40    
//	printf("%d\n", sizeof(ch)); //10
//	//数组名：
//	//数组名是数组首元素的地址
//	//但是有2个例外：
//	//1.sizeof（数组名），数组名表示整个数组，不是首元素的地址。sizeof（数组名）计算的是整个数组的大小，单位是字节。
//	//2 &数组名，数组名表示整个数组，不是首元素的地址。 &数组名取出的是整个数组的地址
//	test1(arr);                                    
//	test2(ch);                  
//	return 0;
//}
#include <stdio.h>

//int main()
//{ 
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 内存中的补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 源码
//	//最后得-1
//	printf("%d\n", ~a);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int n = 0;
//	scanf("%d", &n);
//	//把a的第n的位置为1
//	a = a | (1 << (n-1));
//	printf("%d\n", a);
//
//	//把a的第n的位置为0
//	a = a & ~(1 << (n - 1));
//	printf("%d\n", a);
//	//00000000000000000000000000001010
//	//00000000000000000000000000000100
//	// 1<<2
//	//最后得出  00000000000000000000000000001110 = 14
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	//int b = ++a; //前置++，先++，后使用
//	////a=a+1,b=a
//	int b = a++; //后置++，先使用，后++
//	//b=a;a=a++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
// }

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	//两个都是只要为真后面就不用计算
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n" , a, b, c, d);
//	return 0;
//}

//int main()
//
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 4;
//	}
//	else
//		b = 0;
//	b = ((a > 5) ? 4 : 0);
//	printf("%d\n", b);
//}
//struct book
//{
//	char name[250];
//	int price;
//};
//
//int main()
//{
//	struct book sp = { "呵呵呵", 55 };
//	printf("%s %d", sp.name, sp.price); //结构体变量.结构体成员名
//	struct book* pp = &sp;
//	printf("%s %d", (*pp).name, (*pp).price);
//	printf("%s %d", pp->name, pp->price); //结构体变量->结构体成员名
//	return 0;
//}

