#include <stdio.h>

int main()
{
	int n = 0; int i = 0;
	int arr[1000];

	while(1){
		scanf("%d", &n);
		if( n == -1)
			break;
		arr[i] = n;
		i++;
	}
	
	int sum = 0;

	for(int j = 0; j < i; j++){
		sum += arr[j];
	}
	
	double avg = (double) sum / i;
	printf("%d\n%.1lf", sum, avg);

	return 0;
}
