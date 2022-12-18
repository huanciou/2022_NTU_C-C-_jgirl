#include <stdio.h>

void sort(int *a, int k){
	int tmp;
	for(int i=k; i>0; i--){
		for(int j=1;j<i; j++){
			if(a[j]<a[j-1]){
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}
	for(int i=0; i<k; i++){
		printf("%d ", a[i]);
	}
	return;
}
int main(){

	int i = 0;
	FILE *fptr;
	int a[1000];
	int n;
	char fname_1[128] = {'.','.','/','a','p','p','/'};
	char fname_2[128] = {'.','.','/','a','p','p','/'};
	
	for(int k=7; k<14; k++){
		scanf("%c", &fname_1[k]);
	}
	getchar();
	for(int k=7; k<14; k++){
		scanf("%c", &fname_2[k]);
	}
	
	/*for(int k=0; k<14; k++){
		printf("%c", fname_1[k]);
	}
	printf("\n");
	for(int k=0; k<14; k++){
		printf("%c", fname_2[k]);
	}
	*/
	fptr = fopen(fname_1, "r");
	
	while(fscanf(fptr, "%d", &n) > 0){
		a[i] = n;
		i++;
	}

	fclose(fptr);

	fptr = fopen(fname_2, "r");

	while(fscanf(fptr, "%d", &n) > 0){
		a[i] = n;
		i++;
	}

	fclose(fptr);
	sort(a,i);

	return 0;
}
