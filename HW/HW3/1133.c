#include <stdio.h>

int main(){
	char fname[64];
	FILE *fptr;
	int i = 0;
	int PISTOL = 0; int SMG = 0; int SHOTGUN = 0; int AR = 0; int SNIPER = 0;
	char text[16];
	scanf("%s", fname);

	fptr = fopen(fname, "r");
	while(fscanf(fptr, "%s", text) != EOF){
		
			if(text[0] == 'P'){
				PISTOL++;
			}
			else if(text[0] == 'S'){
				if(text[1] == 'M'){
					SMG++;
				}
				else if(text[1] == 'H'){
					SHOTGUN++;
				}
				else if(text[1] == 'N'){
					SNIPER++;
				}
			}
			else if(text[0] == 'A'){
				AR++;
			}
		i++;
		//printf("i = %d : %s \n", i,text);
	}
	fclose(fptr);

	printf("%d %d %d %d %d", PISTOL, SMG, SHOTGUN, AR, SNIPER);
	return 0;
}
