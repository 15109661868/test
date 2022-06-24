#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "游戏的声明.h"
void InitBoard(char board[MOC][NOC], int mc, int nc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < mc; i++)
	{
		for (j = 0; j < nc; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[MOC][NOC], int mc, int nc)
{
	int i = 0;
	for (i = 0; i < mc; i++)
	{
		int j = 0;
		for (j = 0; j < nc; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < nc - 1)
				printf("|");
		}
		printf("\n");
		if (i < mc - 1)
		{
			int j = 0;
			for (j = 0; j < mc; j++)
			{
				printf("---");
				if (j < nc - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[MOC][NOC], int mc, int nc)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");

	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= mc && y >= 1 && y <= nc)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{

				printf("坐标已被占用,请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}
}
void ComputerMove(char board[MOC][NOC], int mc, int nc)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % mc;
		int y = rand() % nc;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[MOC][NOC], int mc, int nc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < mc; i++)
	{
		for (j = 0; j < nc; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[MOC][NOC], int mc, int nc)
{
	int i = 0;
	//判断三行
	for (i = 0; i < mc; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断三列
	int j = 0;
	for (j = 0; j < nc; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//判断三角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	//如果棋盘满了就返回1，不满就返回0

	if (IsFull(board, mc, nc))
	{
		return'Q';
	}
	//继续
	return 'C';
}