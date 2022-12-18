#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	printf("2 is prime\n");

	for(int i = 2; i <= n; i++)
	{
		for(int j = 2; j < i; j++)
		{
			if( i % 2 == 0)
			{
				break;
			}
			else if( i % j == 0)
			{
				break;
			}
			else if(j == i - 1)
			{
				printf("%d is prime\n", i);
			}
		}
	}

	return 0;
}
