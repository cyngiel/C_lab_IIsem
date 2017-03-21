#include <stdio.h>
#include <stdlib.h>

int N = 10;

int main()
{
    int i;
    int tab_int[N];
    int *pint;
    pint = tab_int;

    float tab_float[N];
    float *pfloat;
    pfloat = tab_float;

    char tab_char[N];
    char *pchar;
    pchar = tab_char;

    for(i = 0; i < N; i++){
        pint[i] = i++;
        pint[i] = i;
        printf("%d  ", pint[i]);

    }

    printf("\n\n");

    for(i = 0; i < N; i++){
        pfloat[i] = i++;
        pfloat[i] = i;
        printf("%f  ", pfloat[i]);

    }

    printf("\n\n");

    int ascii = 65;
    for(i = 0; i < N; i++){
        pchar[i] = ascii++;
        pchar[i] = ascii++;
        printf("%c  ", pchar[i]);
    }

    return 0;
}

