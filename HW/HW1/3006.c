#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);

	if(a >= 95)
		b = 2000;
	else if(a >= 90)
		b = 1000;
	else if(a >= 80)
		b = 500;
	else
		b = 0;

	printf("獎金 %d 元", b);
	
	return 0;

}
