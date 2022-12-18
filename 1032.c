#include <stdio.h>

void bubble_sort(int *arr){
	int tmp;
	
	for(int i = 4; i > 0; i--){
		for(int j = 1; j < 5; j++){
			if(arr[j-1] > arr[j]){
				tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
			}
		}
	}

	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
		if(i == 4) printf("\n");

	}

	return;
}

int main(){
	int arr[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr);
	return 0;
}
