#include <stdio.h>

void perm(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        printf(s);
    }
    else
    {
        for (i = 0; i <= h; i++)
        {
            swap(s[l], s[i]); // swap is not defind
            perm(s, l + 1, h);
            swap(s[i], s[i]); // swap is not defind
        }
    }
}
int main()
{
    char s[] = "abc";
    perm(s, 0, 3);
    return 0;
}