#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int i, j, k;
//void f1()
//{
//	for (j = 1; j <= 3 - i; j++)
//		printf(" ");
//}
//void f2()
//{
//	for (k = 1; k <= 2 * i + 4; k++)
//		printf("%c", 3);
//}
//main()
//{
//	printf(" %c%c %c%c\n", 3, 3, 3, 3);
//	for (i = 1; i <= 3; i++)
//	{
//		f1(   );
//		f2(   );
//		f1(   );
//		f1(   );
//		f2(   );
//		f1(   );
//		printf("\n");
//	}
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//			printf(" ");
//		for (k = 1; k <= 22 - 2 * i; k++)
//			printf("%c", 3);
//		printf("\n");
//	}
//}
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#define I 20
//#define R 340
//#include <string.h>
//int main()
//{
//	char answer[10];
//	printf("������\n�Ҳŷ���\n�������е�����\n�ƺ��������ҵ���Ľ��\n\n");
//	printf("�������ң��ӽ�����ӳ����\n���ĵ���\n");
//	printf("����yes��no,���Enter");
//	printf("\n  ");
//	scanf("%s", answer);
//	char b[4] = "yes";
//	if (strcmp(answer, b) == 0)
//	{
//		float y, x, z, f;
//		for (y = 1.5f; y > -1.5f; y -= 0.1f)
//		{
//			for (x = -1.5f; x < 1.5f; x += 0.05f)
//			{
//				z = x * x + y * y - 1;
//				f = z * z * z - x * x * y * y * y;
//				putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
//			}
//			putchar('\n');
//		}
//		long time;
//		for (;;)
//		{
//			system("color a");
//			for (time = 0; time < 99999999; time++);
//			system("color b");
//			for (time = 0; time < 99999999; time++);
//			system("color c");
//			for (time = 0; time < 99999999; time++);
//			system("color d");
//			for (time = 0; time < 99999999; time++);
//			system("color e");
//			for (time = 0; time < 99999999; time++);
//			system("color f");
//			for (time = 0; time < 99999999; time++);
//			system("color 0");
//			for (time = 0; time < 99999999; time++);
//			system("color 1");
//			for (time = 0; time < 99999999; time++);
//			system("color 2");
//			for (time = 0; time < 99999999; time++);
//			system("color 3");
//			for (time = 0; time < 99999999; time++);
//			system("color 4");
//			for (time = 0; time < 99999999; time++);
//			system("color 5");
//			for (time = 0; time < 99999999; time++);
//			system("color 6");
//			for (time = 0; time < 99999999; time++);
//			system("color 7");
//			for (time = 0; time < 99999999; time++);
//			system("color 8");
//			for (time = 0; time < 99999999; time++);
//			system("color 9");
//		}
//		getchar();
//
//	}
//	else
//	{
//		printf("\n�ðɣ��Ǿ������ڽ����ɣ�\n");
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	float y, x, z;

	printf("��һ��\n");
	printf("��һ��������\n");
	printf("������\n");
	printf("�������\n");
	printf("������֮����,������֮��ѩ\n");
	printf("\n\n\n");
	printf("��ʵ\n");
	printf("��һ�仰\n");
	printf("��һֱ�����˵:\n");

	for (double y =2.5; y >= -1.6; y = y - 0.2)
	{
		for (double x = -5; x <= 4.8; x = x + 0.1)
		{
			(pow((x * x + y * y - 1), 3) <= 2.6 * x * x * y * y * y
				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
		}

		printf("\n");
	}
    long time;
    for (;;)
    {
        system("color a");
        for (time = 0; time < 99999999; time++);
        system("color b");
        for (time = 0; time < 99999999; time++);
        system("color c");
        for (time = 0; time < 99999999; time++);
        system("color d");
        for (time = 0; time < 99999999; time++);
        system("color e");
        for (time = 0; time < 99999999; time++);
        system("color f");
        for (time = 0; time < 99999999; time++);
        system("color 0");
        for (time = 0; time < 99999999; time++);
        system("color 1");
        for (time = 0; time < 99999999; time++);
        system("color 2");
        for (time = 0; time < 99999999; time++);
        system("color 3");
        for (time = 0; time < 99999999; time++);
        system("color 4");
        for (time = 0; time < 99999999; time++);
        system("color 5");
        for (time = 0; time < 99999999; time++);
        system("color 6");
        for (time = 0; time < 99999999; time++);
        system("color 7");
        for (time = 0; time < 99999999; time++);
        system("color 8");
        for (time = 0; time < 99999999; time++);
        system("color 9");
    }

	getchar();
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a;
//
//	printf("��һ��\n");
//	printf("��һ��������\n");
//	printf("������\n");
//	printf("�������\n");
//	printf("������֮����,������֮��ѩ\n");
//	printf("\n\n\n");
//	printf("��ʵ\n");
//	printf("��һ�仰\n");
//	printf("��һֱ�����˵:\n");
//	for (a = 0; a < 10; a++)
//	{
//		printf("\n");
//	}
//	printf()
//	return 0;
//}
