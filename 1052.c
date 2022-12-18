#include <stdio.h>
#include <stdlib.h>

void Calc(int *p, int n)
{	
	double avg = 0;
	
	for(int i = 0; i < n; i++)
	{
		avg += (double) ( (double) *(p + i) / n );	
	}
	
	printf("avg = %.2lf\nfail:\n", avg);
	
	for(int i = 0; i < n; i++)
	{
		if(*(p + i) < 60)
		{
			printf("%d: %d\n", i + 1, *(p + i));
		}
	}

	int highest = *(p + 0);
	int index = 1;

	for(int i = 0; i < n; i++)
	{
		if(*(p + i) > highest )
		{
			highest = *(p + i);
			index = i + 1;
		}
	}

	printf("highest:\n%d: %d", index, highest);
	return;
}

int main()
{
	int n;
	scanf("%d", &n);
	int *p = malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++)
	{	
		scanf("%d", p + i);
	}

	Calc(p, n);

	return 0;
}
