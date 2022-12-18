#include <iostream>
using namespace std;

class eCash{
	private:
		int Money;
	public:
		void store(int m){
			if(m<1){
				cout << "eCash: Please enter a number > 0." << endl;
			}
			else{
				Money += m;
				cout << "eCash: You stored " << m << "." << endl;
			}
		}
		void pay(int m){
			if(Money < m){
				cout << "eCash: Insufficient balance." << endl;
			}
			else if(m < 1){
				cout << "eCash: Please enter a number > 0." << endl;
			}
			else{
				Money -= m;
				cout << "eCash: You spend " << m << "." << endl;
			}
		}
		void display(){
			cout << "eCash: You remaining " << Money << "." << endl;
		}
};

int main(){
	
	char x;
	int cash;
	eCash a;

	while(1){
		cin >> x;

		if(x == 's'){
			cin >> cash; 
			a.store(cash);		
		}
		else if(x == 'p'){
			cin >> cash;
			a.pay(cash);
		}
		else if(x == 'd'){
			a.display();
		}
		else if(x == 'q'){
			cout << "eCash: Thank you. Bye Bye." << endl;
			return 0;
		}
	}

	return 0;
}

