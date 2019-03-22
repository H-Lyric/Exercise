#include <stdio.h>

int main()
{
    long int n = 0;
    int c;
    while ((c = getchar()) != EOF)
        ++n;
    printf ("%ld", n);
    return 0;
}

