#include <stdio.h>

int tmp = 1;
int fact(int x){
	if(x == 0){
		return tmp;
	}
	else{
		tmp *= x;
		fact(x-1);
		//printf("n = %d tmp = %d\n", x,tmp);
	}
	return tmp;
}
void def(int n, int m){
	int n_fact = fact(n);
	tmp = 1;
	int m_fact = fact(m);
	tmp = 1;
	int nm_fact = fact(n-m);
	int P = n_fact / nm_fact;
	int C = n_fact / (m_fact * nm_fact);
	printf("%d\n%d", P, C);
	return;
}
int main(){
	
	int m, n;
	scanf("%d %d", &n, &m);
	if(m > n){
		printf("0\n0\n");
		return 0;
	}
	def(n, m);
	return 0;
}
