#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bbsort(int *p, int n){
	int tmp;
	int flag = false;

	for(int i=n; i>0; i--){
		for(int j=1; j<=i; j++){
			if(p[j-1] > p[j]){
				tmp = p[j];
				p[j] = p[j-1];
				p[j-1] = tmp;
				flag = true;
			}
		}
		if(flag == false){
			break;
		}
	}
	for(int i=0; i<n+1; i++){
		if(i == n){
			printf("%d \n", *(p+i));
		}
		else{
			printf("%d ",*(p+i));
		}
	}
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)* n);
	int grades;

	for(int i=0; i<n; i++){
		scanf("%d", &grades);
		p[i] = grades;
	}

	bbsort(p, n-1);
	return 0;
}
