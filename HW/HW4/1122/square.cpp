#include <iostream>
#include "square.h"

using namespace std;

Square::Square()
{
    len = 1;
}
Square::Square(int n)
{
    if (n < 1)
    {
        cout << "len setting error" << endl;
        len = 1;
    }
    else
    {
        len = n;
    }
}
int Square::getLen()
{
    return len;
}
int Square::area()
{
    return len * len;
}

int cmpSquare(Square &a, Square &b)
{
    if (a.area() > b.area())
    {
        return 1;
    }
    else if (a.area() == b.area())
    {
        return 0;
    }
    else
    {
        return -1;
    }
};
