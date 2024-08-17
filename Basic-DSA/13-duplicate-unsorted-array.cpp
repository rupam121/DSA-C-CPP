#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = sizeof(arr);
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; i < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1)
                printf("%d %d \n", arr[i], count);
            // std::cout << arr[i] << " " << count << endl;
        }
    }
    return 0;
}
