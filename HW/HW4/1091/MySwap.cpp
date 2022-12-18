#include <iostream>
#include "MySwap.h"

using namespace std;

void MySwap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;

	return;
}
