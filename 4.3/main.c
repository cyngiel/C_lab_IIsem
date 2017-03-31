#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const N=30;
char wprowadzenie (char x[]);
char kopiowanie_tekstu (char x[], char y[]);
int main()
{

    int i;
    char *wsk,tab1[N],*wsk2,tab2[N];
    wsk=tab1;
    wsk2=tab2;
    fflush(stdin);
    wprowadzenie(wsk);
    kopiowanie_tekstu(wsk,wsk2);
    puts(wsk2);
    return 0;
}

char wprowadzenie(char x[])
{
    char f;
    printf("Podaj tekst, ktory chcesz wprowadzic: ");
    f=gets(x);
    return f;
}

char kopiowanie_tekstu(char x[], char y[])
{
    int i,z;
    z=strlen(x);
    for(i=0;i<z;i++)
    {
        y[i]=x[i];
    }
    return y;
}
