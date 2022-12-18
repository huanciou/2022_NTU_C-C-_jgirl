#include <stdio.h>

void cal(double a, double b, char s)
{	
	double sum = 0;

	switch(s)
	{
		case '+':
			sum = a + b;
			printf("%.2f + %.2f = %.2f", a, b, sum);
			break;
		case '-':
			sum = a - b;
			printf("%.2f - %.2f = %.2f", a, b, sum);
			break;
		case '*':
			sum = a * b;
			printf("%.2f * %.2f = %.2f", a, b, sum);
			break;
		case '/':
			sum = a / b;
			printf("%.2f / %.2f = %.2f", a, b, sum);
			break;
		default:
			return;
	}
	
	return;
}

int main()
{
	double a;
	double b;
	scanf("%lf %lf", &a, &b);
	char s;
	scanf(" %c", &s);

	cal(a, b, s);
	
	return 0;
}
