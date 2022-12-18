#include <stdio.h>

int main(){
	int i = 0;
	int n = 0;
	int arr[100];
	FILE *fptr;
	char fname[128];
	scanf("%s", fname);
	fptr = fopen(fname,"r");
	while(fscanf(fptr, "%d", &n) > 0){
		arr[i] = n;
		i++;
	}
	fclose(fptr);
	fname[0] = 'w';
	fptr = fopen(fname, "w");
	for(int j=0; j<i; j++){
		fprintf(fptr, "%d ", arr[j]);
		int sum = 0;
		for(int j=0; j<i; j++){
			sum += arr[j];
		}
		double avg = (double) sum / i;		

		if(j== i-1){
			printf("%d\n%.2lf", sum, avg);
			fprintf(fptr, "\n%d\n%.2lf", sum,avg);
		}
	}
	fclose(fptr);



	return 0;
}
