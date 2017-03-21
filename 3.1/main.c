#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf;
    char i, bufor[80];

    printf("podaj sciezke dostepu: \n")
    gets(bufor);

    pf = fopen(bufor, "r");

    if (pf == NULL){
        printf("B³¹d otwarcia pliku\n");
        exit(1); /*lub obs³uga b³êdu*/
    }

    while( i != EOF){
        i = fgetc(pf);
           // if(i == EOF) break;
            putchar(i);
    }

    return 0;
}
