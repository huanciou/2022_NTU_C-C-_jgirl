#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000] = {0};
	int tmp = 0; int count = 0; int sum = 0;
	
	for(int i = 0; n > 0; i++)
	{
		tmp = n % 10;
		n = n / 10;
		arr[i] = tmp;
		count ++;
	}

	for(int j = 0; j < count; j++)
	{
		sum += arr[j];
	}

	printf("%d", sum);

	return 0;

}
