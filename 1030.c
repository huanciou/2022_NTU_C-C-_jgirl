#include <stdio.h>

int main()
{
	int arr[5];
	
	for(int i = 0; i < 10; i++){
		if(i < 5)
			scanf("%d", arr + i);
		else
			printf("%d\n", arr[i-5]);
	}
	return 0;
}
