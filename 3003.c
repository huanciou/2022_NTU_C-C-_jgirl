#include <stdio.h>
#include <math.h>

int main()
{
	int r = 100;
	float C = r * 2 * M_PI;
	float area = r * r * M_PI;

	printf("圓周率 %.15f\n半徑 %d\n圓周長 %.13f\n圓面積 %.12f\n", M_PI, r, C, area);
	return 0;
}
