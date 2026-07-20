#ifndef PIECEHANDLER_H
#define PIECEHANDLER_H

#include <vector>
#include <utility>

std::vector<std::pair<int, int>> pawnHandler(int turn, int x, int y);
std::vector<std::pair<int, int>> rookHandler(int turn, int x, int y);
std::vector<std::pair<int, int>> knightHandler(int turn, int x, int y);
std::vector<std::pair<int, int>> bishopHandler(int turn, int x, int y);
std::vector<std::pair<int, int>> queenHandler(int turn, int x, int y);
std::vector<std::pair<int, int>> kingHandler(int turn, int x, int y);

#endif // PIECEHANDLER_H