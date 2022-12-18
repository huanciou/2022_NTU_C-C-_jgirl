#include <stdio.h>
#include <math.h>

int sum_up(int *p, int t)
{	
	int x = 0;
	
	for(int i = 0; i < t; i++)
	{	
		x += pow(*(p + i), t);
	}

	return x;
}

int main()
{
	int n, m, t;
	int j = 0;
	int ans[100];
	scanf("%d %d", &n, &m);
	
	for(int i = n; i <= m; i++)
	{	
		int temp = i;
		int arr[100] = {0};

		for(int i = 0; temp > 0; i++)
		{	
			arr[i] = temp % 10;
			temp = temp / 10;
			t = i+1;
		}

		int sum = sum_up(arr, t);
	
		if(sum == i)
		{
			ans[j] = sum;
			j++;
		}
	}
	

	if(j > 0)
	{	
		for(int i = 0; i < j; i++)
		{	
			printf("%d", ans[i]);
			if(i != j-1)
			{
				printf(" & ");
			}
		}
	}
	else if(j == 0)
	{
		printf("none");
	}

	return 0;
}
