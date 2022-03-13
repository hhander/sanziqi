#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<Windows.h>
void menu()
{
	printf("***************************\n");
	printf("*******1.play 0.quit*******\n");
	printf("***************************\n");
}

void game()
{
	char ret = 0;
	//创建棋盘要用的数组3*3
	char board[ROW][COL] = {'a'};
	InitBoard(board,ROW,COL);//初始化棋盘
    //打印棋盘
	display_board(board, ROW, COL);
	while (1)
	{
		Player_Move(board, ROW, COL);
		system("cls");
		display_board(board, ROW, COL);
		ret = Is_Win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		computer_move(board, ROW, COL);
		system("cls");
		display_board(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("*win\n");
	}
	else if (ret == '#')
	{
		printf("#win\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int imput = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &imput);
		switch (imput)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入错误，请重输\n");
			break;
		}
		}
	} while (imput);
}


int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}