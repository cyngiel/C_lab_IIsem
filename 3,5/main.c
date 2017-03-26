#include <stdio.h>
#include <stdlib.h>
int rozmiar(char[]);


int main()
{
    FILE *pfrom, *pto;
    char from[80], to[80], temp;
    fpos_t dlugosc;

    printf("from.txt, to.txt\nPodaj sciezke do pliku zrodlowego: ");
    do{

    gets(from);
    pfrom = fopen(from, "rb");
        if (pfrom == NULL){
            printf("Blad otwarcia pliku, sprobuj ponownie\n");
        }

    }while (pfrom == NULL);


    printf("Podaj sciezke do pliku docelowego: ");
    do{

    gets(to);
    pto = fopen(to, "wb");
        if (pto == NULL){
            printf("Blad otwarcia pliku, sprobuj ponownie\n");
        }
        }while (pto == NULL);


    fseek(pfrom, 0, SEEK_END);
    fgetpos(pfrom, &dlugosc);
    printf("%d\n", dlugosc);
    char tab[dlugosc];
    int i, x;
    fread(tab, sizeof(pfrom), dlugosc, pfrom);
    x = dlugosc / 100;
    for(i = 0; i < dlugosc; i++){
        printf("\r%d", x);
        x+=x;
    }


    fwrite(tab, sizeof(pfrom), dlugosc, pto);



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
