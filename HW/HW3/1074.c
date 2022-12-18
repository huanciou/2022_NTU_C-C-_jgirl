#include <stdio.h>

int main(){
	
	char status;
	char name[64];
	char phone[32];
	char mail[32];
	FILE *fptr;
	char text[128] = {'t','m','p','.','t','x','t'};
	char content[128];
	int i = 1;
	
	fptr = fopen(text, "w");
	fclose(fptr);

	while(1){
		scanf("%c", &status);
		if(status == 'q'){
			break;
		}	
		else if(status == 'i'){
			fptr = fopen(text,"a");
			scanf("%s %s %s", name, phone, mail);
			fprintf(fptr, "%d\n%s\t%s\t%s\n",i, name, phone, mail);
			i++;
			fclose(fptr);
		}
		else if(status == 'l'){	
			fptr = fopen(text,"r");
			if(fptr == NULL){
				printf("No data.\n");
			}
			else{
				while(fscanf(fptr, "%s", content) != EOF){
					printf("%s\n", content);
				}
			}
			fclose(fptr);
		}
		else if(status == 's'){
			fptr = fopen(text,"a");	
			scanf("%s", text);
			fclose(fptr);
		}
		else if(status == 'o'){
			fptr = fopen(text,"r");
			while(fscanf(fptr, "%s", content) != EOF){
				printf("%s\n", content);
			}
			fclose(fptr);
		}
		else if(status == 'c'){
			fptr = fopen(text, "w");
			fclose(fptr);
		}
	}
	return 0;
}
