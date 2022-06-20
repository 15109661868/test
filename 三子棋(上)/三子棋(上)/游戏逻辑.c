#define _CRT_SECURE_NO_WARNINGS 1
#include "游戏的声明.h"
void menu()
{
	printf("*******************************************\n");
	printf("*********1.开始游戏  0.退出游戏************\n");
	printf("*******************************************\n");
}
void game()
{
	//存储数据
	char board[MOC][NOC];
	//初始化数据
	InitBoard(board, MOC, NOC);
	//打印数据
	Displayboard(board, MOC, NOC);
	while (1)
	{
		PlayerMove(board, MOC, NOC);
		Displayboard(board, MOC, NOC);
		ComputerMove(board, MOC, NOC);
	}
}

int main()
{
	int imput = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入>:");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重试\n");
			break;
		}
	} while (imput);
	return 0;
}