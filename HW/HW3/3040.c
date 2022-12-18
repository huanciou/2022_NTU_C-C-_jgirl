#include <stdio.h>
#include <stdlib.h>

void foo(int n){
	
	int Tian = (n - 3) % 10;
	int Di = (n - 3) % 12;
	
	printf("%d = ", n);
	switch(Tian)
	{
		case 1:
			printf("甲");
			break;
		case 2:
			printf("乙");
			break;
		case 3:
			printf("丙");
			break;
		case 4:
			printf("丁");
			break;
		case 5:
			printf("戊");
			break;
		case 6:
			printf("己");
			break;
		case 7:
			printf("庚");
			break;
		case 8:
			printf("辛");
			break;
		case 9:
			printf("壬");
			break;
		case 0:
			printf("癸");
			break;
		defult:
			break;
	}

	switch(Di)
	{
		case 1:
			printf("子");
			break;
		case 2:
			printf("丑");
			break;
		case 3:
			printf("寅");
			break;
		case 4:
			printf("卯");
			break;
		case 5:
			printf("辰");
			break;
		case 6:
			printf("巳");
			break;
		case 7:
			printf("午");
			break;
		case 8:
			printf("未");
			break;
		case 9:
			printf("申");
			break;
		case 10:
			printf("酉");
			break;
		case 11:
			printf("戌");
			break;
		case 0:
			printf("亥");
			break;
		default:
			break;
	}
	printf("年\n");
	return;
}

int main(){
	int n;
	int *a = malloc(sizeof(int)*10000);
	int index = 0;
	while(1){

		if(scanf("%d", &n) == 0){
			break;
		}
		a[index] = n;
		index++;
	}

	for(int i=0; i<index; i++){
		int k = a[i];
		foo(k);
	}
		return 0;
}
