#pragma once
#include "square.h"

class Move {
private:
    Square _startSquare;
    Square _endSquare;
    int _upgrade = 0;
    bool _shortCastling;
    bool _longCastling;
public:
    Move(Square, Square);
    Move() {};
    Move(bool, bool);
    Square GetStartSquare();
    Square GetEndSquare();
    bool IsShortCastling();
    bool IsLongCastling();
};