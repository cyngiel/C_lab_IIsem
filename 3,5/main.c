#include <stdio.h>
#include <stdlib.h>
int rozmiar(char[]);


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





    while ( (temp = fread (pto, sizeof rozmiar(from), sizeof unsigned, pfrom) ) != EOF) {
        fputc (temp, pto);

    }

    fclose(pfrom);
    fclose(pto);



    return 0;
}

int rozmiar(char bufor[]){
	int i=0, rozmiar = 0;
	FILE *pf;
	pf = fopen(bufor, "r");

	if (pf == NULL){
        printf("Blad otwarcia pliku\n");
        exit(1);
    }

	while( fgetc(pf) != EOF){

        rozmiar++;
    }
	return rozmiar;
}
