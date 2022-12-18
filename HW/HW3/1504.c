#include <stdio.h>

int main(){
	FILE *fp;
	int n;
	char fname[16];
	char text[100];
	int i = 1;

	scanf("%d %s", &n, fname);

	fp = fopen(fname, "r");
	while(fscanf(fp, "%s", text) != EOF){
		if(i%n != 0){
			printf("%s ", text);
		}
		i++;
	}
	return 0;
}
