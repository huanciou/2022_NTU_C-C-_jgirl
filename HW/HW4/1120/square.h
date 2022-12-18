#ifndef SQUARE_H
#define SQUARE_H

class Square
{
private:
	int len;

public:
	Square();
	Square(int n);
	int area();
	void setLen(int n);
	int getLen();
};

void cmpSquare(Square &a, Square &b);
#endif
