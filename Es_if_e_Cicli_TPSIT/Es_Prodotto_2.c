
#include <stdio.h>

int main()
{
    int a=0, b=0;
    int prodotto;
    int sommaProd=0;

    do{

        printf("Inserisci a \n");
        scanf("%d", &a);

        printf("Inserisci b \n");
        scanf("%d", &b);

        prodotto = a*b;

        printf(" il prodotto è: %d \n", prodotto);
        
        sommaProd=sommaProd+prodotto;

    }while(a!=0 && b!=0);
    
    printf("La somma di tutti i prodotti è %d", sommaProd);


    return 0;
}
