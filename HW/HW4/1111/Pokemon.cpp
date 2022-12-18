#include <iostream>
#include "Pokemon.h"

using namespace std;
Pokemon::Pokemon()
{
	Name = "No Name";
	Lv = 1;
	HpCur = 1;
	HpMax = HpCur;
	items = new string[100];
	itemNum = 0;
}
Pokemon::Pokemon(string na, int lv, int hp)
{
	setData(na, lv, hp);
}
Pokemon::~Pokemon()
{
	cout << Name << " has returned to the nature." << endl;
	delete[] items;
}
void Pokemon::setData(string na, int lv, int hp)
{
	Name = na;
	if (lv < 1)
	{
		cout << "Lv setting error." << endl;
		Lv = 1;
	}
	else
	{
		Lv = lv;
	}
	if (hp < 1)
	{
		cout << "Hp setting error." << endl;
		HpCur = 1;
		HpMax = HpCur;
	}
	else
	{
		HpCur = hp;
		HpMax = HpCur;
	}
	items = new string[100];
	itemNum = 0;
}
void Pokemon::ShowInfo()
{
	cout << "Name: " << Name << endl;
	cout << "Lv: " << Lv << endl;
	cout << "HP: " << HpCur << "/" << HpMax << endl;
	cout << "Items: ";
	for (int i = 0; i < itemNum; i++)
	{
		cout << items[i] << " ";
	}
	cout << "\n\n";
}
void Pokemon::addItem(string item)
{
	if (itemNum < Lv)
	{
		items[itemNum] = item;
		itemNum++;
	}
	else
	{
		cout << Name << " is full, cannot carry " << item << "." << endl;
	}
}
