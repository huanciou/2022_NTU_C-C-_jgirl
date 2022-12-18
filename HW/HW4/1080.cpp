#include <iostream>
#include <algorithm>

using namespace std;

struct Pokemon
{
	string Name;
	int Lv;
	int Hp;
};

bool cmpbyname(Pokemon a, Pokemon b)
{
	if (a.Name < b.Name)
	{
		return true;
	}
	return false;
}

bool cmpbyhp(Pokemon a, Pokemon b)
{

	if (a.Hp < b.Hp)
	{
		return true;
	}
	return false;
}

bool cmpbylv(Pokemon a, Pokemon b)
{
	if (a.Lv < b.Lv)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;

	Pokemon *ptr = new Pokemon[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ptr[i].Name >> ptr[i].Lv >> ptr[i].Hp;
	}

	int m;
	cin >> m;

	if (m == 1)
	{
		sort(ptr, ptr + n, cmpbyname);
	}
	else if (m == 2)
	{
		sort(ptr, ptr + n, cmpbylv);
	}
	else if (m == 3)
	{
		sort(ptr, ptr + n, cmpbyhp);
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Name: " << ptr[i].Name << endl;
		cout << "Lv: " << ptr[i].Lv << endl;
		cout << "HP: " << ptr[i].Hp << endl
			 << endl;
	}

	return 0;
}
