#include <stdio.h>
#include <stdlib.h>

int main()
{
    float surfanufus = 500000, gantepnufus = 900000;
    int yil = 0;
    do
    {
        surfanufus *= 1.025;
        gantepnufus *= 1.014;
        yil++;
        printf("%d %f %f\n" ,yil, surfanufus, gantepnufus);
    }while(surfanufus <= gantepnufus);
    printf("\n%d yil sonra Sanliurfa'nin nufusu Gaziantep'in nufusunu gececektir." , yil);
}
