#define _CRT_SECURE_NO_WARNINGS 1
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
	char ret = 0;
	//�洢����
	char board[MOC][NOC] = { 0 };
	//��ʼ������
	InitBoard(board, MOC, NOC);
	//��ӡ����
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
		//�ж�����Ƿ�Ӯ����Ϸ
		ComputerMove(board, MOC, NOC);
		ret = IsWin(board, MOC, NOC);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, MOC, NOC);
		//�жϵ����Ƿ�Ӯ����Ϸ
	}
	if (ret == '*')
	{
		printf("���Ӯ��");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��");
	}
	else
	{
		printf("ƽ��\n");
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