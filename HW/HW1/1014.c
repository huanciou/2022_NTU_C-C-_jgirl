#include <stdio.h>

void count(int x, int n, int s)
{
	if( x == n)
	{	
		s += x;
		printf("%d = %d", n, s);
		return;
	}
	else
	{	
		printf("%d+", x);
		count(x+1, n, s += x);
	}

	return;
}

int main()
{
	int n;
	int x = 1; int sum = 0;
	scanf("%d", &n);
	count(x, n, sum);

	return 0;
}
