#include <stdio.h>

void bi(char *p)
{
	int arr[10];

	for (int i = 0; p[i] != '\0'; i++)
	{
		if (p[i] != 32)
		{

			int j = 0;
			int a = p[i];
			do
			{
				int tmp = 0;
				tmp = a % 2;
				if (tmp == 0)
				{
					arr[j] = 0;
				}
				else
				{
					arr[j] = 1;
				}
				a = a / 2;
			} while (a != 0 && ++j);

			for (int k = j; k >= 0; k--)
			{
				printf("%d", arr[k]);
			}
			printf(",");
		}
	}
	return;
}
int main()
{
	char n[10000];
	do
	{
		gets(n);
		if (n[0] == '-' && n[1] == '1')
		{
			return 0;
		}
		bi(n);
		printf("\n");
	} while (1);

	return 0;
}