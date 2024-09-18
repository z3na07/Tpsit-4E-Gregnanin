
#include <stdio.h>

int main()
{
    int a,b;
    int numeroIns=0;
    int contatore=0;
    int somma=0;
    double media=0;
    
    //inserimento valore minore dell'intervallo
    printf("Inserisci a \n");
    scanf("%d", &a);
    
    //inserimento valore maggiore dell'intervallo
    printf("Inserisci b (deve essere maggiore di a) \n");
    scanf("%d", &b);
    
    
    
    if(a>b){
        while(a>b){
            printf("Valori inseriti sbagliati, reinserire \n\n");
            
            //inserimento valore minore dell'intervallo
            printf("Inserisci a \n");
            scanf("%d", &a);
    
            //inserimento valore maggiore dell'intervallo
            printf("Inserisci b (deve essere maggiore di a) \n");
            scanf("%d", &b);
        }
        
    }
    
    if(a==b){
        while(a==b){
            printf("Valori inseriti sbagliati, reinserire \n\n");
            
            //inserimento valore minore dell'intervallo
            printf("Inserisci a \n");
            scanf("%d", &a);
    
            //inserimento valore maggiore dell'intervallo
            printf("Inserisci b (deve essere maggiore di a) \n");
            scanf("%d ", &b);
        }
        
    }
    
    do{
        
        printf("Inserisci un numero compreso fra a e b \n");
        scanf("%d", &numeroIns);
        
        contatore++;
        somma=somma+numeroIns;
        
        
        
        
    }while(numeroIns>a && numeroIns<b);
    
    media= (double) somma/ (double) contatore;
    
    printf("La media e %f", media);
    

    return 0;
}