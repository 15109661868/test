#define _CRT_SECURE_NO_WARNINGS 1
#include "��Ϸ������.h"
void menu()
{
    printf("**************************************************\n");
    printf("*********1.��ʼ��Ϸ  0.�˳���Ϸ*******************\n");
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
        printf("������>:");
        scanf("%d", &imput);
        switch (imput)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ");
            break;
        define:
            printf("�������,�����ѡ��");
        }
    }
    while(imput);
    return 0;
}