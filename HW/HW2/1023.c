#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int *arr = malloc(sizeof(int)*n);

	for(int i=0; i<n; i++){
		scanf("%d", (arr+i));
	}

	int Max = *(arr+0);
	int min = *(arr+0);
	int Max_index = 1;
	int min_index = 1;

	for(int i=1; i<n; i++){
		if(*(arr+i) > Max){
			Max = *(arr+i);
			Max_index = i+1;
		}
		if(*(arr+i) < min){
			min = *(arr+i);
			min_index = i+1;
		}
	}

	printf("%d %d\n%d %d\n", Max_index, Max, min_index, min);
	return 0;
}
