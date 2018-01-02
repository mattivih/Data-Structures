#include "square.h"

Square::Square() {
    _row = 0;
    _column = 0;
}

Square::Square(int row, int column)
{
    _row = row;
    _column = column;
}

void Square::SetRow(int row)
{
    _row = row;
}

void Square::SetColumn(int column)
{
    _column = column;
}

int Square::GetRow()
{
    return _row;
}

int Square::GetColumn()
{
    return _column;
}
