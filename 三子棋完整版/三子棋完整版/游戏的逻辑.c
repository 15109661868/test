#define _CRT_SECURE_NO_WARNINGS 1
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
	char ret = 0;
	//存储数据
	char board[MOC][NOC] = { 0 };
	//初始化数据
	InitBoard(board, MOC, NOC);
	//打印数据
	Displayboard(board, MOC, NOC);

	while (1)
	{
		PlayerMove(board, MOC, NOC);
		ret = IsWin(board, MOC, NOC);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, MOC, NOC);
		//判断玩家是否赢得游戏
		ComputerMove(board, MOC, NOC);
		ret = IsWin(board, MOC, NOC);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, MOC, NOC);
		//判断电脑是否赢得游戏
	}
	if (ret == '*')
	{
		printf("玩家赢了");
	}
	else if (ret == '#')
	{
		printf("电脑赢了");
	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, MOC, NOC);
}

int main()
{

	srand((unsigned int)time(NULL));
	int imput = 0;
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