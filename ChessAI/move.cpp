#include "move.h"

Move::Move(Square startSquare, Square endSquare)
{
    _startSquare = startSquare;
    _endSquare = endSquare;
}

Move::Move(bool shortCastling, bool longCastling)
{
    _shortCastling = shortCastling;
    _longCastling = longCastling;
}

Square Move::GetStartSquare()
{
    return _startSquare;
}

Square Move::GetEndSquare()
{
    return _endSquare;
}

bool Move::IsShortCastling()
{
    return _shortCastling;
}

bool Move::IsLongCastling()
{
    return _longCastling;
}