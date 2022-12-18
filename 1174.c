#include <stdio.h>

void fill_in(int p[][3], int m, int n){	
	int x;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			p[i][j] = scanf("%d", &x);
		}
	}
	return;
}

void calc(int p[][3], int q[][3], int r[][3], int m, int n){
	int x;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			r[i][j] = (p[i][0] * q[j][0]) + (p[i][1] * q[j][1]) + (p[i][2] * q[j][2]);
			x = r[i][j];	
			printf("%5d", x);
		}
	}
	return;
}
int main(){
	int m = 3; int n = 3;
	int a[m][n];
	int b[m][n];
	int c[m][n];
	
	fill_in(a, m, n);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int z = a[m][n];
			printf("%d ", z);
		}
	}
	fill_in(b, m, n);
	calc(a, b, c, m, n);
	
	return 0;
}
