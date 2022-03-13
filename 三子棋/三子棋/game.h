#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3


//ÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void Player_Move(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
char Is_Win(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);