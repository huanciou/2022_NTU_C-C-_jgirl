#include <iostream>
#include "Pokemon.h"
 
using namespace std;
	
void Pokemon::ShowInfo(){
	   cout << "Name: " << Name << endl;
	   cout << "Lv: " << Lv << endl;
	   cout << "HP: " << HpCur << "/" << HpMax << endl << endl;
}
void Pokemon::SetNa(string a){
	Name = a;
}
void Pokemon::SetLv(int b){
	if(b < 1){
		cout << "Lv setting error." << endl;
		Lv = 1;
		return;
	}
	Lv = b;
}
void Pokemon::SetHp(int c){
	if(c < 1){
		cout << "Hp setting error." << endl;
		HpCur = 1;
		HpMax = 1;
		return;
	}
	HpCur = c;
	HpMax = HpCur;
}

