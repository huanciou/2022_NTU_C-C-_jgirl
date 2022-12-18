#include <stdio.h>

void flash_back(int a)
{
	if ( a == 1)
	{
		printf("1\n");
		return;
	}
	else
	{
		printf("%d", a);
		flash_back(a-1);
	}
}

void flash(int n, int a)
{
	if( a == n )
	{
		printf("%d", a);
		flash_back(a-1);
	}
	else
	{	
		printf("%d",a);
		flash(n, a+1);
	}
}

int main()
{
	int n;
	int a = 1;

	scanf("%d", &n);
	flash(n, a);

	return 0;
}
