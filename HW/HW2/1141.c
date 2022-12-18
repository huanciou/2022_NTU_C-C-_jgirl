#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)*n);
	int tmp; double value = 0; int count = 0;

	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		p[i] = tmp;
		value += (double) ((double) p[i] / n);
	}

	for(int i=0; i<n; i++){
		if(p[i] > value){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
