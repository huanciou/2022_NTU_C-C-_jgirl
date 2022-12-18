#include <stdio.h>
#include "safe.h"

int safe(int a[5][5]){
	
	int c; // 行
	int r; // 列

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
				if(a[i][j] == 2){
					r = i;
					c = j;
				}
		}
	}
	int step = 0; // a[2][3] a[r][l]
	for(int i=1; i<5; i++){
		if(r-i > -1){
			if(a[r-i][c] == 1){
				return 1;
			}
		}
		if(c+i < 5){
			if(a[r][c+i] == 1){
				return 2;
			}
		}
		if(r+i < 5)
			if(a[r+i][c] == 1){
				return 3;
			}
		if(c-i > -1){
			if(a[r][c-i] == 1){
				return 4;
			}
		}
	}
	return -1;
}
