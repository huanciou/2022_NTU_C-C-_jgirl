#include <stdio.h>
#include <stdbool.h>

int main()
{
	int M, N = {0};
	int X1, Y1, X2, Y2 = {0};
	int F1, F2 = {0};
	int N1 = 0;
	int E1 = 0;
	int N2 = 0;
	int E2 = 0;
	int robot1_path_x[50000] = {0};
	int robot1_path_y[50000] = {0};
	int robot2_path_x[50000] = {0};
	int robot2_path_y[50000] = {0};

	int i = 1;
	int j = 1;
	int o = 1;
	int p = 1;
	int T = 0;

	scanf("%d %d %d %d %d %d %d %d %d %d %d %d",
		  &M, &N, &X1, &Y1, &E1, &N1, &F1, &X2, &Y2, &E2, &N2, &F2);

	robot1_path_x[0] = X1;
	robot1_path_y[0] = Y1;
	robot2_path_x[0] = X2;
	robot2_path_y[0] = Y2;

	int NN1 = N1;
	int EE1 = E1;
	int NN2 = N2;
	int EE2 = E2;

	// Robot 1

	while (F1 > 0)
	{
		N1 = NN1;
		E1 = EE1;
		i = j;

		for (; (N1 > 0) && (F1 > 0); i++)
		{
			if ((Y1 + 1) < N)
			{
				F1--;
				N1--;
				Y1++;
				robot1_path_x[i] = X1;
				robot1_path_y[i] = Y1;
			}
			else
			{
				F1--;
				N1--;
				Y1 = 0;
				robot1_path_x[i] = X1;
				robot1_path_y[i] = Y1;
			}
		}

		for (j = i; (E1 > 0) && (F1 > 0); j++)
		{
			if ((X1 + 1) < M)
			{
				F1--;
				E1--;
				X1++;
				robot1_path_x[j] = X1;
				robot1_path_y[j] = Y1;
			}
			else
			{
				F1--;
				E1--;
				X1 = 0;
				robot1_path_x[j] = X1;
				robot1_path_y[j] = Y1;
			}
		}
	}

	// Robot 2
	while (F2 > 0)
	{
		N2 = NN2;
		E2 = EE2;
		p = o;

		for (; (E2 > 0) && (F2 > 0); p++)
		{
			if ((X2 + 1) < M)
			{
				F2--;
				E2--;
				X2++;
				robot2_path_x[p] = X2;
				robot2_path_y[p] = Y2;
			}
			else
			{
				F2--;
				E2--;
				X2 = 0;
				robot2_path_x[p] = X2;
				robot2_path_y[p] = Y2;
			}
		}

		for (o = p; (N2 > 0) && (F2 > 0); o++)
		{
			if ((Y2 + 1) < N)
			{
				F2--;
				N2--;
				Y2++;
				robot2_path_x[o] = X2;
				robot2_path_y[o] = Y2;
			}
			else
			{
				F2--;
				N2--;
				Y2 = 0;
				robot2_path_x[o] = X2;
				robot2_path_y[o] = Y2;
			}
		}
	}

	j = j - 1;
	o = o - 1;

	int step;
	bool robot1_stop_first = false;
	bool robot2_stop_first = false;
	bool here = false;

	if (j > o)
	{
		step = j;
		robot2_stop_first = true;
	}
	else if (o > j)
	{
		step = o;
		robot1_stop_first = true;
	}
	else if (o == j)
	{
		step = o;
	}

	for (T = 1; T <= step; T++)
	{
		if (robot1_stop_first == true)
		{
			if ((T == (j + 1)) || here == true)
			{
				here = true;

				if ((robot1_path_x[j] == robot2_path_x[T]) && (robot1_path_y[j] == robot2_path_y[T]))
				{
					printf("robots explode at time %d", T);
					return 0;
				}
			}
			else if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}

		else if (robot2_stop_first == true)
		{
			if ((T == (o + 1)) || here == true)
			{
				here = true;

				if ((robot1_path_x[T] == robot2_path_x[o]) && (robot1_path_y[T] == robot2_path_y[o]))
				{
					printf("robots explode at time %d", T);
					return 0;
				}
			}
			else if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}

		else
		{
			if ((robot1_path_x[T] == robot2_path_x[T]) && (robot1_path_y[T] == robot2_path_y[T]))
			{
				printf("robots explode at time %d", T);
				return 0;
			}
		}
	}

	printf("robots will not explode");

	return 0;
}
