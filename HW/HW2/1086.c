#include <stdio.h>

void trans(int N, char C1, double F, char *S1, char C2, char *S2)
{
	double m = (double)N + F;
	int n = C1 + N;
	int o = (int)C2 + F;

	for (int i = 0; S1[i] != '\0'; i++)
	{
		if (S1[i] > 64 && S1[i] < 91)
		{
			S1[i] = S1[i] + ('a' - 'A');
		}
	}
	for (int i = 0; S2[i] != '\0'; i++)
	{
		if (S2[i] > 96 && S2[i] < 123)
		{
			S2[i] = S2[i] - ('a' - 'A');
		}
	}

	printf("%.2f\n%c %d\n%c %d\n%s\n%s", m, n, n, o, o, S1, S2);

	return;
}
int main()
{
	int N = 0;
	char C1;
	double F = 0;
	char S1[10000];
	char C2;
	char S2[10000];
	int i = 0;

	scanf("%d %c %lf", &N, &C1, &F);
	getchar();

	do
	{
		scanf("%c", &S1[i]);
	} while (S1[i] != '\n' && ++i);

	S1[i] = '\0';

	scanf("%c", &C2);
	getchar();

	i = 0;

	do
	{
		scanf("%c", &S2[i]);
	} while (S2[i] != '\n' && ++i);

	S2[i] = '\0';

	trans(N, C1, F, S1, C2, S2);
	return 0;
}
