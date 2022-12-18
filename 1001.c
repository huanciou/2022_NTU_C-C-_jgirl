#include <stdio.h>

int main()
{
	int a, b;
	int *a_ptr = &b;
	int *b_ptr = &a;
	
	scanf("%d %d", &a, &b);
	printf("%d\n%d", *a_ptr, *b_ptr);

	return 0;
}
