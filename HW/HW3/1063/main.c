#include <stdio.h>
#include <stdlib.h>
#include "score.h"
int Index;

int main(){
	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)*n);
	double AVG; int MAX;
	inputAry(n, p);
	AVG = Avg(n, p);
	MAX = MaxScore(n, p);
	
	printf("avg = %.2lf\nhighest:\n%d: %d", AVG, Index, MAX);
	return 0;
}
