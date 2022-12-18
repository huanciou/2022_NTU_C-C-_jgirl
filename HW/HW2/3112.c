#include <stdio.h>
#include <string.h>

int main()
{

	char a[10000];
	char b[10000];
	int k;
	gets(a);
	gets(b);
	char *p = a;
	char *token = a;
	char *loc;
	int len = strlen(b);

	do
	{
		loc = strstr(token, b);
		if (loc == NULL)
		{
			break;
		}
		k = loc - p;
		printf("%d\t", k);
		printf("%c%c+%s+%c%c\n", a[k - 2], a[k - 1], b, a[k + len], a[k + len + 1]);
		token = loc + 1;
	} while (loc != NULL);

	return 0;
}
