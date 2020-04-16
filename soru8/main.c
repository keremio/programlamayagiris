#include <stdio.h>
#include <stdlib.h>
int factorial(int i)
{
    int x = 1;
    if (i == 0 || i == 1)
    {
        return x;
    }
    else
    {
        x = i * factorial(i - 1);
        return x;
    }
}

int main()
{
    int n,i;
    int terim;
    int toplam = 0;
    for (i = 1; i <= 10; i++)
    {
        terim = (i + (n-i)/factorial(i));
        toplam += terim;
    }
    printf("%d" , toplam);
}
