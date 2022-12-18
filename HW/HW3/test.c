#include <stdio.h>

int main()
{
	FILE *fp;
	char status[2];
	char name[16];
	char phone[32];
	char mail[32];
	char fname[32] = {'t', 'm', 'p'};
	char text[32];

	fp = fopen(fname, "w");
	while (1)
	{
		scanf("%d", status);
		if (status == 'q')
		{
			break;
		}
		else if (status == 'i')
		{
			fp = fopen(fname, "w");
			scanf("%s %s %s", &name, &phone, &mail);
			fprintf(fp, "%s\n%s\n%s\n", name, phone, mail);
			fclose(fp);
		}
		else if (status == 'l')
		{
			fp = fopen(fname, "r");
			while (fscanf(fp, "%s\n", text) != EOF)
			{
				printf("%s\n", text);
			}
		}
	}
}