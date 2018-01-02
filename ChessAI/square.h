#pragma once

class Square {
private:
	int _row;
	int _column;
public:
	Square(int, int);
	Square();
    void SetRow(int);
    void SetColumn(int);
	int GetRow();
	int GetColumn();
};