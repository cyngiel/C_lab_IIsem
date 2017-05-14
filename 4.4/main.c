#include <stdio.h>
#include <stdlib.h>
int wprowadzanie(int y[], int x);
int main()
{
    int m,min=0,tab[100],*wsk;
    wsk=tab;
    printf("Ile liczb wprowadzisz: ");
    scanf("%d",&m);
    min=wprowadzanie(wsk,m);
    printf("Element minimalny to: %d",min);
    return 0;
}

int wprowadzanie(int y[], int x)
{
    int i=0, min=0;
    for(i=0;i<x;i++)
    {
        printf("Podaj %d liczbe: ",i+1);
        scanf("%d",&y[i]);
        if (i==0) min=y[i];
        else if (min>y[i]) min=y[i];
    }
    return min;
}
