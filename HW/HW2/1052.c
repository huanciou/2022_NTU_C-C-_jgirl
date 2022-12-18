#include <stdio.h>
#include <stdlib.h>

int main(){
	int n; int ctr = 0;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)*n);
	double avg = 0;
	int *q = malloc(sizeof(int)*n);
	int index = 0;
	int highest = 0; int highest_index;

	for(int i=0; i<n; i++){
		scanf("%d", &ctr);
		p[i] = ctr;
		avg += (double) ((double)p[i] / n);
		if(p[i] < 60){
			q[index] = i;	
			index++;
		}
		if(p[i] > highest){
			highest = p[i];
			highest_index = i;
		}
	}

	printf("avg = %.2lf\nfail:\n", avg);

	for(int i=0; i<index; i++){
		int tmp = q[i];
		printf("%d: %d\n", q[i]+1, p[tmp]);
	}
	printf("highest:\n%d: %d\n", highest_index+1, highest);

	return 0;
}
