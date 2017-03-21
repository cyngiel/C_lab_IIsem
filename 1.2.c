#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int zliczaj(char napis[1][80]);
void sortuj(char tab[][80], int k);
void wyswietl(char tab[][80], int k);

int main(int argc, char *argv[]) {

	char napisy[9][80];

	int i, k, n;
	printf("Podaj ilosc napisow do wpisania: ");
	do{
        scanf("%d", &k);
	}while(k < 0 || k > 9);


	for(i = 0; i < k; i++){                                                 //WPISYWANMIE NAPISÓW DO TABLICY
		scanf("%s", &napisy[i]);

	}

    sortuj(napisy, k);
    wyswietl(napisy, k);



	return 0;
}

void sortuj(char tab[][80], int k){                         // sortuje napisy k- ilosc napisow
int p = 1, i;
char temp[1][80];

while(p){
    for(i = 0; i < k-1; i++){
        p = 0;

		if(zliczaj(tab[i]) > zliczaj(tab[i+1])){

			strcpy(temp[0],tab[i+1]);
			strcpy(tab[i+1],tab[i]);
			strcpy(tab[i],temp[0]);

            p = 1;
		}

	}
}

}

void wyswietl(char tab[][80], int k){
int i;
printf("\n---------------------------------\n\n");
    for(i = 0; i < k; i++){
		printf("%s\n", tab[i]);
	}

}

int zliczaj(char napis[1][80]){                              // zlicza ilosc malych liter w podanym wyrazie
int x = 0, n;                                                       // x - ilosc malych liter

    for(n = 0; n < strlen(napis[0]); n++){
        if( islower( napis[0][n]) != 0 ) x++;

    }

return x;
}

