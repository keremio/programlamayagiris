#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, tektop = 0, cifttop = 0, tekort = 0, ciftort = 0,ts = 0, cs = 0;
    for (k = 1; k < 101; k++)
    {
        if (k % 2 == 0)
        {
            cifttop += k;
            cs++;

        }
        if (k % 2 == 1)
        {
            tektop += k;
            ts++;
        }
    }
    tekort = tektop / ts;
    ciftort = cifttop / cs;
    printf("tek sayilar toplami %d, cift sayilar toplami %d\n" , tektop, cifttop);
    printf("tek sayilar ortalamasi %d, cift sayilar ortalamasi %d", tekort, ciftort);

}
