#ifndef POKEMON_H
#define POKEMON_H

using namespace std;

class Pokemon{
	public:
		Pokemon(){
			Name = "No Name";
			Lv = 1;
			HpCur = 1;
			HpMax = HpCur;
		}
		Pokemon(string a, int b, int c){
			SetNa(a);
			SetLv(b);
			SetHp(c);
		}
		~Pokemon(){
			cout << Name << " has returned to the nature." << endl;
		}
		void ShowInfo();
		void SetNa(string a);
		void SetLv(int b);
		void SetHp(int c);
		
	private:
		string Name;
		int Lv;
		int HpMax;
		int HpCur;
};

#endif
