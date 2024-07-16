#include <stdio.h>

struct matrix
{
    int a[10];
    int n;
};

void Set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
        m->a[i - 1] = x; // Use i - 1 as the index
}

int Get(struct matrix m, int i, int j)
{
    if (i == j)
        return m.a[i - 1];
    else
        return 0;
}

void Display(struct matrix *m)
{
    int i, j;
    for (i = 0; i < m->n; i++)
    {
        for (j = 0; j < m->n; j++)
        {
            if (i == j)
                printf("%d ", m->a[i - 1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    m.n = 4;

    for (int i = 0; i < 10; i++)
    {
        m.a[i] = 0; // Initialize the array
    }

    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 8);
    Set(&m, 3, 3, 6);
    // Set(&m, 4, 4, 8); // This will cause an error because the array index is out of bounds

    // Display(&m);

    printf("%d \n", Get(m, 2, 2));
    return 0;
}  