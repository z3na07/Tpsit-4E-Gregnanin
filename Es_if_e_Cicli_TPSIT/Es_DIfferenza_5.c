
#include <stdio.h>
#include <math.h>

int main()
{
    int a=0, b=0, c=0;
    int diffPari=0 ,diffDispari=0 ,diffNulla=0;

    do{

        printf("Inserisci a \n");
        scanf("%d", &a);

        printf("Inserisci b \n");
        scanf("%d", &b);
        
        printf("Inserisci c \n");
        scanf("%d", &c);

        if(a-b%2==0){
            diffPari++;
        }
        else if(a-b==0){
            diffNulla++;
        }
        else if(a-b!=0 && a-b%2!=0){
            diffDispari++;
        }
        
        
        printf("\n Valori aggionrati \n");

    }while(a+b>c);
    
    printf("La differenza fra a e b è stata pari %d volte \n", diffPari);
    printf("La differenza fra a e b è stata dispari %d volte \n", diffDispari);
    printf("La differenza fra a e b è stata nulla %d volte \n", diffNulla);
    


    return 0;
}
