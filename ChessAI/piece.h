#pragma once
//#include <iostream>
#include <list>
#include <string>
#include "move.h"
//#include "square.h"
#include "position.h"

class Position;

// Default values for piecetypes
enum
{
    WR,WH,WB,WQ,WK,WP,
    BR,BH,BB,BQ,BK,BP
};

class Piece{

private:
    std::string _unicode;
    int _color; // white = 0, black = 1
    int _code; // WR, WH, BR etc.
public:
    Piece(std::string, int, int);
    Piece() {};

    virtual void GiveMoves(std::list<Move>& list, Square*, Position*, int color) = 0; // virtual jotta myöhäinen sidonta käytössä

    void SetUnicode(std::string);
    std::string GetUnicode();
    void SetColor(int);
    int GetColor();
    void SetCode(int);
    int GetCode();
};

class Rook : public virtual Piece { // virtual = kantaluokka peritään moniperinnässä vain kerran!
public:
    Rook(std::string unicode, int color, int code) : Piece(unicode, color, code) {} // alustuslista (yliluokan alustus)
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
};

class Horse : public Piece {
public:
    Horse(std::string unicode, int color, int code) : Piece(unicode, color, code) {}
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
};

class Bishop : public virtual Piece { // virtual = kantaluokka peritään moniperinnässä vain kerran!
public:
    Bishop(std::string unicode, int color, int code) : Piece(unicode, color, code) {}
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
};

class Queen : public Bishop, public Rook { // Moniperintä!
public:
    Queen(std::string unicode, int color, int code) : Piece(unicode, color, code), Bishop(unicode, color, code), Rook(unicode, color, code) {
        //SetUnicode(unicode);
        //Setcolor(color);
        //Setcode(code);
    }
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
};

class King : public Piece {
public:
    King(std::string unicode, int color, int code) : Piece(unicode, color, code) {}
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
};

class Pawn : public Piece {
public:
    Pawn(std::string unicode, int color, int code) : Piece(unicode, color, code) {}
    void GiveMoves(std::list<Move>& list, Square*, Position*, int color);
private:
    void PawnPromotion(Move*, std::list<Move>& list, Position*);
};