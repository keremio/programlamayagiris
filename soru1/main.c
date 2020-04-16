#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[20];
    int k;
    int ortalama;
    int gecici;
    int ptoplam = 0;
    int pc = 0;
    int c100200 = 0;
    for (k = 0; k < 20; k++)
    {
        scanf("%d" , &dizi[k]);
    }
    int toplam = 0;
    for (k = 0; k < 20; k++)
    {
        toplam += dizi[k];
    }
    ortalama = toplam / 20;
    int enbuyuk = dizi[0];
    int enkucuk = dizi[0];
    for (k = 0; k < 20; k++)
    {
        if (dizi[k] > enbuyuk)
        {
            enbuyuk = dizi[k];
        }
        if (dizi[k] < enkucuk)
        {
            enkucuk = dizi[k];
        }
    }

    for (k = 0; k < 20; k++)
    {
        if (dizi[k] > 0)
        {
            ptoplam += dizi[k];
            pc++;
        }
    }

    for (k = 0; k < 20; k++)
    {
        if (100 <= dizi[k] && dizi[k] <= 200)
        {
            c100200++;
        }
    }
    int portalama = ptoplam / pc;
    printf("sayilarin ortalamasi %d'dir\n", ortalama);
    printf("pozitif sayilarin ortalamasi %d'dir.\n" , portalama);
    printf("enbuyuk: %d, enkucuk: %d\n", enbuyuk, enkucuk);
    printf("100 ile 200 arasinda %d sayi vardir", c100200);
}
