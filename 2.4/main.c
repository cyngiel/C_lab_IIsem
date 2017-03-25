#include <stdio.h>
#include <stdlib.h>

int suma(float, float);
int roznica(float, float);
int iloczyn(float, float);
int iloraz(float, float);

int main()
{
    int nav, a, b;

    do{
    printf("podaj a i b: ");
    scanf("%f, %f", a, b)
    //printf("\npodaj b: ");
    //b = getch(stdin) - '0';
    printf("1- suma, 2- roznica, 3- iloczyn, 4- iloraz, 0- koniec: ");
    nav = getch(stdin) - '0';
    fflush(stdin);

    if(nav == 0) break;

    switch(nav){
        case 1:
            suma(a, b); break;
        case 2:
            roznica(a, b); break;
        case 3:
            iloczyn(a, b); break;
        case 4:
            iloczyn(a, b); break;
    }

    }while(nav != 0);

    return 0;
}

int suma(float a, float b){
    int poprawnosc = 0;

    printf("\nsuma: %f\n"),a + b;
    poprawnosc = 1;

    return poprawnosc;
}

int roznica(float a, float b){
    int poprawnosc = 0;

    printf("\nroznica: %f\n"),a - b;
    poprawnosc = 1;

    return poprawnosc;
}

int iloczyn(float a, float b){

int poprawnosc = 0;

    printf("\niloczyn: %f\n"),a * b;
    poprawnosc = 1;

    return poprawnosc;
}

int iloraz(float a, float b){

 int poprawnosc = 0;
    if(b == 0) return poprawnosc;
    printf("\niloraz: %f\n"),a /b;
    poprawnosc = 1;

    return poprawnosc;
}
