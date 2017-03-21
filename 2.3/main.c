#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intWrt00 = 0, intWrt01 = 0, intWrt02 = 0, intWrt03 = 0, intWrt04 = 0;
    int i = 10, *pInt, a, b;
    int intTab[5];

    pInt = &intWrt00;
    *pInt = i;
    a = *pInt; b = &pInt;
    printf("*pInt: %d, pInt: %x, &pInt: %x\n", a, pInt, b);
    i++;

    pInt = &intWrt01;
    *pInt = i;
    a = *pInt; b = &pInt;
    printf("*pInt: %d, pInt: %x, &pInt: %x\n", a, pInt, b);
    i++;

    pInt = &intWrt02;
    *pInt = i;
    a = *pInt; b = &pInt;
    printf("*pInt: %d, pInt: %x, &pInt: %x\n", a, pInt, b);
    i++;

    pInt = &intWrt03;
    *pInt = i;
    a = *pInt; b = &pInt;
    printf("*pInt: %d, pInt: %x, &pInt: %x\n", a, pInt, b);
    i++;


    pInt = &intWrt04;
    *pInt = i;
    a = *pInt; b = &pInt;
    printf("*pInt: %d, pInt: %d, &pInt: %x\n\n", a, pInt, b);

    pInt = intTab;

    for (i = 0; i < 5; i++){
        pInt = i + 110;
        a = pInt;
       b = &pInt;
    printf("*pInt: %d, pInt: %d, &pInt: %x\n\n", a, pInt, b);
        pInt + i;
    }





    return 0;
}
