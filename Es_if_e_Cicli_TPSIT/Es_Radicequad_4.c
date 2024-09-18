
#include <stdio.h>
#include <math.h>

int main()
{
    int a=0, b=0;
    int Rapporto=0;
    int radice=0;

    do{

        printf("Inserisci a \n");
        scanf("%d", &a);

        printf("Inserisci b \n");
        scanf("%d", &b);

        if(a>b){
            Rapporto=a/b;
        }
        else if(b>a){
            Rapporto=b/a;
        }
        else{
            Rapporto=a/b;
        }
        
        if(Rapporto>=0){
            radice=sqrt(Rapporto);
            printf("La radice è: %d \n", radice);
        }
        else
            radice=0;

    }while(radice!=0);
    
    
    printf("Il motivo per cui non abbiamo continuato il ciclo è che il nostro radicando era negativo quindi la radice era impossibile nel dominio dei numeri reali");


    return 0;
}
