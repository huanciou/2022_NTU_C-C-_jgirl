#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	int j = 0;
	scanf("%d", &n);
	
	char **a = malloc(sizeof(char) * n);
	for(int i=0; i<n; i++){
		a[i] = (char*) malloc(sizeof(char*) * 128);
	}
	
	for(int i=0; i<n; i++){
		scanf("%s", a[i]);
	}
	

	int index = 0;

	for(int i=0; i<n; i++){
	    char c[64] = "zzzzzzzzzzz";
		for(int j=0; j<n; j++){
			if(strcmp(c, a[j]) > 0){
			    //printf("c = %s, a = %s\n", c,a[j]);
				strcpy(c,a[j]);
			//	printf("i = %d j = %d %s\n", i,j, c);
				index = j;
			}
		}
	//	printf("s = %s\n", c);
		
		printf("%s ",c);
		a[index] = "zzzzzzzzzzz";
		//printf("s = %s\n", c);
	}
	
	
	return 0;
}

