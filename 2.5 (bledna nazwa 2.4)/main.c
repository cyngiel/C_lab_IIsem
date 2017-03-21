#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void duze(char[]);
void male(char[]);

int main()
{
    int nav;
    char wyraz[80];

    printf("Wpisz wyraz: ");
    gets(wyraz);

    do{
    fflush(stdin);
    //system("cls");
    printf("Wybierz 1 zeby zamienic litery na wielkie\ wybierz 2 zaby zamienic na male: ");
    nav = (getch(stdin) - '0');
    fflush(stdin);
    }while(nav != 1 && nav != 2);


    if(nav == 2) male(wyraz);
    else duze(wyraz);

    printf("\n%s", wyraz);

    return 0;
}


void duze(char wyraz[]){
int i;
    for(i = 0; i < strlen(wyraz); i++){
        wyraz[i] = toupper(wyraz[i]);


    }

}

void male(char wyraz[]){
int i;
    for(i = 0; i < strlen(wyraz); i++){
        wyraz[i] = tolower(wyraz[i]);

    }

}
