#include <stdio.h>

void rec(int n, int sum)
{
	if (n == 1){
		sum += 1 ;
		printf("%d", sum);
		return;
	}
	else{
		sum += n;
		rec(n-1, sum);
	}
}

int main()
{
	int n;
	int sum = 0;
	scanf("%d", &n);
	rec(n, sum);

	return 0;
}
