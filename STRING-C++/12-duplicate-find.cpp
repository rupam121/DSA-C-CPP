#include <stdio.h>

int main()
{
    char a[] = "finding";
    int h[26]; // hash map
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        h[a[i] - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (h[i] > 1)
        {
            printf("%c \n", i+97);
            printf("%d",h[i]);
        }
    }
    return 0;
}
