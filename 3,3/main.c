#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *pfrom, *pto;
    char from[80], to[80], temp;

    printf("from.txt, to.txt\nPodaj sciezke do pliku zrodlowego: ");
    do{

    gets(from);
    pfrom = fopen(from, "r");
        if (pfrom == NULL){
            printf("Blad otwarcia pliku, sprobuj ponownie\n");
        }

    }while (pfrom == NULL);


    printf("Podaj sciezke do pliku docelowego: ");
    do{

    gets(to);
    pto = fopen(to, "w");
        if (pto == NULL){
            printf("Blad otwarcia pliku, sprobuj ponownie\n");
        }

    }while (pto == NULL);


     while ( (temp = fgetc(pfrom)) != EOF) {
        fputc (temp, pto);

    }

    fclose(pfrom);
    fclose(pto);

    return 0;
}
