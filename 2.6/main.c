#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char wyraz[80];
    char a;
    int i=0,b=0;
    char *pointer = wyraz;

    printf("wpisz wyraz:\t");
    gets(wyraz);

a=wyraz[i];
while(a!='\0')
{
	b++;
	i++;
	a=wyraz[i];
}
printf("%d",b);

    return 0;
}

