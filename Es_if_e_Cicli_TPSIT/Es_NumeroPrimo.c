
#include <stdio.h>
int main(int argc, char *argv[])
{

    /*Dato un numero intero positivo N verificare se N è un numero primo*/

    int n = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {

        printf("Il numero inserito è un numero primo \n");
    }
    else
    {

        printf("Il numero inserito non è un nnumero primo \n");
    }

    return 0;
}