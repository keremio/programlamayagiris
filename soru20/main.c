#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int binary[8] = {0,0,0,0,0,0,0,0};
    int sayi,k;
    scanf("%d" , &sayi);
    for (k = 0; k < 8; k++)
    {
        if (sayi / pow(2,(7-k)) >= 1)
        {
            binary[k] = 1;
            sayi -= pow(2,(7-k));
        }
    }
    for (k = 0; k < 8; k++)
    {
        printf("%d" , binary[k]);
    }
}
