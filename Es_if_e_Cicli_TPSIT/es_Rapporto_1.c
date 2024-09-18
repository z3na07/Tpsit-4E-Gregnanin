
#include <stdio.h>

int main()
{
    int a=0, b=0;
    double rapp;

    do{

        printf("Inserisci a \n");
        scanf("%d", &a);

        printf("Inserisci b \n");
        scanf("%d", &b);

        if(b>a){
            rapp=(double) a/ (double) b;
        }
        else if(a>b){
            rapp= (double) b/ (double) a;
        }
        else if(a==b){
            rapp= (double) a/ (double) b;
        }

        printf(" il rapport è: %f \n", rapp);

    }while(a!=0 && b!=0);


    return 0;
}
