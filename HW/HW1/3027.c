#include <stdio.h>

int count1(int N)
{
	if(N >= 10310001)
	{
		return 45;
	}
	else if(N >= 4530001)
	{
		return 40;
	}
	else if(N >= 2420001)
	{
		return 30;
	}
	else if(N >= 1210001)
	{
		return 20;
	}
	else if(N >= 540001)
	{
		return 12;
	}
	else
	{
		return 5;
	}

	return -1;
}
int count2(int N)
{
	if(N >= 10310001)
	{
		return 1345100;
	}
	else if(N >= 4530001)
	{
		return 829600;
	}
	else if(N >= 2420001)
	{
		return 376600;
	}
	else if(N >= 1210001)
	{
		return 134600;
	}
	else if(N >= 540001)
	{
		return 37800;
	}
	else
	{
		return 0;
	}

	return -1;

}

int main()
{
	int N;
	scanf("%d", &N);
	
	// N薪資 J稅率 K稅額 L累進稅額 M總稅
	
	int J = count1(N);
	int L = count2(N);
	
	float j = (float) J / 100;
	int K = N * j;
	int M = K - L;
	
	printf("%d%% %d %d %d ", J, K, L, M);
	return 0;
}
