#include <stdio.h>

int main()
{
	int height, weight;
	scanf("%d %d", &height, &weight);
	
	float h = (float) height / 100;
	float BMI = (float) (weight / ( h * h));
	
	printf("%.2f\n", BMI);

	if(BMI < 18.5)
	{
		printf("Underweight");
	}
	else if (BMI < 24)
	{
		printf("Normal");
	}
	else if(BMI < 27)
	{
		printf("Overweight");
	}
	else if(BMI < 30)
	{
		printf("Obese Class I");
	}
	else if(BMI < 35)
	{
		printf("Obese Class II");
	}
	else
	{
		printf("Obese Class III");
	}
	
	return 0;
	
}
