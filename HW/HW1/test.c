#include <stdio.h>
#include <math.h>

double sd(double s)
{
	double n = (double)1 / 3;
	double _sd = sqrt(n * s);
	return _sd;
}
void count(int *a, int n)
{
	int tmp;
	for (int i = 0; i < 4; i++)
	{
		a[i] = n % 10;
		n = n / 10;
	}
	return;
}
void calc(int *a, int *b, int *c)
{
	for (int i = 3; i >= 0; i--)
	{
		int sum = a[i] + b[i] + c[i];
		double avg = (double)sum / 3;
		double s = pow((a[i] - avg), 2) + pow((b[i] - avg), 2) + pow((c[i] - avg), 2);
		double sd_ = sd(s);
		printf("%d %.2lf %.2lf\n", sum, avg, sd_);
	}
	return;
}

void calc_all(int a, int b, double c)
{
	double sum = (double)a + b + c;
	double avg = sum / 3;
	double s = pow((a - avg), 2) + pow((b - avg), 2) + pow((c - avg), 2);
	double sd_ = sd(s);
	printf("%.2lf %.2lf %.2lf\n", sum, avg, sd_);
	return;
}

int main()
{
	int A, B;
	double C;
	scanf("%d %d %lf", &A, &B, &C);
	int D = (int)C;
	int a[4] = {0}; int b[4] = {0}; int c[4] = {0};

	count(a, A);
	count(b, B);
	count(c, D);
	calc(a, b, c);
	calc_all(A, B, C);

	return 0;
}
