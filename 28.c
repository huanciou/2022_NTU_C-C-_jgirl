#include <stdio.h>

void rec(int n, int s){
	if( n == 0){
		printf("0");
	}
	else if(n == 1){
		s += 1;
		printf("%d", s);
		return;
	}
	else{
		s += (n * n);
		rec(n-1, s);
	}
}
int main(){
	int n;
	int sum = 0;
	scanf("%d", &n);
	rec(n, sum);

	return 0;
}
