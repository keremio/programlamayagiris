#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c = 0;
    for (i = 1; i <= 100; i++)
    {
        if ((2*i + 1) % 5 == 0)
        {
            c++;
        }
    }
    printf("2 katinin 1 fazlasi 5'e bolunebilen %d sayi vardir", c);
}

