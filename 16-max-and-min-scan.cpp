#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int n = sizeof(a);
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        else if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("max = %d and min = %d", max, min);
    return 0;
}