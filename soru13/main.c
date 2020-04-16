#include <stdio.h>
#include <stdlib.h>

int main()
{
    int abc;
    scanf("%d" , &abc);
    int yuz,on,bir;
    yuz = abc/100;
    on = abc/10%10;
    bir = abc%10;
    printf("yuzler:%d onlar:%d birler:%d", yuz, on, bir);
}
