#pragma once
#include <iostream>
#include "piece.h"
#include "move.h"

class Piece;

class Position{

private:
    int _turn;
    bool _hasWhiteKingMoved;
    bool _hasBlackKingMoved;
    bool _hasWhiteLeftRookMoved;
    bool _hasWhiteRightRookMoved;
    bool _hasBlackLeftRookMoved;
    bool _hasBlackRightRookMoved;
public:
    //Constructor creates starting setting on the board
    Position();
    Piece* _board[8][8];
    void UpdatePosition(Move*);
    int GetTurn();
    void SetTurn(int);
    bool GetHasWhiteKingMoved();
    bool GetHasBlackKingMoved();
    bool GetHasWhiteLeftRookMoved();
    bool GetHasWhiteRightRookMoved();
    bool GetHasBlackLeftRookMoved();
    bool GetHasBlackRightRookMoved();
    void GiveLegalMoves(std::list<Move>& list);

    static Piece* wK;
    static Piece* wQ;
    static Piece* wR;
    static Piece* wB;
    static Piece* wH;
    static Piece* wP;
    static Piece* bK;
    static Piece* bQ;
    static Piece* bR;
    static Piece* bB;
    static Piece* bH;
    static Piece* bP;

    //static Piece* whiteList[];// = {wR, wH, wB, wQ, wK, wB, wH, wR, wP, wP, wP, wP, wP, wP, wP, wP};
};

