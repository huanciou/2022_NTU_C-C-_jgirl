#include <stdio.h>

void next(int *p, int *q, int i)
{	
	int time = 0;
	
	for(int j = 0; j < i ;j++)
	{
		if( *(q + j) == * (p + j))
		{
			time += 5;
		}
		else if( *(q + j) > *( p + j )) // up 
		{	
			int tmp = *( q + j) - * ( p + j);
			time += tmp * 10;
		}
		else if( *(q + j) < * ( p + j)) // down
		{
			int tmp = *( p + j) - * ( q + j);
			time += tmp * 6;
		} 
	}
	
	printf("%d", time);
	return;
}

int main()
{
	int n; int i = 1;
	char a;
	int arr[1000] = {0};
	arr[0] = 0;
	
	a = getchar();
	if( a != 'A')
	{
		return 0;
	}

	while(scanf("%d", &n) != 0)
	{
		arr[i] = n;
		i++;
	}

	arr[i] = 0;

	int *p = &arr[0];
	int *q = &arr[1];

	next(p, q, i);
	
	return 0;
}
