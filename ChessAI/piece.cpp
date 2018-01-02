#include "piece.h"

Piece::Piece(std::string unicode, int code, int color)
{
    _unicode = unicode;
    _code = code;
    _color = color;
}

void Rook::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{
    for(int x = square->GetColumn(); x < 8; ++x)
    {
        if(position->_board[x][square->GetRow()] == NULL || position->_board[x][square->GetRow()]->GetColor() != color)
        {
            list.push_back(Move(square, new Square(x, square->GetRow())));
            if(position->_board[x][square->GetRow()] != NULL) break;
        }
    }
    for (int x = square->GetColumn(); x >= 0; --x)
    {
        if (position->_board[x][square->GetRow()] == NULL || position->_board[x][square->GetRow()]->GetColor() != color)
        {
            list.push_back(Move(square, new Square(x, square->GetRow())));
            if (position->_board[x][square->GetRow()] != NULL) break;
        }
    }
    for (int y = square->GetRow(); y < 8; ++y)
    {
        if (position->_board[square->GetColumn()][y] == NULL || position->_board[square->GetColumn()][y]->GetColor() != color)
        {
            list.push_back(Move(square, new Square(square->GetColumn(), y)));
            if (position->_board[square->GetColumn()][y] != NULL) break;
        }
    }
    for (int y = square->GetRow(); y >= 0; --y)
    {
        if (position->_board[square->GetColumn()][y] == NULL || position->_board[square->GetColumn()][y]->GetColor() != color)
        {
            list.push_back(Move(square, new Square(square->GetColumn(), y)));
            if (position->_board[square->GetColumn()][y] != NULL) break;
        }
    }

    /* Aksun WTF-kohta
    for (int i = 0; i < ; ++i)
    {

    }
    */
}

void Horse::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{
    if (position->_board[square->GetRow() + 2][square->GetRow() + 1] == NULL ||
        position->_board[square->GetRow() + 2][square->GetRow() + 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() + 2, square->GetRow() + 1)));
    }
    if (position->_board[square->GetRow() + 2][square->GetRow() - 1] == NULL ||
        position->_board[square->GetRow() + 2][square->GetRow() - 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() + 2, square->GetRow() - 1)));
    }
    if (position->_board[square->GetRow() - 2][square->GetRow() + 1] == NULL ||
        position->_board[square->GetRow() - 2][square->GetRow() + 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() - 2, square->GetRow() + 1)));
    }
    if (position->_board[square->GetRow() - 2][square->GetRow() - 1] == NULL ||
        position->_board[square->GetRow() - 2][square->GetRow() - 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() - 2, square->GetRow() - 1)));
    }
    if (position->_board[square->GetRow() + 1][square->GetRow() + 2] == NULL ||
        position->_board[square->GetRow() + 1][square->GetRow() + 2]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() + 1, square->GetRow() + 2)));
    }
    if (position->_board[square->GetRow() + 1][square->GetRow() - 2] == NULL ||
        position->_board[square->GetRow() + 1][square->GetRow() - 2]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() + 1, square->GetRow() - 2)));
    }
    if (position->_board[square->GetRow() - 1][square->GetRow() + 2] == NULL ||
        position->_board[square->GetRow() - 1][square->GetRow() + 2]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() - 1, square->GetRow() + 2)));
    }
    if (position->_board[square->GetRow() - 1][square->GetRow() - 2] == NULL ||
        position->_board[square->GetRow() - 1][square->GetRow() - 2]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetRow() - 1, square->GetRow() - 2)));
    }
}

void Bishop::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{
    for (int i = 1; i < 8; ++i)
    {
        if (square->GetColumn() + i < 8 && square->GetRow() + i < 8)
        {
            if (position->_board[square->GetColumn() + i][square->GetRow() + i] == NULL ||
                position->_board[square->GetColumn() + i][square->GetRow() + i]->GetColor() != color)
            {
                list.push_back(Move(square, new Square(square->GetColumn() + i, square->GetRow() + i)));
                if (position->_board[square->GetColumn() + i][square->GetRow() + i] != NULL) break;
            }
        }
    }
    for (int i = 1; i < 8; ++i)
    {
        if (square->GetColumn() - i < 8 && square->GetRow() + i < 8)
        {
            if (position->_board[square->GetColumn() - i][square->GetRow() + i] == NULL ||
                position->_board[square->GetColumn() - i][square->GetRow() + i]->GetColor() != color)
            {
                list.push_back(Move(square, new Square(square->GetColumn() - i, square->GetRow() + i)));
                if (position->_board[square->GetColumn() - i][square->GetRow() + i] != NULL) break;
            }
        }
    }
    for (int i = 1; i < 8; ++i)
    {
        if (square->GetColumn() + i < 8 && square->GetRow() - i >= 0)
        {
            if (position->_board[square->GetColumn() + i][square->GetRow() - i] == NULL ||
                position->_board[square->GetColumn() + i][square->GetRow() - i]->GetColor() != color)
            {
                list.push_back(Move(square, new Square(square->GetColumn() - i, square->GetRow() + i)));
                if (position->_board[square->GetColumn() + i][square->GetRow() - i] != NULL) break;
            }
        }
    }
    for (int i = 1; i < 8; ++i)
    {
        if (square->GetColumn() - i >= 8 && square->GetRow() - i >= 0)
        {
            if (position->_board[square->GetColumn() - i][square->GetRow() - i] == NULL ||
                position->_board[square->GetColumn() - i][square->GetRow() - i]->GetColor() != color)
            {
                list.push_back(Move(square, new Square(square->GetColumn() - i, square->GetRow() + i)));
                if (position->_board[square->GetColumn() - i][square->GetRow() - i] != NULL) break;
            }
        }
    }
}

void Queen::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{

}

void King::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{
    if (position->_board[square->GetColumn() + 1][square->GetRow()] == NULL ||
        position->_board[square->GetColumn() + 1][square->GetRow()]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn() + 1, square->GetRow())));
    }
    if (position->_board[square->GetColumn() - 1][square->GetRow()] == NULL ||
        position->_board[square->GetColumn() - 1][square->GetRow()]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn() - 1, square->GetRow())));
    }
    if (position->_board[square->GetColumn()][square->GetRow() + 1] == NULL ||
        position->_board[square->GetColumn()][square->GetRow() + 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn(), square->GetRow() + 1)));
    }
    if (position->_board[square->GetColumn()][square->GetRow() - 1] == NULL ||
        position->_board[square->GetColumn()][square->GetRow() - 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn(), square->GetRow() - 1)));
    }
}

void Pawn::GiveMoves(std::list<Move>& list, Square* square, Position* position, int color)
{
    if (position->_board[square->GetColumn()][square->GetRow() + 1] == NULL)
    {
        list.push_back(Move(square, new Square(square->GetColumn(), square->GetRow() + 1)));
        if (position->_board[square->GetColumn()][square->GetRow() + 2] == NULL)
        {
            list.push_back(Move(square, new Square(square->GetColumn(), square->GetRow() + 2)));
        }
    }
    if (position->_board[square->GetColumn() + 1][square->GetRow() + 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn() + 1, square->GetRow() + 1)));
    }
    if (position->_board[square->GetColumn() - 1][square->GetRow() + 1]->GetColor() != color)
    {
        list.push_back(Move(square, new Square(square->GetColumn() - 1, square->GetRow() + 1)));
    }

    // Ohestalyönti
}

void Pawn::PawnPromotion(Move* move, std::list<Move>& list, Position* position)
{

}

void Piece::SetCode(int code)
{
    _code = code;
}

int Piece::GetCode()
{
    return _code;
}

void Piece::SetUnicode(std::string unicode)
{
    _unicode = unicode;
}

std::string Piece::GetUnicode()
{
    return _unicode;
}

void Piece::SetColor(int color)
{
    _color = color;
}

int Piece::GetColor()
{
    return _color;
}

