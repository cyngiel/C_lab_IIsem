#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int rozmiar(char[]);

int main(int argc, char** argv) {
	char bufor[80];
	int x;
	
	printf("program 3.2\n");
	printf("Podaj sciezke dostepu: ");
	gets(bufor);
	
	x = rozmiar(bufor);
	
	printf("rozmiar pliku txt to %d bajtow", x);
	
	return 0;
}

int rozmiar(char bufor[]){
	int i=0, rozmiar = 0; 
	FILE *pf; 
	pf = fopen(bufor, "r");
	
	if (pf == NULL){
        printf("Blad otwarcia pliku\n");
        exit(1); /*lub obs�uga b��du*/
    }
	
	while( fgetc(pf) != EOF){

        rozmiar++;
    }
	return rozmiar;
}
