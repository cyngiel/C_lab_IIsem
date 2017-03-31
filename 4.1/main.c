#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int pierwsze(int x);
int podzielneprzez3(int x);
const N=4;
int main()
{

    int *px,x, tab[N][N],i,j,k,l;
    px=&x;


   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           printf("Podaj liczbe [%d][%d]: ",i,j);
            scanf("%d", &x);
    if(pierwsze(*px)==1)
    {
       *(*(tab+i)+j)=(*px);
    }        else if(pierwsze(*px)==0)
            {
      printf("Ta liczba nie jest pierwsza %d: \n",*px);
      j--;
            }
       }
   }
for(k=0;k<N;k++)
{
    for(l=0;l<N;l++)
        {
            if((podzielneprzez3(k)==1) && (podzielneprzez3(l)==1)) printf("%d\t",tab[k][l]);
        }
        printf("\n");
}
    return 0;
}
int pierwsze(int x)
{
    int i,p=1;
    for( i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
    {
        p=0;
        break;
    }
    }
return p;
}

int podzielneprzez3(int x)
{
    int p=1;
    if(x%3!=0)
    {
        p=0;
    }
return p;
}
