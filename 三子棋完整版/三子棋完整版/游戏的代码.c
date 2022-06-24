#define _CRT_SECURE_NO_WARNINGS 1
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
	//�ж�����
	for (i = 0; i < mc; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�����
	int j = 0;
	for (j = 0; j < nc; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�ж�������
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	//����������˾ͷ���1�������ͷ���0

	if (IsFull(board, mc, nc))
	{
		return'Q';
	}
	//����
	return 'C';
}