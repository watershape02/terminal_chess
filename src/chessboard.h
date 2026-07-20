#ifndef BOARD_H
#define BOARDSIZE 8
#define COLOR_RESET  "\033[0m" //백은 기본 색상으로 출력
#define COLOR_GREEN  "\033[32m" //흑은 초록색으로 출력

typedef enum {PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING}piecetype;



void initBoard();   //체스판을 초기화하여 리턴 
void startHandler(char nickname[2][20]);
void display();     //display current board
int positionValid(int, piecetype, int, int); //check if the position is valid
int moveHandler(int turn, piecetype piece, int x1, int y1, int x2, int y2); //print the possible moves of the piece
int move(int, piecetype, int, int, int, int); //move the piece and return the exit code
int catchHandler(int turn, piecetype piece, int x, int y); //turn의 플레이어가 상대 기물을 잡을 때 호출
int checkmateDetect(char board[BOARDSIZE][BOARDSIZE], int turn); //check if the game is over, 

#endif