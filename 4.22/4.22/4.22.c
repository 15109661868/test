#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	for (a =0; a < 3; a++)
//	{
//		printf("请输入密码>:");
//		scanf("%s", password);
//		if (strcmp(password, "abcd") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(a = 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//		return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("********** 1.猜字游戏*******\n");
//	printf("********** 2.退出游戏*******\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int b = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &b);
//
//		if (b > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (b < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜中了,是%d\n", b);
//			break;
//		}
//	}
//  }
//
//int main()
//{
//	
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入>:");
//		scanf("%d", &a);;
//		switch (a)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误\n");
//				break;
//		}
//	} while (a);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char a[20] = { 0 };
//	system("shutdown -s -t 60");
//	agan:
//	printf("请注意,你的电脑在60秒后关机,请输入我是猪,取消关机\n");
//	scanf("%s", &a);
//	if (strcmp(a, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto agan;
//	return  0;
//}
//#include <stdio.h>
//
//void geet(int*pc,int *pd)
//{
//	int z = 0;
//	z =*pc;
//	*pc= *pd;
//	*pd = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	geet(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//
//again(int x)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	again(a);
//	printf("%d", a);
//	return 0;
//}
#include <stdio.h>
int main() 
{
    int a = 0;
   
    int b = 0;
    int c = 0;
    
    scanf("%d%d", &a, &b);
    c = (b - a) + b;
    printf("%d", c);
    return 0;
}