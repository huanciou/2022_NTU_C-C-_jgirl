#include <stdio.h>
#include <stdbool.h>

int main()
{

	char a[10000];
	char b[10000];
	int j = -1;
	bool flag = false;
	int k = -1;
	int u = 0;

	do
	{
		gets(a);
		k = -1;
		u = 0;
		do
		{
			j++;
			k++;
			if (a[0] == '-' && a[1] == '1')
			{
				flag = true;
				break;
			}
			if (a[u] == '\0')
			{
				break;
			}
			u++;
			if (a[k] > 99 && a[k] < 123)
			{
				b[j] = a[k] - 3;
			}
			else if (a[k] > 64 && a[k] < 91)
			{
				b[j] = a[k] + 29;
			}
			else if (a[k] > 96 && a[k] < 100)
			{
				if (a[k] == 97)
				{
					b[j] = 'x';
				}
				else if (a[k] == 98)
				{
					b[j] = 'y';
				}
				else if (a[k] == 99)
				{
					b[j] = 'z';
				}
			}
			else
			{
				b[j] = a[k];
			}
		} while (1);
		b[j] = 35;

	} while (flag == false);

	for (int i = 0; i < j - 1; i++)
	{
		if (b[i] == 35)
		{
			printf(" ");
		}
		else
		{
			printf("%c", b[i]);
		}
	}

	return 0;
}
