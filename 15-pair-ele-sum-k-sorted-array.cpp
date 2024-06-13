#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int n = sizeof(a);
    int i = 0, j = n - 1, k = 10;

    while (i < j)
    {
        if (a[i] + a[j] == k)
        {
            printf("%d + %d = %d", a[i], a[j], k);
            i++;
            j--;
        }
        else if (a[i] + a[i] < k)
        {
            i++;
        }
        else
            j--;
    }

    return 0;
}