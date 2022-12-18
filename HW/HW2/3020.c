#include <stdio.h>

int main(){
	
	int n;
	int x;
	while(scanf("%d",&n) == 0){
		getchar();
		printf("is not a number\n");
	}
	printf("n=%d", n);
	return 0;
}
