#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float pay;
    float payda;
    int k;
    scanf("%f" , &pay);
    scanf("%f" , &payda);
    float sayi = pay/payda;
    int ordc = 0;
        for (k = 0; k < 10; k++)
    {
        if (pow(10,k) < sayi && pow(10,k+1) > sayi)
        {
            printf("%d adet tam hane vardir\n" , k+1);
        }
    }
    sayi = sayi - (int)(sayi);
    sayi *= pow(10,8);
    float bas;
    for (k = 0; k < 9; k++)
    {
        bas = sayi / pow(10,(8-k));
        bas = (int)bas % 10;
        if (bas != 0)
        {
            ordc++;
        }
    }
    printf("%d adet ondalik basamak vardir" , ordc);
}
