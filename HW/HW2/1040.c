#include <stdio.h>
void caps(char *n)
{

	for (int i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
		{
			n[i] = n[i] - 32;
		}
	}
	for (int i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == '-' && n[i + 1] == '1')
		{
			return;
		}
		printf("%c", n[i]);
	}
	printf("\n");
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
		caps(n);

	} while (1);

	return 0;
}
