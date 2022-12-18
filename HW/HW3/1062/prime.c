#include <stdio.h>
#include "prime.h"

int IsPrime(int n){	
	if( n == 2){
		return 1;
	}
	if(n % 2 == 0){
		return 0;
	}
	for(int j=3; j<n; j++){	
		if(n % j == 0){
			return 0;
		}
	}
	return 1;
}
