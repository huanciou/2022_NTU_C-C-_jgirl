#include <iostream>

using namespace std;

class Data
{
private:
    char Garage[10][16];
    int car;
    int sellprice;
    int totalcost;
    int earn;

public:
    Data()
    {
        car = 0;
        sellprice = 0;
        totalcost = 0;
        earn = 0;
    }
    void store(char x[16]);
    void sell(char x[16]);
    void displayi();
    void displaycost();
    void displayp();
};

int main()
{
    char n;
    while (1)
    {
        cin >> n;
        if (n == 'a')
        {
            store();
        }
        else if (n == 's')
        {
        }
        else if (n == 'c')
        {
        }
        else if (n == 'i')
        {
        }
        else if (n == 'p')
        {
        }
        else if (n == 'q')
        {
        }
    }
}