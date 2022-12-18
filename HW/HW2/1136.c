#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int tmp;
	int *p = malloc(sizeof(int)*n);

	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		p[i] = tmp;
	}
	
	for(int i=0; i<n-1; i++){
		if(i%2 == 0){
			tmp = p[i];
			p[i] = p[i+1];
			p[i+1] = tmp;
		}
	}

	for(int i=0; i<n; i++){
		printf("%d ",p[i]);
	}
	printf("\n");
	return 0;
}
