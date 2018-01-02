#include "ui.h"

UI* UI::_instance = 0;

UI* UI::GetInstance()
{
    if(_instance == 0)
    {
        _instance = new UI();
        return  _instance;
    }
}

UI::UI(Position* position)
{
    _position = position;
}

void UI::DrawBoard()
{
    std::string whiteBg = "\033[40m\033";
    std::string blackBg = "\033[49m\033";

    for(int y = 0; y < 8; y++)
    {
        for(int x = 0; x < 8; x++)
        {
            if((x + y) % 2 == 0)
            {
                std::cout << blackBg;
            }
            else
            {
                std::cout << whiteBg;
            }
            if(_position -> _board[x][y] != NULL)
            {
                std::cout << " " << _position -> _board[x][y] -> GetUnicode() << " " ;
            }
            else
            {
                std::cout << "   ";
            }
            if(x == 7)
            {
                std::cout << blackBg << " " << (8 - y) << " " << "\n";
            }
        }
    }

    std::cout << "A   B   C   D   E   F   G   H" << std::endl;
}

Move UI::GiveOpponentMove()
{
    std::string input;
    std::cout << "It's your turn: ";
    std::cin >> input;
    const char* move(input.c_str());

    int startRow = -1;
    int startColumn = -1;
    int endRow = -1;
    int endColumn = -1;
    int castling = 0;

    int i = 0;
    while (move[i] != '\0')
    {
        if (move[i] == '-' || move[i] == 'K' || move[i] == 'Q' || move[i] == 'R' || move[i] == 'B' || move[i] == 'H' || move[i] == 'P')
        {
            // Do nothing
        }
        if (move[i] == 'O')
        {
            castling++;
        }
        else if (startColumn == -1)
        {
            startColumn = GetColumn(move[i]);
        }
        else if (startRow == -1)
        {
            int sRow = move[i] - '0';
            startRow = sRow - 1;
        }
        else if (endColumn == -1)
        {
            endColumn = GetColumn(move[i]);
        }
        else if (endRow == -1)
        {
            int eRow = move[i] - '0';
            endRow = eRow - 1;
        }
        ++i;
    }

    if (castling == 2)
    {
        // Short castling
    }
    else if (castling == 3)
    {
        // Long castling
    }
    else
    {
        Square startSquare = Square(startRow, startColumn);
        Square endSquare = Square(endRow, endColumn);
        Move opponentMove(startSquare, endSquare);
        return opponentMove;
    }
}

int UI::GetColumn(char c)
{
    for (int i = 0; i < 8; ++i)
    {
        if (c == _columns[i])
        {
            return i;
        }
    }

    return -1;
}
