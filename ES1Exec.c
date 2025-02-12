
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]){

    if(argc < 1){
        printf("Errore, numero di argomenti sbagliato \n");
        return 1;
    }
    
    execl("/bin/cat", "cat", argv[1], NULL);

    printf("Termianto con errori");


    return 0;
}