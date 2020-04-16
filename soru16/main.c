#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float sayi;
    scanf("%f" , &sayi);
    int yuzler;
    if (sayi < pow(10,4) && sayi > pow(10,3))
    {
        yuzler = (int)sayi / 100 % 10;
    }
    else
    {
        yuzler = sayi / 100;
    }
    float kup = pow(sayi,3);
    if (yuzler % 2 == 0)
    {
        if (sqrt(kup) - (int)sqrt(kup) == 0)
        {
            printf("%f'nin kubu tam karedir" , sayi);
        }
    }
}
