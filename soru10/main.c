#include <stdio.h>
#include <stdlib.h>
// �nemli not : her ay 30 g�n, her yil 360 g�n kabul edilirse...
int main()
{
    int g1, a1, y1;
    int g2, a2, y2;
    printf("baslangic tarihini giriniz\n");
    scanf("%d", &g1);
    scanf("%d", &a1);
    scanf("%d", &y1);
    printf("bitis tarihini giriniz\n");
    scanf("%d", &g2);
    scanf("%d", &a2);
    scanf("%d", &y2);
    int fark;
    fark = (y2-y1)*360 + (a2-a1)*30 + (y2-y1);
    printf("%d" , fark);
}
