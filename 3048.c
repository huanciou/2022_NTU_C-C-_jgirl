#include <stdio.h>

void p(int i, int j, int k){
	
	if(j > i){
		return;
	}
	if(k == j){
		printf("\n");
		k = 0;
		p(i, j+1, k);
	}
	else if(k < j){
		printf("*");
		p(i, j, k+1);
	}
	return;
}

int main(){
	int i;
	scanf("%d", &i);
	int j = 1; 
	int k = 0;

	p(i, j, k);
	return 0;
}
