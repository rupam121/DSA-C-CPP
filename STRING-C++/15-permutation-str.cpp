#include <stdio.h>

void permutation(char s[], int k) // start value = k
{
    static int a[] = {0};   // all value of array is 0
    static char result[10]; // empty result-array
    int i;
    if (s[k] == '\0')
    {
        result[k] = '\0';
        printf(result);
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                result[k] = s[i];
                a[i] = 1;
                permutation(s, k + 1);
                a[i] = 0;
            }
        }
    }
}
int main()
{
    char s[] = "ABC";
    permutation(s, 0);
    return 0;
}