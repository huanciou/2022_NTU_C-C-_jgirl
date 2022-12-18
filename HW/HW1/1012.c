#include <stdio.h>

void a(int s)
{
	if(s >= 60 && s <= 100)
		printf("pass");
	else if(s < 60 && s >= 0)
		printf("fail");
	else
		printf("score error");
	
	return;
}

void b(int s)
{
	if(s >= 70 && s <= 100)
		printf("pass");
	else if(s < 70 && s >= 0)
		printf("fail");
	else
		printf("score error");
	
	return;
}

int main()
{
	int num, score;
	scanf("%d", &num);
	
	if(num != 1 && num != 2)
	{
		printf("role error");
		return 0;
	}

	scanf("%d", &score);

	if(num == 1)
	{
		a(score);
	}
	else if(num == 2)
	{
		b(score);
	}

	return 0;
}
