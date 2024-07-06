#include <stdio.h>

int main()
{
    char a[] = "Paintes";
    char b[] = "painting";
    int i, j;
    for (i = 0; a[i] != '\0' && b[j] != '\0', j++, i++;)
    {
        if (a[i] != b[j])
        {
            break;
        }
    }
    if (a[i] == b[j])
    {
        printf("Equal");
    }
    else if (a[i] < b[j])
    {
        printf("Smaller");
    }
    else
    {
        printf("Greater");
    }
    return 0;
}
