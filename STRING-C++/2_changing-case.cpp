#include <stdio.h>

int main()
{
    char A[] = "WELLCOME";
    int i;
    for (i = 0; i < A[i] != '\0'; i++)
    {
        A[i] = A[i] + 32;
    }
    printf("%s",A);
    return 0;
}