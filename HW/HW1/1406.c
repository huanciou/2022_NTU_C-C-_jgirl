#include <stdio.h>

int main()
{
	int L, S, i;
	scanf("%d %d", &L, &S);

	for(i = 0; L != S; i++)
	{
		if( S < L)
			S += 5;
		else
			S -= 2;
	}
	
	printf("%d", i);
	return 0;
}
