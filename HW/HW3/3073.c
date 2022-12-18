#include <stdio.h>

void foo(int n, int x, int y){
	if(n == 0){
		printf("%d\n%d\n", x, y);
		return;
	}
	else{
		foo(n-1, x*n, y+n);
	}
}


int main(){
	int n;
	int factRst = 1;
	int sumRst = 0;

	scanf("%d", &n);
	if(n == 0){
		printf("0\n0\n");
		return 0;
	}
	
	foo(n, factRst, sumRst);

	return 0;
}
