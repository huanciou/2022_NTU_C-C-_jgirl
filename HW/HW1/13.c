#include <stdio.h>

void rec(int i, int n)
{	
	int j = 1;

	if( i <= n)
	{	
		while(j <= i)
		{
			printf("%d", j);
			j++;
		}		
		rec(i+1, n);
	}

	return;
}

int main()
{
	int n;
	int i = 1;
	scanf("%d", &n);
	
	rec(i, n);
	return 0;
}
