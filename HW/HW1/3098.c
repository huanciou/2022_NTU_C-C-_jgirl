#include <stdio.h>

int main()
{	
	int arr[10000];
	int n = 0; int count = 0; int x;
	int *ptr = &arr[0];

	while(scanf("%d", (ptr + n)) != 0 )
	{	
		n++;
	}

	for(int i = 0; i < n-1; i++)
	{	
		if(*(ptr + i) == 1 && *(ptr + ( i + 1)) == 9)
		{
			count++;
		}
	}

	printf("%d",count);

	return 0;

}
