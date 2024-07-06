#include <stdio.h>

int main()
{
    char a[] = "abbaaa";
    char b[6];
    int i, j;
    // reverse > compare
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = sizeof(a); j >= 0; j--)
        {
            b[i] = a[j];
        }
    }

    if (a[i] == b[j])
    {
        printf("Palindrome");
    }
    else{
        printf("not Palindrome");
    }

    return 0;
}