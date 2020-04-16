#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, s2;
    scanf("%d" , &s1);
    scanf("%d" , &s2);
    if (s1 != 0 && s2 != 0)
    {
    if (s1 > s2)
    {
        if (s1 % s2 == 0)
        {
            printf("%d, %d'ye tam bolunur.", s1, s2);
        }
        else
        {
            printf("%d ve %d aralarinda asal sayilardir.", s1, s2);
        }
    }
    else if (s2 > s1)
    {
        if (s2 % s1 == 0)
        {
            printf("%d, %d'ye tam bolunur.", s2, s1);
        }
        else
        {
            printf("%d ve %d aralarinda asal sayilardir.", s1, s2);
        }
    }
    else
    {
        printf("iki sayi ayni oldugundan birbirine bolunebilir.");

    }
    }
    else
    {
        if (s1 == 0 && s2 == 0)
        {
            printf("sifir bolu sifir belirsizligi.");
        }
        else{
            printf("bir sayi sifira bolunemez.");
        }
    }
}
