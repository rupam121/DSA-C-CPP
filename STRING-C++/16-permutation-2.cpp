#include <stdio.h>

void swap(char a,char b){
	char temp;
	temp=a;
	a=b;
	b=temp;
}
void perm(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        printf("%s \n",s);
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
    char s[] = "abcc";
    perm(s, 0, 3);
    return 0;
}
