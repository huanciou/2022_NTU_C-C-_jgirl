#include <stdio.h>

void fac(int n, int s)
{
	if(n == 0)
	{
		printf("%d\n", s);
		return;
	}
	else
	{
		s *= n;
		fac(n-1, s);
	}
}

int main()
{
	int n;
	int s = 1;
	scanf("%d", &n);
	
	fac(n, s);
	return 0;
}
