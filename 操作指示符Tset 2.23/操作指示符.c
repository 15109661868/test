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
//	printf("%d\n", sizeof(arr));  //int*arr Ϊ4������ָ����ֽڳ���ռ���Ƕ��٣�����Զ��4
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
//	//��������
//	//��������������Ԫ�صĵ�ַ
//	//������2�����⣺
//	//1.sizeof��������������������ʾ�������飬������Ԫ�صĵ�ַ��sizeof�������������������������Ĵ�С����λ���ֽڡ�
//	//2 &����������������ʾ�������飬������Ԫ�صĵ�ַ�� &������ȡ��������������ĵ�ַ
//	test1(arr);                                    
//	test2(ch);                  
//	return 0;
//}
#include <stdio.h>

//int main()
//{ 
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - �ڴ��еĲ���
//	//11111111111111111111111111111110 - ����
//	//10000000000000000000000000000001 - Դ��
//	//����-1
//	printf("%d\n", ~a);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int n = 0;
//	scanf("%d", &n);
//	//��a�ĵ�n��λ��Ϊ1
//	a = a | (1 << (n-1));
//	printf("%d\n", a);
//
//	//��a�ĵ�n��λ��Ϊ0
//	a = a & ~(1 << (n - 1));
//	printf("%d\n", a);
//	//00000000000000000000000000001010
//	//00000000000000000000000000000100
//	// 1<<2
//	//���ó�  00000000000000000000000000001110 = 14
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	//int b = ++a; //ǰ��++����++����ʹ��
//	////a=a+1,b=a
//	int b = a++; //����++����ʹ�ã���++
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
//	//��������ֻҪΪ�����Ͳ��ü���
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
//	struct book sp = { "�ǺǺ�", 55 };
//	printf("%s %d", sp.name, sp.price); //�ṹ�����.�ṹ���Ա��
//	struct book* pp = &sp;
//	printf("%s %d", (*pp).name, (*pp).price);
//	printf("%s %d", pp->name, pp->price); //�ṹ�����->�ṹ���Ա��
//	return 0;
//}

