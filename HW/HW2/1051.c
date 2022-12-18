#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int m;
	int num;
	scanf("%d %d", &n, &m);
	
	int **p = malloc(sizeof(int*)*n);
	
	for(int i=0; i<n; i++){
		p[i] = (int*) malloc(sizeof(int)*m);
	}

	int grades;
	double sum = 0;
	double avg = 0;
	double *g = malloc(sizeof(double)*n);

	for(int i=0; i<n; i++){
		sum = 0;
		for(int j=0; j<m; j++){
			scanf("%d", &num);
			p[i][j] = num;
			sum += (double)((double)p[i][j] / m);
		}
		g[i] = sum;
	}

	for(int i=0; i<n; i++){
		printf("class %d\n", i+1);
		for(int j=0; j<m; j++){
			printf(" %d: %d\n", j+1, p[i][j]);
		}
		printf(" avg: %.2lf\n", g[i]);
		avg += g[i];
	}
	
	printf("avg: %.2lf\n", (avg/n));
	return 0;
}
