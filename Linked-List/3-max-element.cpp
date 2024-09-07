#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL; // global variable

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int MAX(struct Node *p)
{
    int max = 0;

    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int RMAX(struct Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return 0;
    }
    x = MAX(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
    {
        return x=p->data;
    }
}
int main()
{
    int A[] = {3, 5, 7, 10, 15, 8, 12, 20};
    create(A, 8);

    printf(" Max is : %d", RMAX(first));

    return 0;
}