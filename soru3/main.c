#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sayilar[10],farklar[10];
    int k,n,min;
    //sayilar girilir
    for (k = 0; k < 10; k++)
    {
        scanf("%d" , &sayilar[k]);
    }
    //istenilen sayi girilir
    scanf("%d" , &n);
    for (k = 0; k < 10; k++)
    {
        farklar[k] = abs(sayilar[k] - n);
    }
    //sifirinci eleman siralama icin minimum olarak atanir
    min = farklar[0];
    for (k = 0; k < 10; k++)
    {
        if (min > farklar[k])
        {
            min = farklar[k];
        }
    }
    // minimum ile farklar eslendiginde sayilar cagrilir
    for (k = 0; k < 10; k++)
    {
        if (min == farklar[k])
        {
            printf("%d en yakin sayidir" , sayilar[k]);
        }
    }

}
