#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	int num;
	int *arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		getchar();
		arr[i] = num;
	}

	if (n % 2 != 0)
	{
		n = (n / 2);
		printf("%d\n", arr[n]);
	}
	else
	{
		n = n / 2;
		num = ((arr[n] + arr[n - 1]) / 2) + 1;
		printf("%d\n", num);
	}
	return 0;
}
