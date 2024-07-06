#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[] = "sde";

    char b[5];
    int i, j;

    for (i = 0; a[i] != '\0'; i++)
    {
        i = i - 1;
        for (j = 0; i >= 0; j++, i--)
        {
            b[j] = a[i];
        }
        b[j] = '\0';
    }
    printf("%s", b);

    return 0;
}
