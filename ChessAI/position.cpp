#include "position.h"
#include <algorithm>

/*
 WK, "\u2654
 WQ, "\u2655
 WR, "\u2656
 WB, "\u2657
 WH, "\u2658
 WP, "\u2659"
 BK, "\u265A
 BQ, "\u265B
 BR, "\u265C”
 BB, "\u265D"
 BH, "\u265E"
 BP, "\u265F"
 */

Piece* Position::wK = new King("\u2654", 0, WK);
Piece* Position::wQ = new Queen("\u2655", 0, WQ);
Piece* Position::wR = new Rook("\u2656", 0, WR);
Piece* Position::wB = new Bishop("\u2657", 0, WB);
Piece* Position::wH = new Horse("\u2658", 0, WH);
Piece* Position::wP = new Pawn("\u2659", 0, WP);
Piece* Position::bK = new King("\u265A", 1, BK);
Piece* Position::bQ = new Queen("\u265B", 1, BQ);
Piece* Position::bR = new Rook("\u265C", 1, BR);
Piece* Position::bB = new Bishop("\u265D", 1, BB);
Piece* Position::bH = new Horse("\u265E", 1, BH);
Piece* Position::bP = new Pawn("\u265F", 1, BP);



Position::Position() {
    Piece *whiteList[] = {wR, wH, wB, wQ, wK, wB, wH, wR};
    Piece *blackList[] = {bR, bH, bB, bQ, bK, bB, bH, bR};

    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            _board[x][y] = NULL;
        }
    }
    for (int i = 0; i < 8; i++) {
        _board[i][0] = blackList[i];
    }

    for (int j = 0; j < 8; j++) {
        _board[j][1] = bP;
    }

    for (int k = 0; k < 8; k++) {
        _board[k][7] = whiteList[k];
    }

    for (int l = 0; l < 8; l++) {
        _board[l][6] = wP;
    }
}

void Position::UpdatePosition(Move* move)
{
    int startRow = move->GetStartSquare().GetRow();
    int startColumn = move->GetStartSquare().GetColumn();
    int endRow = move->GetEndSquare().GetRow();
    int endColumn = move->GetEndSquare().GetColumn();

    int reverse[] = { 7, 6, 5, 4, 3, 2, 1, 0 };
    startRow = reverse[startRow];
    endRow = reverse[endRow];

    std::list<Move> moveList;
    GiveLegalMoves(moveList);

    if(std::find(moveList.begin(), moveList.end(), move) != moveList.end())
    {
        _board[endColumn][endRow] = _board[startColumn][startRow];
        _board[startColumn][startRow] = NULL;
    }
}

int Position::GetTurn()
{
    return _turn;
}

void Position::SetTurn(int turn)
{
    _turn = turn;
}

bool Position::GetHasWhiteKingMoved()
{
    return _hasWhiteKingMoved;
}

bool Position::GetHasBlackKingMoved()
{
    return _hasBlackKingMoved;
}

bool Position::GetHasWhiteLeftRookMoved()
{
    return _hasWhiteLeftRookMoved;
}

bool Position::GetHasWhiteRightRookMoved()
{
    return _hasWhiteRightRookMoved;
}

bool Position::GetHasBlackLeftRookMoved()
{
    return _hasBlackLeftRookMoved;
}

bool Position::GetHasBlackRightRookMoved()
{
    return _hasBlackRightRookMoved;
}
