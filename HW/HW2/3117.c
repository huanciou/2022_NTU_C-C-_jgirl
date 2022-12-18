#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a = malloc(sizeof(char) * 20000);
    int k;

    do
    {
        scanf("%s", a);

        for (int i = 0; a[i] != '\n'; i++)
        {
            if (a[i] == '-' && a[i + 1] == '1')
            {
                return 0;
            }
            else if (a[i] == 98)
            {
                printf("d");
            }
            else if (a[i] == 100)
            {
                printf("b");
            }
            else if (a[i] == 112)
            {
                printf("q");
            }
            else if (a[i] == 113)
            {
                printf("p");
            }
            else if (a[i] == '\0')
            {
                printf("\n");
                break;
            }
            else
            {
                printf("%c", a[i]);
            }
        }

    } while (1);

    return 0;
}
