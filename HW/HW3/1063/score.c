#include <stdio.h>
#include <stdlib.h>
#include "score.h"
int Index;
void inputAry(int n, int *P){
	int x = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		P[i] = x;
	}
	return;
}

double Avg(int n, int *P){
	double sum = 0;
	double AVG = 0;
	for(int i=0; i<n; i++){
		sum += P[i];
	}
	AVG = (double) (sum / n );
	return AVG;
}

int MaxScore(int n, int *P){
	int MAX = P[0];
	Index = 1;

	for(int i=1; i<n; i++){
		if( P[i] > MAX){
			MAX = P[i];
			Index = i+1;
		}
	}
	return MAX;
}
