#define _CRT_SECURE_NO_WARNINGS 1
#include "��Ϸ������.h"
void menu()
{
	printf("*******************************************\n");
	printf("*********1.��ʼ��Ϸ  0.�˳���Ϸ************\n");
	printf("*******************************************\n");
}
void game()
{
	//�洢����
	char board[MOC][NOC];
	//��ʼ������
	InitBoard(board, MOC, NOC);
	//��ӡ����
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
		printf("������>:");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������\n");
			break;
		}
	} while (imput);
	return 0;
}