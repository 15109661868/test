#pragma once
#include <stdio.h>
#include <time.h>
//���̵Ĵ�С,���ŵĶ���
#define MOC 3
#define NOC 3
//��ʼ�����̺���
void InitBoard(char board[MOC][NOC], int mc, int nc);
//��ӡ���̺���
void Displayboard(char board[MOC][NOC], int mc, int nc);
//�������
void PlayerMove(char board[MOC][NOC], int mc, int nc);
//��������
void ComputerMove(char board[MOC][NOC], int mc, int nc);