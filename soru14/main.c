#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int kare;
    float sqrt;
    scanf("%d" , &kare);
    sqrt = pow(kare, 0.5);
    if (sqrt - (int)sqrt == 0)
    {
        printf("%d, tam karedir", kare);
    }
}
