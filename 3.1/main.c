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
        printf("B��d otwarcia pliku\n");
        exit(1); /*lub obs�uga b��du*/
    }

    while( i != EOF){
        i = fgetc(pf);
           // if(i == EOF) break;
            putchar(i);
    }

    return 0;
}
