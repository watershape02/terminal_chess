#include "piecehandler.h"
#include <iostream>
#include <vector>
using namespace std;
extern char board[BOARDSIZE+1][BOARDSIZE+1];
//easy
vector<pair<int, int>> pawnHandler(int turn, int x, int y){
    vector<pair<int, int>> possibleMoves;
    // น้ 
    if(turn == 0){
        
    }
    else{

    }
}
//easy but many lol
vector<pair<int, int>> rookHandler(int turn, int x, int y){}
//fucking hard
vector<pair<int, int>> knightHandler(int turn, int x, int y){}
//normal
vector<pair<int, int>> bishopHandler(int turn, int x, int y){}
//normal but very many 
vector<pair<int, int>> queenHandler(int turn, int x, int y){}
//very easy
vector<pair<int, int>> kingHandler(int turn, int x, int y){}