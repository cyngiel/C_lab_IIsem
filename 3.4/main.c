#include <stdio.h>
#include <stdlib.h>
void copy(char[], char[], int);
int rozmiar(char []);

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

   copy(from, to, rozmiar(from));

    fclose(pfrom);
    fclose(pto);



    return 0;
}


void copy(char from[], char to[], int size){
    char temp;
    int i;
    FILE *pfrom, *pto;

    pfrom = fopen(from, "r");
    pto = fopen(to, "w");


printf("\n");

while(size > 0){
    fseek(pfrom, size-1, 0);
    temp = fgetc(pfrom);
    printf("%c", temp);
    fputc(temp, pto);
    size--;
}


}

int rozmiar(char bufor[]){
	int i=0, rozmiar = 0;
	FILE *pf;
	pf = fopen(bufor, "r");

	if (pf == NULL){
        printf("Blad otwarcia pliku\n");
        exit(1);
    }

	while( (i = fgetc(pf)) != EOF){
        putchar(i);
        rozmiar++;
    }
	return rozmiar;
}
