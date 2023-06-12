//
//  game.c
//  test
//
//  Created by HiLau on 2023/6/9.
//

//扫雷
#include "game.h"


void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i = 0;
    int j = 0;
    for(i = 0;i<rows;i++)
    {
        for(j = 0;j<cols;j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i = 0;
    printf("---------------------扫雷----------------------\n");
    for(i = 0;i<=col;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i = 1;i<=row;i++)
    {
        printf("%d ",i);
        int j = 0;
        for(j = 1;j<=col;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    printf("---------------------扫雷----------------------\n");
}

void SetMine(char mine[ROWS][COLS],int row,int col)
{
    int count = 10;
    while(count)
    {
        int x = rand()%row +1;
        int y = rand()%col +1;
        if(mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count --;
        }
    }
}








//三子棋
//#include "game.h"
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//
//void InitBoard(char board[ROW][COL],int row,int col)
//{
//    int i = 0;
//    for(i = 0;i<row;i++)
//    {
//        int j = 0;
//        for(j=0;j<col;j++)
//        {
//            board[i][j] = ' ';
//        }
//    }
//}
//
//void DisplayBoard(char board[ROW][COL],int row,int col)
//{
//    int i = 0;
//    for(i = 0;i<row;i++)
//    {
//        int j = 0;
//        for(j = 0;j<col;j++)
//        {
//            printf(" %c ",board[i][j]);
//            if(j<col - 1)
//                printf("|");
//        }
//        printf("\n");
//        if(i<row - 1)
//        {
//            for(j = 0;j<col;j++)
//            {
//                printf("---");
//                if(j<col - 1)
//                    printf("|");
//            }
//            printf("\n");
//        }
//    }
//}
//
//void PlayerBoard(char board[ROW][COL],int row,int col)
//{
//    int x = 0;
//    int y = 0;
//    printf("玩家走>:\n");
//    while(1)
//    {
//        printf("请下子>:");
//        scanf("%d%d",&x,&y);
//        if(x>=1 && x<=row && y>=1 && y<=col)
//        {
//            if(board[x-1][y-1] == ' ')
//            {
//                board[x-1][y-1] = '*';
//                break;
//            }
//            else
//            {
//                printf("被占用\n");
//            }
//        }
//        else
//        {
//            printf("非法输入\n");
//        }
//    }
//}
//
//void ComputerBoard(char board[ROW][COL],int row,int col)
//{
//    int x = 0;
//    int y = 0;
//    printf("电脑走>:\n");
//    while(1)
//    {
//        x = rand()%ROW;
//        y = rand()%COL;
//        if(board[x][y] == ' ')
//        {
//         board[x][y] = '#';
//         break;
//        }
//    }
//}
//
//
//int IsFull(char board[ROW][COL],int row,int col)
//{
//    int i = 0;
//    int j = 0;
//    for(i = 0;i<row;i++)
//    {
//        for(j = 0;j<col;j++)
//        {
//            if(board[i][j] = ' ')
//            {
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
//
//
//char IsWin(char board[ROW][COL],int row,int col)
//{
//    int i = 0;
//    for(i = 0;i<row;i++)
//    {
//        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//        {
//            return board[i][1];
//        }
//    }
//    for(i = 0;i<col;i++)
//    {
//       if(board[0][1] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//       {
//           return board[1][i];
//       }
//    }
//    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//        return board[1][1];
//    if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//        return board[1][1];
//    if(1 == IsFull(board,ROW,COL))
//    {
//        return 'Q';
//    }
//    return 'C';
//}
