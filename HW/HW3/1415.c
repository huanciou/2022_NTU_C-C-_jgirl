#include <stdio.h>
#include <math.h>

int main(){
	
	FILE *fp;
	int num;
	int grade;
	int a[1000];
	int b[1000];
	int i = 0;
	char tmp_1[16];
	char tmp_2[16];
	int c[100];
	char fname[16];
	scanf("%s", fname);

	fp = fopen(fname, "r");
	fscanf(fp, "%s,%s\n",tmp_1, tmp_2 );
	while((fscanf(fp,"%d,%d\n", &num, &grade)) != EOF){
		a[i] = num;
		b[i] = grade;
		//printf("i = %d, num = %d grade = %d\n", i, a[i], b[i]);
		i++;
	}
	int curve;
	int k = 0;
	for(int j=0; j<i; j++){
		curve = sqrt(b[j]) * 11;
		if(curve<60){
			c[k] = a[j];
			k++;
		}
	}
	for(int x=0; x<k; x++){
		if(x == k-1){
			printf("%d", c[x]);
		}
		else{
			printf("%d ",c[x]);
		}

	}

	return 0;
}

