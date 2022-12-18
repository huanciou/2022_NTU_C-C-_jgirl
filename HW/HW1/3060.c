#include <stdio.h>

int Max_loc, Min_loc;
int find_Max(int *p, int x);
int find_Min(int *p, int x);

int main()
{
	int arr[10000];
	int n = 0; int x = 0; int Sum = 0; int Max = 0; int Min = 0;

	while(1)
	{	
		scanf("%d", &n);
		if( n == -1 )
		{
			break;
		}
		else
		{
			arr[x] = n;
			x++;
		}
	}

	for(int i = 0; i < x; i++)
	{
		Sum += arr[i];
	}

	float Avg = (float) Sum / x;
	
	Max = find_Max(arr, x);
	Min = find_Min(arr, x);
	
	printf("%d\n%.1f\n%d\n%d\n%d\n%d", Sum, Avg, Max, Max_loc + 1, Min, Min_loc + 1);
	return 0;
}

int find_Max(int *p, int x)
{	
	int M = *(p + 0);

	for(int i = 1; i < x; i++)
	{
		if( *(p + i) > M )
		{
			M = *(p + i);
			Max_loc = i;
		}
	}

	return M;
}

int find_Min(int *p, int x)
{	
	int m = *(p + 0);

	for(int i = 1; i < x; i++)
	{
		if( *(p + i) < m )
		{
			m = *(p + i);
			Min_loc = i;
		}
	}

	return m;
}
