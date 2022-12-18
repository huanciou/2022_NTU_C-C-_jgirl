#include <stdio.h>

int main()
{
	int a[5] = {0};
	int *p = &a[0];
	int Index = 1;
	
	for(int i = 0; i < 5; i++)
	{	
		scanf("%d", &a[i]); 
	}

	int Max = *(p + 0);
	
	for(int i = 1; i < 5; i++)
	{
		if(*(p + i) > Max)
		{
			Max = *(p + i);
			Index = i + 1; 
		}
	}
	
	printf("%d: %d", Index, Max);
	return 0;
}

