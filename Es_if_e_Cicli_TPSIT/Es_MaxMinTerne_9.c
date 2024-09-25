
#include <stdio.h>

int main()
{
    int a, b, c;
    int min, max;
    int cont = 0;
    
    do{
        
        printf("Inserisci a \n");
        scanf("%d", &a);
        printf("Inserisci b \n");
        scanf("%d", &b);
        printf("Inserisci c \n");
        scanf("%d", &c);
        
        if(a>=0 && b>=0 && c>=0 && a<b && b<c){
            cont ++;
            if(cont == 1){
                max = c;
                min = a;
            }
            if(b>max){
                max = c;
            }
            
            if(a<min){
                min = a;
            }
           
           printf("\n TERNA VLIDA \n");
        }
        else
            printf(" \n TERNA NON VALIDA \n");
    }while(a>=0 && b>=0 && c>=0);
    
    printf("Valore massimo inserito nelle terne: %d \n", max);
    printf("Valore minimo inserito nelle terne: %d", min);

    return 0;
}