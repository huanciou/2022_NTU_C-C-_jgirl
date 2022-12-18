#include <string.h>
#include <stdio.h>

int main()
{
	char a[100] = "HELLO-MOTTO-ROllA-FUCKING-SHIT";
	char y[100] = "FKEWOJF,eFEJIJF,FEIJI,FEJIJFIEJF";
	char c[2] = "-";
	char d[2] = ",";
	int i = 0;
	char b[10000][100];
	char *token;
	char *token_b;

	token = strtok(a, c);

	for (i = 0; token != NULL; i++)
	{
		strcpy(b[i], token);
		printf("b=%s\n", b[i]);
		token = strtok(NULL, ",");
		token = strtok(token, c);
	}

	token_b = strtok(y, d);
	for (; token_b != NULL; i++)
	{
		strcpy(b[i], token_b);
		printf("b=%s\n", b[i]);
		token_b = strtok(NULL, "-");
		token_b = strtok(token_b, d);
	}

char **temp;
	for(int k=0;k<i-1;k++){
		for(int j=k+1;j<i;j++){
			if(strcmp(b[i],b[j])>0){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
	return 0;
}

