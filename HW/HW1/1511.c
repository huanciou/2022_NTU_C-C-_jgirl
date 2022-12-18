#include <stdio.h>

void odd(int N, int X, int Y)
{	
	int T = 20;
	for(int i = 1; i <= N; i++)
	{
		if( i % 2 != 0)
			T += X;
		else
			T -= Y;
	}
	printf("%d", T);
	return;
}

int main()
{
	int N, X, Y;
	int T = 20;
	scanf("%d %d %d", &N, &X, &Y);

	if( N % 2 != 0)
	{	
		odd(N, X, Y);
		return 0;
	}
	
	for(int i = 2; i <= N; i++)
	{
		if( i % 2 == 0)
			T += X;
		else
			T -= Y;
	}
	printf("%d", T);
	return 0;
}
