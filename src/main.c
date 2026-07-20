#include "chessboard.h"
using namespace std;

int turn = 0; // 0: 백, 1: 흑
int isCheckmate = 0; // 0: 게임 진행중, 1: 백 승리, 2: 흑 승리, 3: 스테일메이트
char nickname[2][20]; // 2명의 플레이어 닉네임, 0: 백, 1: 흑
extern char board[BOARDSIZE+1][BOARDSIZE+1];
int main(void){
    int x[2], y[2];
    piecetype piece;
    int valid, valid2;
    initboard();
    startHandler(nickname);
    while(!isCheckmate){
        cout << "움직일 기물과 그 기물의 현재 좌표: ";
        cin >> piece >> x[0] >> y[0];
        valid = positionValid(turn, piece, x[0], y[0]);
      
        if(valid){
            
            cout << "움직일 좌표: ";
            cin >> x[1] >> y[1];
            
            int exitcode = move(turn, piece, x[0], y[0], x[1], y[1]);
            if(exitcode == -1){
                cout << "잘못된 이동입니다. 다시 입력해주세요." << endl;
                continue;
            }
            
        }
        if(turn == 0)   
            turn = 1;
        else
            turn = 0;
        checkmateDetect(board, turn);
    }
    switch(isCheckmate){
        case 1:
            cout << "백 승리!" << endl;
            break;
        case 2:
            cout << "흑 승리!" << endl;
            break;
        case 3:
            cout << "스테일메이트" << endl;
            break;
    }
}