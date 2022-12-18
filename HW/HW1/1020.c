#include <stdio.h>

void exchange(int x, int caps){
	
	if(caps < 3){
		printf("%d\n",x);
		return;
	}
	else if( caps >= 3){
		exchange(x+1, caps-3);
	}
}
int main(){
	int x;
	scanf("%d", &x);
	int caps = x;
	
	exchange(x, caps);
	return 0;
}
