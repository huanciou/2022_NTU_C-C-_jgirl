#include <stdio.h>

int main()
{
	int n, a, b;
	scanf("%d", &n);
	
	a = n / 12;
	b = n % 12;

	if( b == 0 )
		printf("%d dozen", a);
	else
		printf("%d dozen and %d", a, b);

	return 0;
}
