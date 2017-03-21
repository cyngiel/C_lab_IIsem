#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	//rozmiar min 3 max 9

	srand( time( 0 ) );
	int tab[9][9], x, y, i, k, xp, yp, suma, xconst, yconst;


	do{												//podwanie rozmiary tablicy
		printf("podaj wielkosc x z przedzia³u <3, 9> ");
		scanf("%d", &x);
		fflush(stdin);
		system("cls");
	}while(x < 3 || x > 9);

do{
		printf("podaj wielkosc y z przedzia³u <3, 9> ");
		scanf("%d", &y);
		fflush(stdin);
		system("cls");
	}while(y < 3 || y > 9);

	for(i = 0; i < y; i++){
		for(k = 0; k < x; k++){
			tab[i][k] = rand() % 11;

		}

	}


	do{											//podawanie x, y punktu
		printf("podaj x punktu: ");
		scanf("%d", &xp);
		fflush(stdin);
		system("cls");
	}while(xp < 0 || xp > x);

	do{
		printf("podaj y punktu: ");
		scanf("%d", &yp);
		fflush(stdin);
		system("cls");
	}while(yp < 0 || yp > y);



	for(i = 0; i < y; i++){						//wypisywanie tablicy
		for(k = 0; k < x; k++){
			printf(" %d ", tab[i][k]);

		}
			printf("\n");
	}

	xconst = (xp) - (yp);
	yconst = (xp) + (yp);

	for(i = 0; i < y; i++){						//.ilczenie sumy
		for(k = 0; k < x; k++){
			if(xconst == (k - i)) suma+= tab[i][k];
			else if(yconst == (i + k)) suma+= tab[i][k];
		}

	}

	printf("\nsuma: %d, xp: %d, yp: %d", suma, xp, yp);

	return 0;
}
