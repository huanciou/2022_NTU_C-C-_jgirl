#include <iostream>
	using namespace std;

int main(){
	
	char n;
	while(cin >> n){
		if(n == 'q'){
			cout << n << endl;
			return 0;
		}
		else if(n != '\n')
			cout << n << endl;
	}
	return -1;
}
