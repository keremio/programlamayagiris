#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int x = 1;
    if (n == 0 || n == 1)
    {
        return x;
    }
    else
    {
        x = n * fact(n-1);
        return x;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n))
    ;
    return 0;
}
