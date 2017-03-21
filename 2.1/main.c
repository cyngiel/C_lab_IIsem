#include <stdio.h>
#include <stdlib.h>

int main()
{

    int var = 4;
    int *pvar = &var;

    printf("var: %d, pvar: %d\n\nZamiana wartosci zmiennej bezposrednio z 4 na 5\n", var, *pvar);

    var = 5;

    printf("var: %d, pvar: %d\n\nZamiana wartosci zmiennej przez wskaznik z 5 na 6\n", var, *pvar);

    *pvar = 6;

    printf("var: %d, pvar: %d\n\n", var, *pvar);

    printf("adres: %d\n", &var);

    return 0;
}
