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
	//��������Ҫ�õ�����3*3
	char board[ROW][COL] = {'a'};
	InitBoard(board,ROW,COL);//��ʼ������
    //��ӡ����
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
		printf("ƽ��\n");
	}
}

void test()
{
	int imput = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
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
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("�������������\n");
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