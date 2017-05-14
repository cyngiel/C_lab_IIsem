#include <stdio.h>
#include <stdlib.h>
const N=5;
int czy_cyfry_parzyste (int r);
int main()
{
    int i,tab[N],x,j,*wsk;
    wsk=tab;
for(i=0;i<N;i++)
{
    printf("Podaj liczbe do pola [%d]: ",i);
    scanf("%d",&x);
    *(tab+i)=x;
}

for(j=0;j<N;j++)
{
    if(czy_cyfry_parzyste(wsk[j])==1) printf("%d\n",wsk[j]);
}

    return 0;
}


int czy_cyfry_parzyste (int r)
{
     while(r>0)
     {
          if (r%2==1) return 0;
          r/=10;
     }
     return 1;
}
