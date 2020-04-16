#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[30];
    scanf("%s", &isim);
    int yil;
    scanf("%d" , &yil);
    int yas = 2020 - yil;
    printf("adiniz
           : %s\n" , isim);
    printf("yasiniz: %d" , yas);
}
