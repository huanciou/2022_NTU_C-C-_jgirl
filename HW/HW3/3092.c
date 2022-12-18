#include <stdio.h>

int main(){
	
	FILE *fp;
	char name[16];
	int num;
	int salary[1000];
	char fname[13] = {'.','.','/','a','p','p','/'};
	int index = 1;
	int k = 0;
	for(int i=7; i<12; i++){
		scanf("%c", &fname[i]);
	}
	fp = fopen(fname, "r");
	while(1){
		if(index % 2 != 0){
			if(fscanf(fp, "%s", name) != EOF){
				printf("chef %s ", name);
			}
			else{
				break;
			}
		}
		else if(index % 2 == 0){
			if(fscanf(fp, "%d", &num) != EOF){
				salary[k] = num;
				printf("%d\n", num);
				k++;
			}
			else{
				break;
			}
		}
		
		index++;
	}
	index = (index - 1) / 2;
	num = 0;
	for(int i=0; i<index; i++){
		num += salary[i];
	}
	double avg = (double) num / index;
	printf("Total: %d\nAvg: %.2lf", num, avg);
	return 0;
}
