#define _CRT_SECURE_NO_WARNINGS 1
#include "��Ϸ������.h"
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
	printf("�����:>\n");

	while (1)
	{
		printf("����������:>");
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
				printf("�����ѱ�ռ��,����������\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}
}
void ComputerMove(char board[MOC][NOC], int mc, int nc)
{
	printf("������:>\n");
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