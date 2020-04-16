#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liste[10];
    int k;
    for (k = 0; k < 10; k++)
    {
        scanf("%d" , &liste[k]);
    }
    int max = liste[0];
    for (k = 0; k < 10; k++)
    {
        if (max < liste[k])
        {
            max = liste[k];
        }
    }
    printf("en buyuk sayi : %d" , max);
}
