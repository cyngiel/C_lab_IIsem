#include <stdio.h>
#include <stdlib.h>

 struct student{
        char imie[80];
        char nazwisko[80];
        int numerIndeksu;
        char wydzial[80];
        int rokStudiow;
        };

int main(){

    struct student katalog[10];
    int isOn = 1;

    while(isOn){



    }


    return 0;
}

int menuStudent(){
    int nav, ret;
    printf("1- Wypelnij wszystkie pola\n2- Wypelnij wybrane pole\n3- Wypisz wszystkie pola\n4- Wypisz wybrane pole");
    nav = getc(stdin) - '0';


return ret;
}


