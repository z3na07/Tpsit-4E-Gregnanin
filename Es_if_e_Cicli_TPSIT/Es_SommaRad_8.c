
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv){
    
    
    int nValori;
    int numCorrente;
    double somma=0;
    
    /*inserimento della quantità di valori da inserire nel ciclo*/
    printf("Quanti numeri vuoi inserire? \n");
    scanf("%d", &nValori);
    
    /*Ciclo per inserire i valori*/
    for(int i=0;i<nValori; i++){
    printf("Inserire %d numero \n", i+1);
    scanf("%d", &numCorrente);
    if(numCorrente<0){
        printf("Il numero inserito non è presente nel dominio di numeri validi per l'operazione che dobbiamo fare, il programma si interromperà \n");
        break;
    }
    somma=somma +sqrt((double) numCorrente);
    }
    
    printf("La somma delle radici quadrate dei numeri inseriti e %f", somma);
    
    
    return 0;
}