#include <stdio.h>

void print_out(int *arr){
	for(int i = 0; i < 5; i++){
		printf("%d\t",arr[i]);
		for(int j = 0; j < arr[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	return;
}

void insertion_sort(int *arr){
	for(int i = 1; i < 5; i++){
		
		int key = arr[i];
		int j = i - 1;

		while(key < arr[j] && j > -1){
			arr[j+1] = arr[j]; // swap
			j--;
		}
		arr[j+1] = key;
	}
	print_out(arr);
	return;
}

int main(){
	int arr[5];

	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	insertion_sort(arr);
	return 0;
}
