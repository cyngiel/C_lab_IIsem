#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int czy_pierwsza(int n);


int main()
{
int a, b, p = 2;
//double p;                                                        //p - pierwsza, m - Mersenne'a
float m;
    printf("Przedzial liczb Mersenne'a  <a, b>\nPodaj a (wieksze od 0) a: ");
    do{
        scanf("%d", &a);
        fflush(stdin);
    }while( a < 0);

    printf("\nPodaj b (musi byc wieksza od a) b: ");
    do {
        scanf("%d", &b);
        fflush(stdin);
    }while(b <= a );


    while(m <= b){

        if(czy_pierwsza(p) == 1) {
           m = pow(2, p) - 1;
           if(m >= a && m <=b ) printf("Dla p = %d, m = %f\n", p, m);

        }

        p++;
    }
return 0;
}
int czy_pierwsza(int p){
int i, n = 1;
//gdy liczba naturalna jest mniejsza ni¿ 2 to nie jest pierwsz¹

  for(i = 2; i <= sqrt(p); i++){
    if((p % i) == 0) n = 0; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  }
  return n;
}
