//
//  game.h
//  test
//
//  Created by HiLau on 2023/6/9.
//三子棋


//#define ROW 3
//#define COL 3
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////声明
//void InitBoard(char board[ROW][COL],int row,int col);
//void DisplayBoard(char board[ROW][COL],int row,int col);
//void PlayerBoard(char board[ROW][COL],int row,int col);
//void ComputerBoard(char board[ROW][COL],int row,int col);
//
//int IsFull(char board[ROW][COL],int row,int col);
//char IsWin(char board[ROW][COL],int row,int col);




//扫雷

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);

void SetMine(char mine[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
