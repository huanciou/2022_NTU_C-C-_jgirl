#include <stdio.h>
#include <stdlib.h>

void reverse(int *p, int n){
	
	if(n == 0){
		printf("%d ", *(p+0));
		return;
	}
	else{
		printf("%d ", *(p+n));
		reverse(p, n-1);
	}
}

int main(){

	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++){
		scanf("%d", (p+i));
	}

	reverse(p, n-1);
	return 0;
}
