#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c = 0;
    //istenilen sayilar dondurulur
    for (i = 10; i <= 200; i++)
    {
        //sadece 1 ve kendisine bolunebilen sayilar asal sayidir
        for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            c++;
        }
    }
    if (c == 2)
        {
            printf("%d " , i);
        }
        c = 0;
    }
}
