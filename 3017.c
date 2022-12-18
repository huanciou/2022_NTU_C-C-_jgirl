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
	int Max = arr[0]; int index = 1;
	for(int j = 0; j < i; j++){
		
		sum += arr[j];
	
		if(arr[j] > Max){
			Max = arr[j];
			index = j+1;
		}
	}
	
	double avg = (double) sum / i;
	printf("%d\n%.1lf\n%d\n%d", sum, avg, Max, index);

	return 0;
}

