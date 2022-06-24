#pragma once
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//棋盘的大小,符号的定义
#define MOC 3
#define NOC 3
//初始化棋盘函数
void InitBoard(char board[MOC][NOC], int mc, int nc);
//打印棋盘函数
void Displayboard(char board[MOC][NOC], int mc, int nc);
//玩家下棋
void PlayerMove(char board[MOC][NOC], int mc, int nc);
//电脑下棋
void ComputerMove(char board[MOC][NOC], int mc, int nc);
//判断游戏是否输赢
char IsWin(char board[MOC][NOC], int mc, int nc);
