#include <stdio.h>

int main()
{

	FILE *fp;
	char text[32];
	char name[100][32];
	char tmp[32];
	char tmp_2[32];
	int g[100];
	int h[100];
	int sum[100];
	int n;
	int i = 0;
	int j = 0;
	char a[2] = {'\n'};
	fp = fopen("./english_list.csv", "r");
	fscanf(fp, "%[^,],%s\n", tmp, tmp_2);
	while (fscanf(fp, "%[^,],%d\n", *(name + i), &g[i]) != EOF)
	{
		//printf("i = %d %d\n",i, g[i]);
		i++;
	}
	fclose(fp);

	fp = fopen("./math_list.csv", "r");
	fscanf(fp, "%[^,],%s\n", tmp, tmp_2);
	while (fscanf(fp, "%[^,],%d\n", text, &h[j]) != EOF)
	{
		sum[j] = h[j] + g[j];
		//printf("j = %d %d\n",j, sum[j]);
		j++;
	}
	fclose(fp);

	FILE *fptr;
	fptr = fopen("./Score.csv", "w");
	for (int k = 0; k < i; k++)
	{
		fprintf(fptr, "%s,%d,%s", *(name + k), sum[k], a);
		printf("%s %d\n", *(name + k), sum[k]);
	}
	fclose(fptr);

	return 0;
}
