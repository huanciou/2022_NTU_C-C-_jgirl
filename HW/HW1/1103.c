#include <stdio.h>

void trans(int n){
	switch(n){
		case 1:
			printf("壹");
			break;
		case 2:
			printf("貳");
			break;
		case 3:
			printf("參");
			break;
		case 4:
			printf("肆");
			break;
		case 5:
			printf("伍");
			break;
		case 6:
			printf("陸");
			break;
		case 7:
			printf("柒");
			break;
		case 8:
			printf("捌");
			break;
		case 9:
			printf("玖");
			break;
		default:
			break;
	}
	return;
}

int main(){
	
	int num;
	int arr[1000];
	int count = 0;
	scanf("%d", &num);
	if(num >= 100000 || num <= 0){
		printf("out of range");
		return 0;
	}
	for(int i = 0; num > 0; i++){
		arr[i] = num % 10;
		num = num / 10;
		count++;
	}
	
	int tmp;

	for(int j = count - 1; j >= 0; j--){
		tmp = arr[j];
		trans(tmp);
		if(j == 4) printf("萬");
		else if(j == 3 && tmp != 0) printf("仟");
		else if(j == 2 && tmp != 0) printf("佰");
		else if(j == 1 && tmp != 0) printf("拾");
		else if(j == 0) printf("元整\n");	
	}

	return 0;
}
