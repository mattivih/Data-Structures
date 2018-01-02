#pragma once
#include <string>
#include "position.h"
#include "move.h"
//#include "game.h"

class UI{
private:
    const char *_columns = "abcdefgh";

    UI() {};    // Tarpeellinen?

    Move _Move; // Tarpeellinen?
    std::string _moveString;    // Tarpeellinen?
    std::string _movedPieceString;  // Tarpeellinen?
    Square *startSquare;    // Tarpeellinen?

    static UI* _instance;   // Tarpeellinen?
public:
    void SetPosition(Position* Position) {_position = Position;}    // Tarpeellinen?
    Position* _position;

    UI(Position*);
    void DrawBoard();
    Move GiveOpponentMove();
    int GetOpponentColor(); // Tarpeellinen?
    int GetColumn(char c);

    static UI* GetInstance();   // Tarpeellinen?
};
