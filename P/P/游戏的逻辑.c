#define _CRT_SECURE_NO_WARNINGS 1
#include "游戏的声明.h"
void menu()
{
    printf("**************************************************\n");
    printf("*********1.开始游戏  0.退出游戏*******************\n");
    printf("**************************************************\n");
    printf("**************************************************\n");
}
void game()
{
    char ret = 0;
    char board [MOC][NOC] = { 0 };
    InstBoard(board, MOC, NOC);
    Diswerand(board, MOC, NOC);
}
int main()
{
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
            printf("退出游戏");
            break;
        define:
            printf("输入错误,请从新选择");
        }
    }
    while(imput);
    return 0;
}