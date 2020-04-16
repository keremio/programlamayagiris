#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ygtb = 0.15, yf = 20;
    float igtb = 1;
    float elek = 50, ef = 0.5;
    float su = 5, sf = 10;
    float vet = 10, ekt = 1;
    float isci = 75, ni = 2;
    float tavuksayisi;
    scanf("%f", &tavuksayisi);
    float toplamgider = ygtb*yf*tavuksayisi + igtb * tavuksayisi + elek * ef + su * sf + vet + ekt * tavuksayisi + ni * isci;
    printf("gunluk toplam giderler %f TL'dir." , toplamgider);
}
