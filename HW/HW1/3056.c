#include <stdio.h>
#include <stdbool.h>
void output_1(int t, int m){
	
	if(t >= m){
		if(t == m){
			printf(" & %d\n", t);
		}
		else if(t > m){
			printf("\n");
		}
		return;
	}
	else{
		printf(" & %d", t);
		output_1(t+7, m);
	}
}

void output_2(int t, int m){
	int tmp;
	bool first = true;

	for(; t <= m; t++){
		int i = t;
		while( i > 0){
			tmp = i % 10;
			i = i / 10;
			if( tmp == 7){
				if(first == true){
					printf("%d", t);
					first = false;
					break;
				}
				printf(" & %d", t);
				break;
			}
		}
	}
	return;
}

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	int t = n;
	if( t % 7 != 0){
		int tmp = t % 7;
		t += (7 - tmp);
	}
	printf("%d", t);
	output_1(t+7, m);
	output_2(n, m);

	return 0;
}
