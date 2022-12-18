#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int)* n);
	int tmp; int index; int ctr;
	bool flag; bool highlight;

	char **c = malloc(sizeof(char*)*n);
	for(int i=0; i<n; i++){
		c[i] = (char*) malloc(sizeof(char*)*16);
	}

	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		p[i] = tmp;
	}
	
	scanf("%d", &index);

	for(int i=0; i<n; i++){
		tmp = p[i];
		ctr = 0;
		flag = true;
		highlight = false;
		for(int j=0; tmp > 0; j++){
			if(tmp%10 == 0 && flag == true && j == 0){
				ctr = 1;
				flag = false;
				highlight = true;
			}
			else{
				ctr = ctr*10 + ( tmp % 10);
			}
			tmp = tmp / 10;
		}
		if(highlight != true){
			sprintf(*(c+i), "%d", ctr);
		}
		else{	
			sprintf(*(c+i), "%d", ctr);
			c[i][0] = '0';
		}
	}

	for(int i=0; i<n; i++){
		if(i==n-1){
			printf("%s", *(c+i));
		}
		else{
			printf("%s ",*(c+i));
		}
	}
	printf("\n%s\n", *(c+index-1));
	return 0;
}
