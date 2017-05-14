#include <stdio.h>
#include <stdlib.h>
const N=30;
char odwracanie (char x[]);
int main()
{
    char *wsk,tab[N],m;
    wsk=tab;
    printf("Podaj tekst: ");
    gets(wsk);
    odwracanie(wsk);
    return 0;
}

char odwracanie (char x[])
{
    int z,i,j=0;
    char temp;
   z=strlen(x);
   for(i=0;i<z/2;i++)
   {
       j++;
    temp=x[i];
    x[i]=x[z-j];
    x[z-j]=temp;
   }
 if (z%2==0)
{
    temp=x[(z/2)-1];
    x[z/2-1]=x[(z/2)];
    x[(z/2)]=temp;
}
   puts(x);
   return x;
}
