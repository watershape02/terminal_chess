#include "chessboard.h"
#include "piecehandler.h"
#include <iostream>
#include <string>
using namespace std;

char board[BOARDSIZE][BOARDSIZE];

void initBoard(){
    for(int i=0; i<BOARDSIZE; i++){
        for(int j=0; j<BOARDSIZE; j++){
            board[i][j] = ' ';
        }
    }
}
void startHandler(char nickname[2][20]){
    cout << "백 플레이어 닉네임: ";
    cin >> nickname[0];
    cout << "흑 플레이어 닉네임: ";
    cin >> nickname[1];
    // Initialize the chessboard with pieces
    strcpy(board[1], "RNBQKBNR");
    strcpy(board[2], "PPPPPPPP");
    strcpy(board[7], "pppppppp");
    strcpy(board[8], "rnbqkbnr");
}
void display(){
    printf("\n  1   2   3   4   5   6   7   8\n");
    printf("  +---+---+---+---+---+---+---+---+\n");

    for (int i = 1; i <= BOARDSIZE; i++) {
        // 체스판 세로 좌표 (1부터 8까지)
        printf("%d |", i);

        for (int j = 1; j <= BOARDSIZE; j++) {
            char piece = board[i][j];

            if (piece == ' ' || piece == '_') {
                // 빈 칸인 경우
                printf(" _ |");
            } else if (isupper((unsigned char)piece)) {
                // 대문자 = 흑(Black) -> 초록색 출력
                printf(" " COLOR_GREEN "%c" COLOR_RESET " |", piece);
            } else if (islower((unsigned char)piece)) {
                // 소문자 = 백(White) -> 기본색 출력
                printf(" %c |", piece);
            } else {
                // 기타 예외 처리
                printf(" %c |", piece);
            }
        }
        
        // 행 번호 우측 표시 및 경계선
        printf(" %d\n", i + 1);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    1   2   3   4   5   6   7   8\n\n");
}
int positionValid(int turn, piecetype piece, int x, int y){
    if(x <= 0 || x > BOARDSIZE || y <= 0 || y > BOARDSIZE){
        return -1; // Out of bounds code: -1
    }
    piecetype currentPiece = board[x][y];
    if(currentPiece == piece){
        return 1; // Valid position: 1
    }
    return 0; // Invalid position: 0
}
int moveHandler(int turn, piecetype piece, int x1, int y1){
    switch(piece){
        case PAWN:
            pawnHandler(turn, x1, y1);
            break;
        case ROOK:
            rookHandler(turn, x1, y1);
            break;
        case KNIGHT:
            knightHandler(turn, x1, y1);
            break;
        case BISHOP:
            bishopHandler(turn, x1, y1);
            break;
        case QUEEN:
            queenHandler(turn, x1, y1);
            break;
        case KING:
            kingHandler(turn, x1, y1);
            break;
    }
    return 0; // Return appropriate exit code
}
int move(int turn, piecetype piece, int x1, int y1, int x2, int y2){
    // Implementation for moving a piece
    return 0; // Return appropriate exit code
}
int catchHandler(int turn, piecetype piece, int x, int y){
    // Implementation for handling the capture of an opponent's piece
    return 0; // Return appropriate exit code
}
int checkmateDetect(char board[BOARDSIZE][BOARDSIZE], int turn){}  
