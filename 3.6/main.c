#include <stdio.h>
#include <stdlib.h>

int main()
{

    size_t n;
    int suma = 0, x = 0, i;
    FILE *pfrom, *pto;
    char from[80], to[80];

    printf("from.txt,  to.txt\n");
    printf("Podaj sciezke plku zrodlowego: \n");
    do{
        gets(from);
        pfrom = fopen(from, "r");
         if(pfrom != NULL) break;
         printf("\nblad otwardzia pliku, sprobuj jescze raz: ");
    }while(1);
    system("cls");
    printf("from.txt,  to.txt\n\n%s\n",from);
    printf("Podaj sciezke plku docelowego: \n");
    do{
        gets(to);
        pto = fopen(to, "w");
        if(pto != NULL) break;
        printf("\nblad otwardzia pliku, sprobuj jescze raz: ");

    }while(1);


    printf("podaj n: ");
    scanf("%x", &n);

    system("cls");
    printf("%s, %s, %x\n",from, to, n );

    for(i = 0; i < n; i++){

        if(feof(pfrom) != 0 && i < n) {

            suma = -1;
            printf("\n\nMniej elementow niz n!");
            break;
        }
        fscanf(pfrom, "%d", &x);
        //pfrom += 1;
        fgetc(pfrom);
       // printf("%d  ", x);
        suma += x;
    }
    fprintf(pto, "%d", suma);
    //fputchar(suma, pto);
    printf("\nsuma: %d", suma);
    fclose(pfrom);
    fclose(pto);
    return 0;
}
