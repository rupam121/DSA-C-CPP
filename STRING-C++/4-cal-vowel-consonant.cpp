#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a[] = "how are you";
    int i;
    int v_count = 0;
    int c_count = 0;

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            v_count++;
        }
        else
        {
            c_count++;
        }
        // else if (a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122)
        // {
        //     c_count++;
        // }
    }
    cout <<"Total Vowel: "<< v_count << endl;
    return 0;
}