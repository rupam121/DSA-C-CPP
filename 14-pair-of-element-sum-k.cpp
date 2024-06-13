#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {6, 3, 8, 10, 16, 7, 5, 2, 4, 14};
    int k = 10;
    int n = sizeof(a);
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                std::cout << a[i] << "+" << a[j] << " " << k << endl;
            }
        }
    }

    int h[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // for hash array used for batter time complexity.
    for (int i = 0; i < n; i++)
    {
        if (h[k - a[i]] != 0)
        {

            printf("%d + %d = %d", a[i], (k - a[i]), k);
        }
        h[a[i]]++;
    }
    return 0;
}