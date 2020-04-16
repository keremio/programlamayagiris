#include <stdio.h>
#include <stdlib.h>

int main()
{
     char urunadi[30];
     float fiyat;
     scanf("%s" , &urunadi);
     scanf("%f" , &fiyat);
     float kdvlifiyat;
     kdvlifiyat = 1.18 * fiyat;
     printf("%s'nin kdvli fiyati %f'dir", urunadi, kdvlifiyat);
}
