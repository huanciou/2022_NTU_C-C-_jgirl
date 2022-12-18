#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int *p = malloc(sizeof(int)* n);
	int tmp, median;

	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		p[i] = tmp;
	}
	
	if( n % 2 != 0){
		median = p[n/2];
	}
	else{
		tmp = ( p[n/2] + p[(n/2)-1] ) /2;
		median = tmp;
	}

	if(k > median){
		printf("%d\nWINNER WINNER CHICKEN DINNER!\n", median);
	}
	else{
		printf("%d\nBETTER LUCK NEXT TIME!\n", median);
	}

	return 0;
}
